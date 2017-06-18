#ifndef ESTACAOBASE_H
#define ESTACAOBASE_H

#include <QMainWindow>
#include<ClientTCP.h>
#include<vector>
#include <string>

namespace Ui {
class EstacaoBase;
}

class EstacaoBase : public QMainWindow
{
    Q_OBJECT

public:
    explicit EstacaoBase(QWidget *parent = 0);
    ~EstacaoBase();
    void insertCommand(char command, char descriptor);
    vector<char> getCommandsVector();
    void sendCommandsToRover();
    void changeVelocityValue(float value);


private slots:
    void on_pushButtonAddCommand_clicked();

    void on_pushButtonSendToEmbededSystem_clicked();

    void on_EstacaoBase_destroyed();

private:
    Ui::EstacaoBase *ui;
    ClientTCP *TCPclient;
    vector<char> commandsVector;
};

#endif // ESTACAOBASE_H
