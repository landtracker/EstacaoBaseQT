#ifndef ESTACAOBASE_H
#define ESTACAOBASE_H

#include <QMainWindow>
#include<ClientTCP.h>
#include<vector>
#include <string>
#include <unistd.h>
#include <mutex>          // std::mutex
#include <QTimer>
#include <stdlib.h>     /* srand, rand */

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
    /*void changeVelocityValue(float value);
    void changeTemperatureValue(float value);
    void changeInclinationXValue(float value);
    void changeInclinationYValue(float value);*/
    void UpdateLabels(char v, char t, char x, char y);

private slots:
    void on_pushButtonAddCommand_clicked();

    void on_pushButtonSendToEmbededSystem_clicked();

    void update();

private:
    Ui::EstacaoBase *ui;
    ClientTCP *TCPclient;
    vector<char> commandsVector;
    std::mutex mutex;
    QTimer *timer;
    char vel, temp, incX, incY;

};

#endif // ESTACAOBASE_H
