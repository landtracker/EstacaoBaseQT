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
        //system("killall estacao_base");
    }

    //this->TCPclient = new ClientTCP(1234, "127.0.0.1");
    //ui->textEdit->setDisabled(true);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(update()));
    timer->start(10000);
    audioOn = false;
    audioOff = false;
    videoOn = false;
    videoOff = false;
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
    if(audioOn == true)
    {
        usleep(500000);
        //process = new QProcess(this);
        //system("nc -l 7777 | aplay &");///abrir o audio
        //system("./audio &");///abrir o audio
        //QStringList argo,list;
        //argo <<"./audio.sh";
        //list <<"/usr/bin/bash";

        //process->setEnvironment(list);
       // QDir directory("./home/lucas/Dropbox/UTFPR/7_periodo/oficina_de_integracao_3/codigos/Estacao_Base/build-estacao_base-Desktop-Debug/");
        //QString path = directory.filePath("audio");


        //process.start(path);
        //process->start("audio", QStringList());
        //process->waitForStarted();
        //process->write("./audio.sh &\n");
        //process->waitForFinished();
       // process.start("nc -l 7777 | aplay", QStringList() << "/home/lucas/test.txt");
        //process.start("test.sh", arg);
        //process.waitForFinished(0);
        //system("./home/lucas/Dropbox/UTFPR/7_periodo/oficina_de_integracao_3/codigos/Estacao_Base/build-estacao_base-Desktop-Debug/audio");///abrir o audio
        //process->start("nc -l 7777 | aplay",  QStringList() << "test");
        //QProcess::execute("xterm -e ./audio");
        processAudio.start("xterm -e ./audio");
        audioOn = false;
    }
    if(audioOff == true)
    {
        system("killall audio &");///fecha o audio
        system("fuser 7777/tcp -k &");///fecha o audio
        audioOff = false;
    }

    char commandToSend[512];

    commandToSend[0] = commandsVector.size()/2;

    for(unsigned int i = 0; i<commandsVector.size(); i++)
    {
        commandToSend[i+1] = commandsVector[i];
    }

    if(videoOn == true)
    {
        usleep(500000);
       // system("./video.sh"); ///para abrir o video
        processVideo.start("./video.sh");
        videoOn = false;
    }

    if(videoOff == true)
    {
        system("killall mplayer &"); ///para abrir o video
        system("fuser 2234/tcp -k &"); ///para abrir o video
        videoOff = false;
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

    if(command == 5)
    {
        videoOn = true;
    }
    if(command == 6)
    {
        videoOff = true;
    }
    if(command == 7)
    {
        audioOn = true;
    }
    if(command == 8)
    {
        audioOff = true;
    }
}

void EstacaoBase::on_pushButtonSendToEmbededSystem_clicked()
{
    this->sendCommandsToRover();
    ui->lineEditCommandsList->setText("");
    ui->lineEditCommand->setText("");
    ui->lineEditDescriptor->setText("");
    commandsVector.clear();
}

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
