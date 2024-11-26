#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    myAliyun->AliyunConnection();      //连接阿里云

    networkManager = new QNetworkAccessManager(this);
    connect(networkManager, &QNetworkAccessManager::finished, this, &MainWindow::onWeatherDataReceived);

    QNetworkRequest request;
    // 使用心知天气或其他提供天气信息的 API（需注册获取密钥）
    QString apiUrl = "https://api.seniverse.com/v3/weather/now.json?key=SFHv0FcckADFgw3Jg&location=长春&language=zh-Hans&unit=c";
    request.setUrl(QUrl(apiUrl));
    reply = networkManager->get(request);

}

void MainWindow::onWeatherDataReceived()
{
    if (reply->error() == QNetworkReply::NoError)
    {
        QByteArray bytes = reply->readAll();
        QString data = QString::fromUtf8(bytes);
        qDebug() << "Weather data received:" << data;

        // 解析 JSON 数据
        QJsonDocument jsonDoc = QJsonDocument::fromJson(bytes);
        if (jsonDoc.isObject())
        {
            QJsonObject jsonObject = jsonDoc.object();
            // 根据 API 的返回结构获取天气信息
            if (jsonObject.contains("results") && jsonObject["results"].isArray())
            {
                QJsonArray resultsArray = jsonObject["results"].toArray();
                if (!resultsArray.isEmpty())
                {
                    QJsonObject firstResult = resultsArray[0].toObject();
                    if (firstResult.contains("now") && firstResult["now"].isObject())
                    {
                        QJsonObject nowObject = firstResult["now"].toObject();
                        QString weatherStatus = nowObject["text"].toString();
                        QString temperature = nowObject["temperature"].toString();
                        qDebug() << "Weather in Changchun: " << weatherStatus << ", Temperature: " << temperature;
                        // 在界面上显示天气状态和温度
                        //ui->labelWeatherStatus->setText("济南天气：" + weatherStatus + "，温度：" + temperature + "°C");
                        ui->Temp->setText(temperature);
                        ui->Humi->setText(weatherStatus);

                    }
                }
            }
        }
    }
    else
    {
        qDebug() << "Error in network reply:" << reply->errorString();
    }
    reply->deleteLater();
}

MainWindow::~MainWindow()
{
    delete myAliyun;  // 释放内存
    delete networkManager;
    delete ui;
}


