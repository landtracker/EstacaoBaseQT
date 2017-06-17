#-------------------------------------------------
#
# Project created by QtCreator 2017-06-17T14:39:29
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = estacao_base
TEMPLATE = app


SOURCES += main.cpp\
        estacaobase.cpp \
    ClietTCP.cpp \
    Comando.cpp

HEADERS  += estacaobase.h \
    ClientTCP.h \
    Comando.h \
    defines.h

FORMS    += estacaobase.ui
