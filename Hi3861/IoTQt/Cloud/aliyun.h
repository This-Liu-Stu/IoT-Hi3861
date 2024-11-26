#ifndef ALIYUN_H
#define ALIYUN_H

#include <QObject>
#include "ui_mainwindow.h" // 包含ui文件的头文件
#include <QString>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QtMqtt/qmqttclient.h>
#include <QMessageBox>
#include <QMessageBox>
#include <QMessageBox>

class ALIYUN : public QObject // 继承自QObject类
{
    Q_OBJECT
    public:
        explicit ALIYUN(Ui::MainWindow *aui, QObject *parent = nullptr); // 构造函数声明
        ~ALIYUN();

        void AliyunConnection();
        void disconnectFunction();      // 断开服务器

    public slots:
        void messageReceived(const QByteArray &message, const QMqttTopicName &topic);     // 订阅消息处理
        void parseMessage(const QByteArray &message);        // 结构体解析
        void setTagstoGet();                                // UI更新-显示
        void displayLampChange();                           // 更新执行器图标
        void publishTopicMessage(int data);       // 发布消息
        void subscribeTopic();            // 订阅


    private:
        QMqttClient *mqttClient; // 成员变量声明
        Ui::MainWindow *aui;

        //传感器参数
        int Temp;
        int Humi;
        int Light;
        int People;

        // 阿里云连接要素
        QString mqttHostUrl = "iot-06z00god4hf1dy1.mqtt.iothub.aliyuncs.com";
        quint16 port = 1883; // 代理服务器端口
        QString clientId = "k0796cCKVfZ.QtDev|securemode=2,signmethod=hmacsha256,timestamp=1731222491761|"; // 连接 ID
        QString username = "QtDev&k0796cCKVfZ";   //连接名称
        QByteArray password = "4ed3b6f20a9acf337c450b50aabfe891d25e7c4f16e559352554bd6e5361484f"; // 密码
        QString subTopic = "/k0796cCKVfZ/QtDev/user/get";

};

#endif // ALIYUN_H
