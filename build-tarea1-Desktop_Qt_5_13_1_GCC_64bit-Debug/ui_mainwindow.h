/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *botonIniciar;
    QPushButton *botonEnviar;
    QPushButton *botonSalir;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEditNI;
    QLineEdit *lineEditNF;
    QLabel *label_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(408, 232);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(60, 140, 281, 60));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        botonIniciar = new QPushButton(widget);
        botonIniciar->setObjectName(QString::fromUtf8("botonIniciar"));

        horizontalLayout_2->addWidget(botonIniciar);

        botonEnviar = new QPushButton(widget);
        botonEnviar->setObjectName(QString::fromUtf8("botonEnviar"));

        horizontalLayout_2->addWidget(botonEnviar);

        botonSalir = new QPushButton(widget);
        botonSalir->setObjectName(QString::fromUtf8("botonSalir"));

        horizontalLayout_2->addWidget(botonSalir);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 60, 101, 17));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(250, 60, 91, 17));
        lineEditNI = new QLineEdit(centralwidget);
        lineEditNI->setObjectName(QString::fromUtf8("lineEditNI"));
        lineEditNI->setGeometry(QRect(50, 90, 113, 25));
        lineEditNF = new QLineEdit(centralwidget);
        lineEditNF->setObjectName(QString::fromUtf8("lineEditNF"));
        lineEditNF->setGeometry(QRect(240, 90, 113, 25));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(140, 10, 121, 17));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        botonIniciar->setText(QCoreApplication::translate("MainWindow", "Iniciar", nullptr));
        botonEnviar->setText(QCoreApplication::translate("MainWindow", "Enviar", nullptr));
        botonSalir->setText(QCoreApplication::translate("MainWindow", "Salir", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Nodo Inicial", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Nodo Final", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Grafo de 5 nodos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
