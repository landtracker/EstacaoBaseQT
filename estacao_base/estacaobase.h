#ifndef ESTACAOBASE_H
#define ESTACAOBASE_H

#include <QMainWindow>
#include<ClientTCP.h>
#include<vector>

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


private slots:
    void on_pushButtonAddCommand_clicked();

    void on_pushButtonSendToEmbededSystem_clicked();

private:
    Ui::EstacaoBase *ui;
    ClientTCP *TCPclient;
    vector<char> commandsVector;
};

#endif // ESTACAOBASE_H
