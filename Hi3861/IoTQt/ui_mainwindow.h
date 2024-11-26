/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *Temp;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *Humi;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *connectimage;
    QLabel *connect;
    QLabel *label_11;
    QLabel *label_2;
    QLabel *label_12;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLabel *Light;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLabel *People;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLabel *Class;
    QLabel *label_7;
    QLabel *label_8;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(60, 200, 311, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font.setPointSize(15);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(label);

        Temp = new QLabel(horizontalLayoutWidget);
        Temp->setObjectName(QString::fromUtf8("Temp"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(15);
        Temp->setFont(font1);
        Temp->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(Temp);

        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(60, 310, 311, 80));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(label_3);

        Humi = new QLabel(horizontalLayoutWidget_3);
        Humi->setObjectName(QString::fromUtf8("Humi"));
        Humi->setFont(font1);
        Humi->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(Humi);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(630, 500, 160, 51));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        connectimage = new QLabel(horizontalLayoutWidget_2);
        connectimage->setObjectName(QString::fromUtf8("connectimage"));
        connectimage->setFont(font);
        connectimage->setStyleSheet(QString::fromUtf8("image: url(:/image/connect/image/connect/no.png);"));

        horizontalLayout_2->addWidget(connectimage);

        connect = new QLabel(horizontalLayoutWidget_2);
        connect->setObjectName(QString::fromUtf8("connect"));
        connect->setFont(font);
        connect->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(connect);

        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 10, 101, 111));
        label_11->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/image/aaa.jpg);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(-220, -40, 1291, 651));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/image/111.png);"));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(130, 30, 141, 81));
        label_12->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/image/bbb.png);"));
        horizontalLayoutWidget_4 = new QWidget(centralwidget);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(430, 310, 311, 80));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(horizontalLayoutWidget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_4->addWidget(label_4);

        Light = new QLabel(horizontalLayoutWidget_4);
        Light->setObjectName(QString::fromUtf8("Light"));
        Light->setFont(font);
        Light->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_4->addWidget(Light);

        horizontalLayoutWidget_5 = new QWidget(centralwidget);
        horizontalLayoutWidget_5->setObjectName(QString::fromUtf8("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(430, 200, 311, 80));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(horizontalLayoutWidget_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_5->addWidget(label_5);

        People = new QLabel(horizontalLayoutWidget_5);
        People->setObjectName(QString::fromUtf8("People"));
        People->setFont(font);
        People->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_5->addWidget(People);

        horizontalLayoutWidget_6 = new QWidget(centralwidget);
        horizontalLayoutWidget_6->setObjectName(QString::fromUtf8("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(90, 440, 491, 80));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(horizontalLayoutWidget_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(120, 78));
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_6->addWidget(label_6);

        Class = new QLabel(horizontalLayoutWidget_6);
        Class->setObjectName(QString::fromUtf8("Class"));
        Class->setFont(font);
        Class->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_6->addWidget(Class);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(310, 20, 191, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font2.setPointSize(20);
        label_7->setFont(font2);
        label_7->setStyleSheet(QString::fromUtf8(""));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(330, 70, 461, 41));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\215\216\346\226\207\346\245\267\344\275\223"));
        font3.setPointSize(20);
        label_8->setFont(font3);
        label_8->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setCentralWidget(centralwidget);
        label_2->raise();
        horizontalLayoutWidget->raise();
        horizontalLayoutWidget_3->raise();
        horizontalLayoutWidget_2->raise();
        label_11->raise();
        label_12->raise();
        horizontalLayoutWidget_4->raise();
        horizontalLayoutWidget_5->raise();
        horizontalLayoutWidget_6->raise();
        label_7->raise();
        label_8->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\346\225\231\345\256\244\346\243\200\346\265\213\347\273\210\347\253\257", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\344\273\212\346\227\245\345\244\251\346\260\224\357\274\232", nullptr));
        Temp->setText(QCoreApplication::translate("MainWindow", "NULL", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\344\273\212\346\227\245\346\270\251\345\272\246\357\274\232", nullptr));
        Humi->setText(QCoreApplication::translate("MainWindow", "26", nullptr));
        connectimage->setText(QString());
        connect->setText(QCoreApplication::translate("MainWindow", "\346\234\215\345\212\241\345\231\250\346\226\255\345\274\200", nullptr));
        label_11->setText(QString());
        label_2->setText(QString());
        label_12->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "\346\225\231\345\256\244\345\206\205\345\205\211\347\205\247\357\274\232", nullptr));
        Light->setText(QCoreApplication::translate("MainWindow", "\345\205\205\350\266\263", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\347\212\266\346\200\201\357\274\232", nullptr));
        People->setText(QCoreApplication::translate("MainWindow", "\345\205\245\345\272\247", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\346\225\231\345\256\244\347\212\266\346\200\201", nullptr));
        Class->setText(QCoreApplication::translate("MainWindow", "\346\225\231\345\256\244\347\251\272\351\227\262", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\342\200\234\346\231\272\350\201\224\351\270\277\350\222\231", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "AI \351\251\261\345\212\250\347\232\204\346\225\231\345\256\244\345\205\250\346\204\237\347\237\245\345\210\233\346\226\260\346\226\271\346\241\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
