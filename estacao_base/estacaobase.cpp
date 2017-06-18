#include "estacaobase.h"
#include "ui_estacaobase.h"


EstacaoBase::EstacaoBase(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EstacaoBase)
{
    ui->setupUi(this);

    FILE *serverIpFile;
    serverIpFile = fopen("serverIp.txt", "r");
    char ip[20];
    int port;
    if (serverIpFile!=NULL)
    {
        fscanf (serverIpFile, "%d", &port);
        printf("%d\n", port);
        fscanf (serverIpFile, "%s", ip);
        printf("%s\n", ip);
        fclose (serverIpFile);
        this->TCPclient = new ClientTCP(port, ip);
    }

    //ui->textEdit->setDisabled(true);
}
EstacaoBase::~EstacaoBase()
{
    delete ui;
}

void EstacaoBase::insertCommand(char command, char descriptor)
{
    commandsVector.push_back(command);
    commandsVector.push_back(descriptor);
}

vector<char> EstacaoBase::getCommandsVector()
{
    return commandsVector;
}

void EstacaoBase::sendCommandsToRover()
{
    char commandToSend[512];

    commandToSend[0] = commandsVector.size()/2;

    for(unsigned int i = 0; i<commandsVector.size(); i++)
    {
        commandToSend[i+1] = commandsVector[i];
    }

    TCPclient->sendMessageToServer(commandToSend, commandsVector.size()+1);
}

void EstacaoBase::on_pushButtonAddCommand_clicked()
{
    int command, descriptor;
    command = (ui->lineEditCommand->text().toInt());
    descriptor = (ui->lineEditDescriptor->text().toInt());
    this->insertCommand((char)command, (char)descriptor);
    //printf("%d %d", command, descriptor);
    ui->lineEditCommandsList->setText(ui->lineEditCommandsList->text() + ui->lineEditCommand->text() + " " + ui->lineEditDescriptor->text() + ", ");
}

void EstacaoBase::on_pushButtonSendToEmbededSystem_clicked()
{
    this->sendCommandsToRover();
    ui->lineEditCommandsList->setText("");
    ui->lineEditCommand->setText("");
    ui->lineEditDescriptor->setText("");
    commandsVector.clear();
}

void EstacaoBase::changeVelocityValue(float value)
{
    QFont font = ui->labelVelocityValue->font();
    font.setPointSize(20);
    ui->labelVelocityValue->setStyleSheet("QLabel { background-color : bold; color : red; }");
    ui->labelVelocityValue->setText(QString::number(value));
    ui->labelVelocityValue->setFont(font);
}
