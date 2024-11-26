/********************************************************************************
** Form generated from reading UI file 'chartwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARTWINDOW_H
#define UI_CHARTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "qchartview.h"

QT_BEGIN_NAMESPACE

class Ui_ChartWindow
{
public:
    QPushButton *pushButton;
    QLabel *connect_2;
    QtCharts::QChartView *graphicsView;

    void setupUi(QWidget *ChartWindow)
    {
        if (ChartWindow->objectName().isEmpty())
            ChartWindow->setObjectName(QString::fromUtf8("ChartWindow"));
        ChartWindow->resize(800, 600);
        pushButton = new QPushButton(ChartWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 520, 61, 51));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/image/image/main.png);"));
        connect_2 = new QLabel(ChartWindow);
        connect_2->setObjectName(QString::fromUtf8("connect_2"));
        connect_2->setGeometry(QRect(0, 570, 101, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font.setPointSize(15);
        connect_2->setFont(font);
        connect_2->setStyleSheet(QString::fromUtf8(""));
        graphicsView = new QtCharts::QChartView(ChartWindow);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(100, 60, 601, 461));

        retranslateUi(ChartWindow);

        QMetaObject::connectSlotsByName(ChartWindow);
    } // setupUi

    void retranslateUi(QWidget *ChartWindow)
    {
        ChartWindow->setWindowTitle(QCoreApplication::translate("ChartWindow", "Form", nullptr));
        pushButton->setText(QString());
        connect_2->setText(QCoreApplication::translate("ChartWindow", "\350\277\224\345\233\236\344\270\273\351\241\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChartWindow: public Ui_ChartWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARTWINDOW_H
