/********************************************************************************
** Form generated from reading UI file 'estacaobase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ESTACAOBASE_H
#define UI_ESTACAOBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EstacaoBase
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tabCommands;
    QPushButton *pushButtonSendToEmbededSystem;
    QPushButton *pushButtonAddCommand;
    QLineEdit *lineEditCommand;
    QLineEdit *lineEditDescriptor;
    QLineEdit *lineEditCommandsList;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *textEdit;
    QWidget *tabEnvironmentInformations;
    QLabel *labelVelocity;
    QLabel *labelTemperature;
    QLabel *labelGroundInclinationX;
    QLabel *labelVelocityValue;
    QLabel *labelCmPerSeconds;
    QLabel *labelTemperatureValue;
    QLabel *labelCelsiusDeeesgr;
    QLabel *labelInclinationValueX;
    QLabel *label_4;
    QLabel *labelGroundInclinationY;
    QLabel *labelInclinationValueY;
    QLabel *label_5;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *EstacaoBase)
    {
        if (EstacaoBase->objectName().isEmpty())
            EstacaoBase->setObjectName(QString::fromUtf8("EstacaoBase"));
        EstacaoBase->resize(724, 480);
        centralWidget = new QWidget(EstacaoBase);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 701, 411));
        tabCommands = new QWidget();
        tabCommands->setObjectName(QString::fromUtf8("tabCommands"));
        pushButtonSendToEmbededSystem = new QPushButton(tabCommands);
        pushButtonSendToEmbededSystem->setObjectName(QString::fromUtf8("pushButtonSendToEmbededSystem"));
        pushButtonSendToEmbededSystem->setGeometry(QRect(250, 341, 181, 31));
        pushButtonAddCommand = new QPushButton(tabCommands);
        pushButtonAddCommand->setObjectName(QString::fromUtf8("pushButtonAddCommand"));
        pushButtonAddCommand->setGeometry(QRect(40, 170, 101, 22));
        lineEditCommand = new QLineEdit(tabCommands);
        lineEditCommand->setObjectName(QString::fromUtf8("lineEditCommand"));
        lineEditCommand->setGeometry(QRect(30, 70, 113, 22));
        lineEditDescriptor = new QLineEdit(tabCommands);
        lineEditDescriptor->setObjectName(QString::fromUtf8("lineEditDescriptor"));
        lineEditDescriptor->setGeometry(QRect(30, 130, 113, 22));
        lineEditCommandsList = new QLineEdit(tabCommands);
        lineEditCommandsList->setObjectName(QString::fromUtf8("lineEditCommandsList"));
        lineEditCommandsList->setGeometry(QRect(20, 300, 661, 22));
        label = new QLabel(tabCommands);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 50, 111, 16));
        label_2 = new QLabel(tabCommands);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 110, 111, 16));
        label_3 = new QLabel(tabCommands);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 280, 141, 16));
        textEdit = new QTextEdit(tabCommands);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(270, 50, 381, 201));
        textEdit->setReadOnly(true);
        tabWidget->addTab(tabCommands, QString());
        tabEnvironmentInformations = new QWidget();
        tabEnvironmentInformations->setObjectName(QString::fromUtf8("tabEnvironmentInformations"));
        labelVelocity = new QLabel(tabEnvironmentInformations);
        labelVelocity->setObjectName(QString::fromUtf8("labelVelocity"));
        labelVelocity->setGeometry(QRect(60, 40, 161, 71));
        labelTemperature = new QLabel(tabEnvironmentInformations);
        labelTemperature->setObjectName(QString::fromUtf8("labelTemperature"));
        labelTemperature->setGeometry(QRect(50, 120, 201, 71));
        labelGroundInclinationX = new QLabel(tabEnvironmentInformations);
        labelGroundInclinationX->setObjectName(QString::fromUtf8("labelGroundInclinationX"));
        labelGroundInclinationX->setGeometry(QRect(50, 210, 361, 51));
        labelVelocityValue = new QLabel(tabEnvironmentInformations);
        labelVelocityValue->setObjectName(QString::fromUtf8("labelVelocityValue"));
        labelVelocityValue->setGeometry(QRect(470, 60, 71, 31));
        labelCmPerSeconds = new QLabel(tabEnvironmentInformations);
        labelCmPerSeconds->setObjectName(QString::fromUtf8("labelCmPerSeconds"));
        labelCmPerSeconds->setGeometry(QRect(570, 60, 91, 31));
        labelTemperatureValue = new QLabel(tabEnvironmentInformations);
        labelTemperatureValue->setObjectName(QString::fromUtf8("labelTemperatureValue"));
        labelTemperatureValue->setGeometry(QRect(470, 140, 81, 31));
        labelCelsiusDeeesgr = new QLabel(tabEnvironmentInformations);
        labelCelsiusDeeesgr->setObjectName(QString::fromUtf8("labelCelsiusDeeesgr"));
        labelCelsiusDeeesgr->setGeometry(QRect(570, 140, 71, 31));
        labelInclinationValueX = new QLabel(tabEnvironmentInformations);
        labelInclinationValueX->setObjectName(QString::fromUtf8("labelInclinationValueX"));
        labelInclinationValueX->setGeometry(QRect(470, 220, 101, 31));
        label_4 = new QLabel(tabEnvironmentInformations);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(580, 210, 81, 41));
        labelGroundInclinationY = new QLabel(tabEnvironmentInformations);
        labelGroundInclinationY->setObjectName(QString::fromUtf8("labelGroundInclinationY"));
        labelGroundInclinationY->setGeometry(QRect(50, 300, 361, 51));
        labelInclinationValueY = new QLabel(tabEnvironmentInformations);
        labelInclinationValueY->setObjectName(QString::fromUtf8("labelInclinationValueY"));
        labelInclinationValueY->setGeometry(QRect(470, 310, 101, 31));
        label_5 = new QLabel(tabEnvironmentInformations);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(580, 300, 81, 31));
        tabWidget->addTab(tabEnvironmentInformations, QString());
        EstacaoBase->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(EstacaoBase);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 724, 19));
        EstacaoBase->setMenuBar(menuBar);
        mainToolBar = new QToolBar(EstacaoBase);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        EstacaoBase->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(EstacaoBase);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        EstacaoBase->setStatusBar(statusBar);

        retranslateUi(EstacaoBase);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(EstacaoBase);
    } // setupUi

    void retranslateUi(QMainWindow *EstacaoBase)
    {
        EstacaoBase->setWindowTitle(QApplication::translate("EstacaoBase", "Base Station", 0, QApplication::UnicodeUTF8));
        pushButtonSendToEmbededSystem->setText(QApplication::translate("EstacaoBase", "Send to Rover", 0, QApplication::UnicodeUTF8));
        pushButtonAddCommand->setText(QApplication::translate("EstacaoBase", "Add Command", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("EstacaoBase", "Command:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("EstacaoBase", "Descriptor:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("EstacaoBase", "Commands List:", 0, QApplication::UnicodeUTF8));
        textEdit->setHtml(QApplication::translate("EstacaoBase", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#00ff00;\">        Command:	|	    Descriptor:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">		<span style=\" color:#00ff00;\">|</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#00ff00;\">0 - Stop		|	     anything</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\""
                        "><span style=\" color:#00ff00;\">1 - Forward		|	centimeters to go</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#00ff00;\">2 - Backward	|	centimeters to go</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#00ff00;\">3 - Right		|	centimeters to go</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#00ff00;\">4 - Left		|	centimeters to go</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#00ff00;\">5 - Video ON		|	     anything</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#00ff0"
                        "0;\">6 - Video OFF	|	     anything</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#00ff00;\">7 - Audio ON		|	     anything</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#00ff00;\">8 - Audio OFF	|	     anything</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#00ff00;\">9 - Rotate camera right	|	degrees to rotate</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#00ff00;\">10 - Rotate camera left	|	degrees to rotate</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabCommands), QApplication::translate("EstacaoBase", "Commands", 0, QApplication::UnicodeUTF8));
        labelVelocity->setText(QApplication::translate("EstacaoBase", "<html><head/><body><p><span style=\" font-size:20pt; color:#00ff00;\">Velocity: </span></p></body></html>", 0, QApplication::UnicodeUTF8));
        labelTemperature->setText(QApplication::translate("EstacaoBase", "<html><head/><body><p><span style=\" font-size:20pt; color:#00ff00;\">Temperature: </span></p></body></html>", 0, QApplication::UnicodeUTF8));
        labelGroundInclinationX->setText(QApplication::translate("EstacaoBase", "<html><head/><body><p><span style=\" font-size:20pt; color:#00ff00;\">Ground Inclination x axis:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        labelVelocityValue->setText(QApplication::translate("EstacaoBase", "<html><head/><body><p><span style=\" font-size:20pt; color:#ff0000;\">0.0</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        labelCmPerSeconds->setText(QApplication::translate("EstacaoBase", "<html><head/><body><p><span style=\" font-size:20pt; color:#ff0000;\">[cm/s]</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        labelTemperatureValue->setText(QApplication::translate("EstacaoBase", "<html><head/><body><p><span style=\" font-size:20pt; color:#ff0000;\">25.0</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        labelCelsiusDeeesgr->setText(QApplication::translate("EstacaoBase", "<html><head/><body><p><span style=\" font-size:20pt; color:#ff0000;\">[</span><span style=\" font-size:20pt; color:#ff0000; vertical-align:super;\">o</span><span style=\" font-size:20pt; color:#ff0000;\">C]</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        labelInclinationValueX->setText(QApplication::translate("EstacaoBase", "<html><head/><body><p><span style=\" font-size:20pt; color:#ff0000;\">0.0</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("EstacaoBase", "<html><head/><body><p><span style=\" font-size:20pt; color:#ff0000;\">[</span><span style=\" font-size:20pt; color:#ff0000; vertical-align:super;\">o </span><span style=\" font-size:20pt; color:#ff0000;\">]</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        labelGroundInclinationY->setText(QApplication::translate("EstacaoBase", "<html><head/><body><p><span style=\" font-size:20pt; color:#00ff00;\">Ground Inclination y axis:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        labelInclinationValueY->setText(QApplication::translate("EstacaoBase", "<html><head/><body><p><span style=\" font-size:20pt; color:#ff0000;\">0.0</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("EstacaoBase", "<html><head/><body><p><span style=\" font-size:20pt; color:#ff0000;\">[</span><span style=\" font-size:20pt; color:#ff0000; vertical-align:super;\">o </span><span style=\" font-size:20pt; color:#ff0000;\">]</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabEnvironmentInformations), QApplication::translate("EstacaoBase", "Environment informations", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EstacaoBase: public Ui_EstacaoBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ESTACAOBASE_H
