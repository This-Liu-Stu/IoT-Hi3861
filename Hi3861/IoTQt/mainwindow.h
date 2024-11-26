#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <Cloud/aliyun.h>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QJsonObject>
#include <QJsonArray>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    ALIYUN *myAliyun = new ALIYUN(ui ,this);
    QNetworkAccessManager *networkManager; // 网络请求管理器
    QNetworkReply *reply; // 网络请求回复

private slots:
    void onWeatherDataReceived();
};
#endif // MAINWINDOW_H
