/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *result_show;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_plus_minus;
    QPushButton *pushButton_percent;
    QPushButton *pushButton_div;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QPushButton *pushButton_mult;
    QPushButton *pushButton_9;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_6;
    QPushButton *pushButton_2;
    QPushButton *pushButton_1;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_3;
    QPushButton *pushButton_0;
    QPushButton *pushButton_equal;
    QPushButton *pushButton_dot;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(237, 371);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        result_show = new QLabel(centralWidget);
        result_show->setObjectName(QString::fromUtf8("result_show"));
        result_show->setGeometry(QRect(0, 0, 231, 61));
        QFont font;
        font.setPointSize(20);
        result_show->setFont(font);
        result_show->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	qproperty-alignment:'AlignVCenter | AlignRight';\n"
"	border-bottom:1px solid gray;\n"
"}\n"
"background-color:white;"));
        pushButton_clear = new QPushButton(centralWidget);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(0, 70, 61, 61));
        QFont font1;
        font1.setPointSize(14);
        pushButton_clear->setFont(font1);
        pushButton_clear->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:rgb(215,215,215);\n"
"	border:1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"	stop:0 #BEBEBE , stop: 1 #D7D7D7);\n"
"}"));
        pushButton_plus_minus = new QPushButton(centralWidget);
        pushButton_plus_minus->setObjectName(QString::fromUtf8("pushButton_plus_minus"));
        pushButton_plus_minus->setGeometry(QRect(60, 70, 61, 61));
        pushButton_plus_minus->setFont(font1);
        pushButton_plus_minus->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:rgb(215,215,215);\n"
"	border:1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"	stop:0 #BEBEBE , stop: 1 #D7D7D7);\n"
"}"));
        pushButton_percent = new QPushButton(centralWidget);
        pushButton_percent->setObjectName(QString::fromUtf8("pushButton_percent"));
        pushButton_percent->setGeometry(QRect(120, 70, 61, 61));
        pushButton_percent->setFont(font1);
        pushButton_percent->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:rgb(215,215,215);\n"
"	border:1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"	stop:0 #BEBEBE , stop: 1 #D7D7D7);\n"
"}"));
        pushButton_div = new QPushButton(centralWidget);
        pushButton_div->setObjectName(QString::fromUtf8("pushButton_div"));
        pushButton_div->setGeometry(QRect(180, 70, 61, 61));
        pushButton_div->setFont(font1);
        pushButton_div->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:rgb(255,151,57);\n"
"	color: white;\n"
"	border:1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"	stop:0 #FF7832 , stop: 1 #FF9739);\n"
"}"));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(60, 130, 61, 61));
        pushButton_8->setFont(font1);
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,stop:0 #dadbde , stop: 1 #f6f7fa);\n"
"}"));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(0, 130, 61, 61));
        pushButton_7->setFont(font1);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,stop:0 #dadbde , stop: 1 #f6f7fa);\n"
"}"));
        pushButton_mult = new QPushButton(centralWidget);
        pushButton_mult->setObjectName(QString::fromUtf8("pushButton_mult"));
        pushButton_mult->setGeometry(QRect(180, 130, 61, 61));
        pushButton_mult->setFont(font1);
        pushButton_mult->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:rgb(255,151,57);\n"
"	color: white;\n"
"	border:1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"	stop:0 #FF7832 , stop: 1 #FF9739);\n"
"}"));
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(120, 130, 61, 61));
        pushButton_9->setFont(font1);
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,stop:0 #dadbde , stop: 1 #f6f7fa);\n"
"}"));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(60, 190, 61, 61));
        pushButton_5->setFont(font1);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,stop:0 #dadbde , stop: 1 #f6f7fa);\n"
"}"));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(0, 190, 61, 61));
        pushButton_4->setFont(font1);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,stop:0 #dadbde , stop: 1 #f6f7fa);\n"
"}"));
        pushButton_minus = new QPushButton(centralWidget);
        pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));
        pushButton_minus->setGeometry(QRect(180, 190, 61, 61));
        pushButton_minus->setFont(font1);
        pushButton_minus->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:rgb(255,151,57);\n"
"	color: white;\n"
"	border:1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"	stop:0 #FF7832 , stop: 1 #FF9739);\n"
"}"));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(120, 190, 61, 61));
        pushButton_6->setFont(font1);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,stop:0 #dadbde , stop: 1 #f6f7fa);\n"
"}"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(60, 250, 61, 61));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,stop:0 #dadbde , stop: 1 #f6f7fa);\n"
"}"));
        pushButton_1 = new QPushButton(centralWidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(0, 250, 61, 61));
        pushButton_1->setFont(font1);
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,stop:0 #dadbde , stop: 1 #f6f7fa);\n"
"}"));
        pushButton_plus = new QPushButton(centralWidget);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
        pushButton_plus->setGeometry(QRect(180, 250, 61, 61));
        pushButton_plus->setFont(font1);
        pushButton_plus->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:rgb(255,151,57);\n"
"	color: white;\n"
"	border:1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"	stop:0 #FF7832 , stop: 1 #FF9739);\n"
"}"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(120, 250, 61, 61));
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,stop:0 #dadbde , stop: 1 #f6f7fa);\n"
"}"));
        pushButton_0 = new QPushButton(centralWidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(0, 310, 121, 61));
        pushButton_0->setFont(font1);
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,stop:0 #dadbde , stop: 1 #f6f7fa);\n"
"}"));
        pushButton_equal = new QPushButton(centralWidget);
        pushButton_equal->setObjectName(QString::fromUtf8("pushButton_equal"));
        pushButton_equal->setGeometry(QRect(180, 310, 61, 61));
        pushButton_equal->setFont(font1);
        pushButton_equal->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:rgb(255,151,57);\n"
"	color: white;\n"
"	border:1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"	stop:0 #FF7832 , stop: 1 #FF9739);\n"
"}"));
        pushButton_dot = new QPushButton(centralWidget);
        pushButton_dot->setObjectName(QString::fromUtf8("pushButton_dot"));
        pushButton_dot->setGeometry(QRect(120, 310, 61, 61));
        pushButton_dot->setFont(font1);
        pushButton_dot->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:rgb(215,215,215);\n"
"	border:1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"	stop:0 #BEBEBE , stop: 1 #D7D7D7);\n"
"}"));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        result_show->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        pushButton_plus_minus->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        pushButton_percent->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        pushButton_div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_mult->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
