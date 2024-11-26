/********************************************************************************
** Form generated from reading UI file 'chart.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHART_H
#define UI_CHART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chart
{
public:
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *Humi;
    QLabel *label_10;
    QLabel *label_6;
    QLabel *label_7;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *Temp;
    QLabel *label_9;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLabel *Light;
    QLabel *label_8;

    void setupUi(QWidget *chart)
    {
        if (chart->objectName().isEmpty())
            chart->setObjectName(QString::fromUtf8("chart"));
        chart->resize(800, 600);
        horizontalLayoutWidget_3 = new QWidget(chart);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(140, 250, 311, 80));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font.setPointSize(15);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(label_3);

        Humi = new QLabel(horizontalLayoutWidget_3);
        Humi->setObjectName(QString::fromUtf8("Humi"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(15);
        Humi->setFont(font1);
        Humi->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(Humi);

        label_10 = new QLabel(chart);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(70, 350, 61, 61));
        label_10->setStyleSheet(QString::fromUtf8("image: url(:/image/equip/image/equip/Light.png);"));
        label_6 = new QLabel(chart);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(470, 210, 61, 61));
        label_6->setStyleSheet(QString::fromUtf8("image: url(:/image/equip/image/equip/Fun.png);"));
        label_7 = new QLabel(chart);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(470, 350, 61, 61));
        label_7->setStyleSheet(QString::fromUtf8("image: url(:/image/equip/image/equip/Water.png);"));
        horizontalLayoutWidget = new QWidget(chart);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(140, 160, 311, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(label);

        Temp = new QLabel(horizontalLayoutWidget);
        Temp->setObjectName(QString::fromUtf8("Temp"));
        Temp->setFont(font1);
        Temp->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(Temp);

        label_9 = new QLabel(chart);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(70, 260, 61, 61));
        label_9->setStyleSheet(QString::fromUtf8("image: url(:/image/equip/image/equip/Humi.png);"));
        horizontalLayoutWidget_4 = new QWidget(chart);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(140, 340, 311, 80));
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
        Light->setFont(font1);
        Light->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_4->addWidget(Light);

        label_8 = new QLabel(chart);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(70, 170, 61, 61));
        label_8->setStyleSheet(QString::fromUtf8("image: url(:/image/equip/image/equip/Temp.png);"));

        retranslateUi(chart);

        QMetaObject::connectSlotsByName(chart);
    } // setupUi

    void retranslateUi(QWidget *chart)
    {
        chart->setWindowTitle(QCoreApplication::translate("chart", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("chart", "\346\271\277\345\272\246\357\274\232", nullptr));
        Humi->setText(QCoreApplication::translate("chart", "NULL", nullptr));
        label_10->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        label->setText(QCoreApplication::translate("chart", "\346\270\251\345\272\246\357\274\232", nullptr));
        Temp->setText(QCoreApplication::translate("chart", "NULL", nullptr));
        label_9->setText(QString());
        label_4->setText(QCoreApplication::translate("chart", "\345\205\211\347\205\247\357\274\232", nullptr));
        Light->setText(QCoreApplication::translate("chart", "NULL", nullptr));
        label_8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class chart: public Ui_chart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHART_H
