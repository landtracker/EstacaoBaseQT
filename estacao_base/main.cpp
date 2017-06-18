#include "estacaobase.h"
#include <QApplication>
#include "ServerTCP.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    EstacaoBase w;

    ServerTCP server(2222, &w);

    thread serverThread = server.getServerThread();

    w.show();

    a.exec();

    //serverThread.join();

    return 0;
}
