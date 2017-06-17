#ifndef CLIENTTCP_H
#define CLIENTTCP_H
    #include "defines.h"
    #ifndef CLIENTTCP_Hversion1_0
        #error “versão antiga da biblioteca. Uma versão mais atual já está disponível no github”
    #endif

    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <string.h>
    #include <sys/types.h>
    #include <sys/socket.h>
    #include <netinet/in.h>
    #include <netdb.h>
    #include<iostream>
    using namespace std;

    class ClientTCP
    {

        private:
            int sockfd, ///retorno do socket que será aberto para esse cliente
                serverPortNumber; ///porta do servidor que deve estar escutando essa comunicação
            struct sockaddr_in servAddr;///referência para um objeto que representa o server
            struct hostent *ptrServer;/// ponteiro para um objeto que captura resolve o nome do server
            string ipServer; ///ip do servidor ao qual quero me conectar

        public:
            /**
            *Descrição: constutor da classe ClientTCP
            */
            ClientTCP();

            /**
            *Descrição: Sobbecarga do contrutor da classe ClientTCP
            *Argumento: port => (int) numero da porta do servidor ao quero me conectar
            *Argumento: ip: (string) ip do servidor ao qual quero me conectar
            */
            ClientTCP(int port, string ip);

            /**
            *Descrição: Destutor da classe ClientTCP
            */
            ~ClientTCP();

            /**
            *Descrição: seta a porta do servidor ao qual esse cliente irá se conectar
            *Argumento: portN => (int) numero da porta do servidor que deve estar escutando conexões
            *return: void
            */
            void setServerPortNumber(int portN);

            /**
            *Descrição: envia uma mensagem para o servidor ao qual esse cliente se conectou
            *Argumento: ptrMesage => (char*) ponteiro para um vetor de char que contém a mensagem a ser enviada
            *Argumento: messageSize => (int) tamanho da mensagem que será escrita no buffer de saída do socket
            *return: true se conseguiu enviar a mensagem
            */
            bool sendMessageToServer(char *ptrMesage, int messageSize);
    };

#endif // SERVERTCP_H
