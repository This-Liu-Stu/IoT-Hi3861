#include "aliyun.h"
#include <QMessageBox>
#include <QThread>
#include <QMessageBox>
#include <QDebug>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>

ALIYUN::ALIYUN(Ui::MainWindow *aui, QObject *parent)
    : QObject(parent), // 调用父类QObject的构造函数
      mqttClient(new QMqttClient(this)), // 初始化mqttClient
      aui(aui)
{

}

ALIYUN::~ALIYUN() {
    delete mqttClient;
}

void ALIYUN::AliyunConnection() {
    mqttClient->setHostname(mqttHostUrl);
    mqttClient->setPort(port);
    mqttClient->setClientId(clientId);
    mqttClient->setUsername(username);
    mqttClient->setPassword(password);
    mqttClient->setProtocolVersion(QMqttClient::MQTT_3_1_1);
    mqttClient->connectToHost(); // 连接MQTT服务器

    // 连接成功或失败的处理
    connect(mqttClient, &QMqttClient::connected, this, [=]() {
        qDebug() << "阿里云 - MQTT服务器连接成功...";
        aui->connect->setText("服务器连接");
        aui->connectimage->setStyleSheet("image: url(:/image/connect/image/connect/yes.png);");

        //aui->connectimage->
        //订阅主题
        QMqttSubscription *subscription = mqttClient->subscribe(subTopic);
               if (subscription) {
                   connect(subscription, &QMqttSubscription::stateChanged, this, [](QMqttSubscription::SubscriptionState state) {
                       if (state == QMqttSubscription::Subscribed) {
                           qDebug() << "Subscription successful!";
                       } else if (state == QMqttSubscription::Unsubscribed) {
                           qDebug() << "Unsubscribed from topic.";
                       } else {
                           qDebug() << "Subscription state changed:" << state;
                       }
                   });
               } else {
                   qDebug() << "Failed to subscribe to topic.";
               }
    });

    connect(mqttClient, &QMqttClient::disconnected, this, [=]() {
        qDebug() << "Disconnected from MQTT server.";
        aui->connect->setText("服务器断开");
        aui->connectimage->setStyleSheet("image: url(:/image/connect/image/connect/no.png);");

    });

    // 槽函数
    connect(mqttClient, &QMqttClient::messageReceived, this, &ALIYUN::messageReceived);
}

// 断开连接
void ALIYUN::disconnectFunction() {
    mqttClient->disconnectFromHost();
}

void ALIYUN::publishTopicMessage(int data) {
    QMqttTopicName topicName("/k0796cCKVfZ/QtDev/user/update");
    QByteArray message;

    // 创建主题和消息内容
    switch (data) {
        case 0:
            //message = "{\"params\":{\"Wind\":1},\"version\":\"1.0.0\"}";
            break;
        case 1:
            //message = "{\"params\":{\"Wind\":0},\"version\":\"1.0.0\"}";
            break;
        case 2:
            //message = "{\"params\":{\"Water\":1},\"version\":\"1.0.0\"}";
            break;
        case 3:
            //message = "{\"params\":{\"Water\":0},\"version\":\"1.0.0\"}";
            break;
        default:
            qDebug() << "Invalid data value.";
            return; // 提前返回，不尝试发布消息
    }

    if (mqttClient->publish(topicName, message, 0) == -1) {
        qDebug() << "Failed to publish message.";
    }
}

// 1-接收消息
void ALIYUN::messageReceived(const QByteArray &message, const QMqttTopicName &topic)
{
    qDebug() << "Message received on topic" << topic.name() << ":" << message;
    parseMessage(message);
}

// 2-处理消息
void ALIYUN::parseMessage(const QByteArray &message)
{
    QString receivedMessage = QString::fromUtf8(message);
    if (receivedMessage == "1") {             //光照充足
        aui->Light->setText("光照充足");
    }
    else if (receivedMessage == "2"){         //光照不足
        aui->Light->setText("光照不足");
    }
    else if (receivedMessage == "3"){         //学生入座
        aui->People->setText("学生入座");
    }
    else if (receivedMessage == "4"){         //学生离座
        aui->People->setText("学生离座");
    }
    else if (receivedMessage == "5"){         //学生离座
        aui->Class->setText("教室正在上课，请勿打扰");
    }
    else if (receivedMessage == "6"){         //学生离座
        aui->Class->setText("教室空闲");
    }
    setTagstoGet();
}

// 3-显示数值
void ALIYUN::setTagstoGet(){
    // 设置 UI 元素的值

    //displayLampChange();
}

// 同步执行器颜色
void ALIYUN::displayLampChange(){


}


void ALIYUN::subscribeTopic()
{

}

