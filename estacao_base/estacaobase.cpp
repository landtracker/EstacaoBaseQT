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
    else
    {
        system("killall estacao_base");
    }

    //this->TCPclient = new ClientTCP(1234, "127.0.0.1");
    //ui->textEdit->setDisabled(true);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(update()));
    timer->start(1000);
}
EstacaoBase::~EstacaoBase()
{
    delete ui;
}

void EstacaoBase::insertCommand(char command, char descriptor)
{
    commandsVector.push_back(command);
    commandsVector.push_back(descriptor);

    if(command == 5)
    {
        usleep(500000);
        system("./video.sh"); ///para abrir o video
    }

    if(command == 6)
    {
        system("killall mplayer &"); ///para abrir o video
    }
    if(command == 7)
    {
        usleep(500000);
        system("./audio.sh");///abrir o audio
    }
    if(command == 8)
    {
        system("killall aplay &");///fecha o audio
    }
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

/*void EstacaoBase::changeVelocityValue(float value)
{
    mutexVelocity.lock();
    QFont font = ui->labelVelocityValue->font();
    font.setPointSize(20);
    ui->labelVelocityValue->setStyleSheet("QLabel { background-color : bold; color : red; }");
    ui->labelVelocityValue->setText(QString::number(value));
    ui->labelVelocityValue->setFont(font);
    mutexVelocity.unlock();
}*/

/*void EstacaoBase::changeTemperatureValue(float value)
{
    mutexTemperature.lock();
    QFont font = ui->labelTemperatureValue->font();
    font.setPointSize(20);
    ui->labelTemperatureValue->setStyleSheet("QLabel { background-color : bold; color : red; }");
    ui->labelTemperatureValue->setText(QString::number(value));
    ui->labelTemperatureValue->setFont(font);
    mutexTemperature.unlock();
}*/
/*
void EstacaoBase::changeInclinationXValue(float value)
{
    QFont font = ui->labelInclinationValueX->font();
    font.setPointSize(20);
    ui->labelInclinationValueX->setStyleSheet("QLabel { background-color : bold; color : red; }");
    ui->labelInclinationValueX->setText(QString::number(value));
    ui->labelInclinationValueX->setFont(font);
}

void EstacaoBase::changeInclinationYValue(float value)
{
    QFont font = ui->labelInclinationValueY->font();
    font.setPointSize(20);
    ui->labelInclinationValueY->setStyleSheet("QLabel { background-color : bold; color : red; }");
    ui->labelInclinationValueY->setText(QString::number(value));
    ui->labelInclinationValueY->setFont(font);
}
*/
void EstacaoBase::update()
{
    mutex.lock();
        QFont font = ui->labelVelocityValue->font();
        font.setPointSize(20);
        ui->labelVelocityValue->setStyleSheet("QLabel { background-color : bold; color : red; }");
        ui->labelVelocityValue->setText(QString::number((int)vel));
        ui->labelVelocityValue->setFont(font);

        ui->labelTemperatureValue->setStyleSheet("QLabel { background-color : bold; color : red; }");
        ui->labelTemperatureValue->setText(QString::number((int)temp));
        ui->labelTemperatureValue->setFont(font);

        ui->labelInclinationValueX->setStyleSheet("QLabel { background-color : bold; color : red; }");
        ui->labelInclinationValueX->setText(QString::number((int)incX));
        ui->labelInclinationValueX->setFont(font);

        ui->labelInclinationValueY->setStyleSheet("QLabel { background-color : bold; color : red; }");
        ui->labelInclinationValueY->setText(QString::number((int)incY));
        ui->labelInclinationValueY->setFont(font);
    mutex.unlock();
}

void EstacaoBase::UpdateLabels(char v, char t, char x, char y)
{
    mutex.lock();
        vel = v;
        temp = t;
        incX = x;
        incY = y;
    mutex.unlock();
}

void EstacaoBase::on_EstacaoBase_destroyed()
{
    system("killall estacao_base");
}
