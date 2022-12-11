/********************************************************************************
** Form generated from reading UI file 'NetworkConfig.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETWORKCONFIG_H
#define UI_NETWORKCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/MUComboBox.h"

QT_BEGIN_NAMESPACE

class Ui_NetworkConfig
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *qgbConnection;
    QVBoxLayout *vboxLayout;
    QCheckBox *qcbTcpMode;
    QCheckBox *qcbQoS;
    QCheckBox *qcbAutoReconnect;
    QCheckBox *qcbAutoConnect;
    QCheckBox *qcbSuppressIdentity;
    QGroupBox *qgbProxy;
    QGridLayout *gridLayout;
    QLabel *qlType;
    MUComboBox *qcbType;
    QLabel *qlHostname;
    QLineEdit *qleHostname;
    QLabel *qlPort;
    QLineEdit *qlePort;
    QLabel *qlUsername;
    QLineEdit *qleUsername;
    QLabel *qlPassword;
    QLineEdit *qlePassword;
    QGroupBox *qgbPrivacy;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *qcbHideOS;
    QGroupBox *qgbServices;
    QVBoxLayout *verticalLayout;
    QCheckBox *qcbAutoUpdate;
    QCheckBox *qcbPluginUpdateCheck;
    QCheckBox *qcbPluginAutoUpdate;
    QCheckBox *qcbUsage;
    QCheckBox *qcbDisablePublicList;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *NetworkConfig)
    {
        if (NetworkConfig->objectName().isEmpty())
            NetworkConfig->setObjectName(QString::fromUtf8("NetworkConfig"));
        NetworkConfig->resize(576, 584);
        NetworkConfig->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout_2 = new QVBoxLayout(NetworkConfig);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        qgbConnection = new QGroupBox(NetworkConfig);
        qgbConnection->setObjectName(QString::fromUtf8("qgbConnection"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qgbConnection->sizePolicy().hasHeightForWidth());
        qgbConnection->setSizePolicy(sizePolicy);
        vboxLayout = new QVBoxLayout(qgbConnection);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        qcbTcpMode = new QCheckBox(qgbConnection);
        qcbTcpMode->setObjectName(QString::fromUtf8("qcbTcpMode"));

        vboxLayout->addWidget(qcbTcpMode);

        qcbQoS = new QCheckBox(qgbConnection);
        qcbQoS->setObjectName(QString::fromUtf8("qcbQoS"));

        vboxLayout->addWidget(qcbQoS);

        qcbAutoReconnect = new QCheckBox(qgbConnection);
        qcbAutoReconnect->setObjectName(QString::fromUtf8("qcbAutoReconnect"));

        vboxLayout->addWidget(qcbAutoReconnect);

        qcbAutoConnect = new QCheckBox(qgbConnection);
        qcbAutoConnect->setObjectName(QString::fromUtf8("qcbAutoConnect"));

        vboxLayout->addWidget(qcbAutoConnect);

        qcbSuppressIdentity = new QCheckBox(qgbConnection);
        qcbSuppressIdentity->setObjectName(QString::fromUtf8("qcbSuppressIdentity"));

        vboxLayout->addWidget(qcbSuppressIdentity);


        verticalLayout_2->addWidget(qgbConnection);

        qgbProxy = new QGroupBox(NetworkConfig);
        qgbProxy->setObjectName(QString::fromUtf8("qgbProxy"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(qgbProxy->sizePolicy().hasHeightForWidth());
        qgbProxy->setSizePolicy(sizePolicy1);
        gridLayout = new QGridLayout(qgbProxy);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        qlType = new QLabel(qgbProxy);
        qlType->setObjectName(QString::fromUtf8("qlType"));

        gridLayout->addWidget(qlType, 0, 0, 1, 1);

        qcbType = new MUComboBox(qgbProxy);
        qcbType->addItem(QString());
        qcbType->addItem(QString());
        qcbType->addItem(QString());
        qcbType->setObjectName(QString::fromUtf8("qcbType"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(qcbType->sizePolicy().hasHeightForWidth());
        qcbType->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(qcbType, 0, 1, 1, 3);

        qlHostname = new QLabel(qgbProxy);
        qlHostname->setObjectName(QString::fromUtf8("qlHostname"));
        qlHostname->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(qlHostname, 1, 0, 1, 1);

        qleHostname = new QLineEdit(qgbProxy);
        qleHostname->setObjectName(QString::fromUtf8("qleHostname"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(qleHostname->sizePolicy().hasHeightForWidth());
        qleHostname->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(qleHostname, 1, 1, 1, 1);

        qlPort = new QLabel(qgbProxy);
        qlPort->setObjectName(QString::fromUtf8("qlPort"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(qlPort->sizePolicy().hasHeightForWidth());
        qlPort->setSizePolicy(sizePolicy4);
        qlPort->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(qlPort, 1, 2, 1, 1);

        qlePort = new QLineEdit(qgbProxy);
        qlePort->setObjectName(QString::fromUtf8("qlePort"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(qlePort->sizePolicy().hasHeightForWidth());
        qlePort->setSizePolicy(sizePolicy5);
        qlePort->setMinimumSize(QSize(20, 0));
        qlePort->setMaximumSize(QSize(60, 16777215));
        qlePort->setMaxLength(5);

        gridLayout->addWidget(qlePort, 1, 3, 1, 1);

        qlUsername = new QLabel(qgbProxy);
        qlUsername->setObjectName(QString::fromUtf8("qlUsername"));

        gridLayout->addWidget(qlUsername, 2, 0, 1, 1);

        qleUsername = new QLineEdit(qgbProxy);
        qleUsername->setObjectName(QString::fromUtf8("qleUsername"));

        gridLayout->addWidget(qleUsername, 2, 1, 1, 3);

        qlPassword = new QLabel(qgbProxy);
        qlPassword->setObjectName(QString::fromUtf8("qlPassword"));

        gridLayout->addWidget(qlPassword, 3, 0, 1, 1);

        qlePassword = new QLineEdit(qgbProxy);
        qlePassword->setObjectName(QString::fromUtf8("qlePassword"));
        qlePassword->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(qlePassword, 3, 1, 1, 3);


        verticalLayout_2->addWidget(qgbProxy);

        qgbPrivacy = new QGroupBox(NetworkConfig);
        qgbPrivacy->setObjectName(QString::fromUtf8("qgbPrivacy"));
        verticalLayout_4 = new QVBoxLayout(qgbPrivacy);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        qcbHideOS = new QCheckBox(qgbPrivacy);
        qcbHideOS->setObjectName(QString::fromUtf8("qcbHideOS"));

        verticalLayout_4->addWidget(qcbHideOS);


        verticalLayout_2->addWidget(qgbPrivacy);

        qgbServices = new QGroupBox(NetworkConfig);
        qgbServices->setObjectName(QString::fromUtf8("qgbServices"));
        verticalLayout = new QVBoxLayout(qgbServices);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        qcbAutoUpdate = new QCheckBox(qgbServices);
        qcbAutoUpdate->setObjectName(QString::fromUtf8("qcbAutoUpdate"));

        verticalLayout->addWidget(qcbAutoUpdate);

        qcbPluginUpdateCheck = new QCheckBox(qgbServices);
        qcbPluginUpdateCheck->setObjectName(QString::fromUtf8("qcbPluginUpdateCheck"));

        verticalLayout->addWidget(qcbPluginUpdateCheck);

        qcbPluginAutoUpdate = new QCheckBox(qgbServices);
        qcbPluginAutoUpdate->setObjectName(QString::fromUtf8("qcbPluginAutoUpdate"));

        verticalLayout->addWidget(qcbPluginAutoUpdate);

        qcbUsage = new QCheckBox(qgbServices);
        qcbUsage->setObjectName(QString::fromUtf8("qcbUsage"));

        verticalLayout->addWidget(qcbUsage);

        qcbDisablePublicList = new QCheckBox(qgbServices);
        qcbDisablePublicList->setObjectName(QString::fromUtf8("qcbDisablePublicList"));
        qcbDisablePublicList->setEnabled(true);

        verticalLayout->addWidget(qcbDisablePublicList);


        verticalLayout_2->addWidget(qgbServices);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(spacerItem);


        retranslateUi(NetworkConfig);

        QMetaObject::connectSlotsByName(NetworkConfig);
    } // setupUi

    void retranslateUi(QWidget *NetworkConfig)
    {
        qgbConnection->setTitle(QCoreApplication::translate("NetworkConfig", "Connection", nullptr));
#if QT_CONFIG(tooltip)
        qcbTcpMode->setToolTip(QCoreApplication::translate("NetworkConfig", "Use TCP compatibility mode", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qcbTcpMode->setWhatsThis(QCoreApplication::translate("NetworkConfig", "<b>Enable TCP compatibility mode</b>.<br />This will make Mumble use only TCP when communicating with the server. This will increase overhead and cause lost packets to produce noticeable pauses in communication, so this should only be used if you are unable to use the default (which uses UDP for voice and TCP for control).", nullptr));
#endif // QT_CONFIG(whatsthis)
        qcbTcpMode->setText(QCoreApplication::translate("NetworkConfig", "Force TCP mode", nullptr));
#if QT_CONFIG(tooltip)
        qcbQoS->setToolTip(QCoreApplication::translate("NetworkConfig", "Enable QoS to prioritize packets", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qcbQoS->setWhatsThis(QCoreApplication::translate("NetworkConfig", "This will enable QoS, which will attempt to prioritize voice packets over other traffic.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qcbQoS->setText(QCoreApplication::translate("NetworkConfig", "Use Quality of Service", nullptr));
#if QT_CONFIG(tooltip)
        qcbAutoReconnect->setToolTip(QCoreApplication::translate("NetworkConfig", "Reconnect when disconnected", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qcbAutoReconnect->setWhatsThis(QCoreApplication::translate("NetworkConfig", "<b>Reconnect when disconnected</b>.<br />This will make Mumble try to automatically reconnect after 10 seconds if your server connection fails.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qcbAutoReconnect->setText(QCoreApplication::translate("NetworkConfig", "Reconnect automatically", nullptr));
#if QT_CONFIG(tooltip)
        qcbAutoConnect->setToolTip(QCoreApplication::translate("NetworkConfig", "Reconnect to last used server when starting Mumble", nullptr));
#endif // QT_CONFIG(tooltip)
        qcbAutoConnect->setText(QCoreApplication::translate("NetworkConfig", "Reconnect to last server on startup", nullptr));
#if QT_CONFIG(tooltip)
        qcbSuppressIdentity->setToolTip(QCoreApplication::translate("NetworkConfig", "Don't send certificate to server and don't save passwords. (Not saved).", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qcbSuppressIdentity->setWhatsThis(QCoreApplication::translate("NetworkConfig", "<b>This will suppress identity information from the client.</b><p>The client will not identify itself with a certificate, even if defined, and will not cache passwords for connections. This is primarily a test-option and is not saved.</p>", nullptr));
#endif // QT_CONFIG(whatsthis)
        qcbSuppressIdentity->setText(QCoreApplication::translate("NetworkConfig", "Suppress certificate and password storage", nullptr));
        qgbProxy->setTitle(QCoreApplication::translate("NetworkConfig", "Proxy", nullptr));
        qlType->setText(QCoreApplication::translate("NetworkConfig", "Type", nullptr));
        qcbType->setItemText(0, QCoreApplication::translate("NetworkConfig", "Direct connection", nullptr));
        qcbType->setItemText(1, QCoreApplication::translate("NetworkConfig", "HTTP(S) proxy", nullptr));
        qcbType->setItemText(2, QCoreApplication::translate("NetworkConfig", "SOCKS5 proxy", nullptr));

#if QT_CONFIG(tooltip)
        qcbType->setToolTip(QCoreApplication::translate("NetworkConfig", "Type of proxy to connect through", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qcbType->setWhatsThis(QCoreApplication::translate("NetworkConfig", "<b>Type of proxy to connect through.</b><br />This makes Mumble connect through a proxy for all outgoing connections. Note: Proxy tunneling forces Mumble into TCP compatibility mode, causing all voice data to be sent via the control channel.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qlHostname->setText(QCoreApplication::translate("NetworkConfig", "Hostname", nullptr));
#if QT_CONFIG(tooltip)
        qleHostname->setToolTip(QCoreApplication::translate("NetworkConfig", "Hostname of the proxy", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qleHostname->setWhatsThis(QCoreApplication::translate("NetworkConfig", "<b>Hostname of the proxy.</b><br />This field specifies the hostname of the proxy you wish to tunnel network traffic through.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qleHostname->setText(QString());
        qlPort->setText(QCoreApplication::translate("NetworkConfig", "Port", nullptr));
#if QT_CONFIG(tooltip)
        qlePort->setToolTip(QCoreApplication::translate("NetworkConfig", "Port number of the proxy", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qlePort->setWhatsThis(QCoreApplication::translate("NetworkConfig", "<b>Port number of the proxy.</b><br />This field specifies the port number that the proxy expects connections on.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qlePort->setInputMask(QString());
        qlePort->setText(QString());
        qlUsername->setText(QCoreApplication::translate("NetworkConfig", "Username", nullptr));
#if QT_CONFIG(tooltip)
        qleUsername->setToolTip(QCoreApplication::translate("NetworkConfig", "Username for proxy authentication", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qleUsername->setWhatsThis(QCoreApplication::translate("NetworkConfig", "<b>Username for proxy authentication.</b><br />This specifies the username you use for authenticating yourself with the proxy. In case the proxy does not use authentication, or you want to connect anonymously, simply leave this field blank.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qlPassword->setText(QCoreApplication::translate("NetworkConfig", "Password", nullptr));
#if QT_CONFIG(tooltip)
        qlePassword->setToolTip(QCoreApplication::translate("NetworkConfig", "Password for proxy authentication", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qlePassword->setWhatsThis(QCoreApplication::translate("NetworkConfig", "<b>Password for proxy authentication.</b><br />This specifies the password you use for authenticating yourself with the proxy. In case the proxy does not use authentication, or you want to connect anonymously, simply leave this field blank.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qlePassword->setInputMask(QString());
        qlePassword->setText(QString());
        qgbPrivacy->setTitle(QCoreApplication::translate("NetworkConfig", "Privacy", nullptr));
#if QT_CONFIG(tooltip)
        qcbHideOS->setToolTip(QCoreApplication::translate("NetworkConfig", "Prevent OS information being sent to Mumble servers and web servers", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qcbHideOS->setWhatsThis(QCoreApplication::translate("NetworkConfig", "<b>Don't send OS information to servers</b><br/>\n"
"Prevents the client from sending potentially identifying information about the operating system to the Mumble server and web servers.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qcbHideOS->setText(QCoreApplication::translate("NetworkConfig", "Do not send OS information to Mumble servers and web servers", nullptr));
        qgbServices->setTitle(QCoreApplication::translate("NetworkConfig", "Mumble services", nullptr));
#if QT_CONFIG(tooltip)
        qcbAutoUpdate->setToolTip(QCoreApplication::translate("NetworkConfig", "Check for new releases of Mumble automatically.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qcbAutoUpdate->setWhatsThis(QCoreApplication::translate("NetworkConfig", "This will check for new releases of Mumble every time you start the program, and notify you if one is available.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qcbAutoUpdate->setText(QCoreApplication::translate("NetworkConfig", "Check for application updates on startup", nullptr));
#if QT_CONFIG(tooltip)
        qcbPluginUpdateCheck->setToolTip(QCoreApplication::translate("NetworkConfig", "Check for new releases of plugins automatically.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qcbPluginUpdateCheck->setWhatsThis(QCoreApplication::translate("NetworkConfig", "This will check for new releases of plugins every time you start the program, and download them automatically.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qcbPluginUpdateCheck->setText(QCoreApplication::translate("NetworkConfig", "Check for plugin updates on startup", nullptr));
        qcbPluginAutoUpdate->setText(QCoreApplication::translate("NetworkConfig", "Automatically download and install plugin updates", nullptr));
#if QT_CONFIG(tooltip)
        qcbUsage->setToolTip(QCoreApplication::translate("NetworkConfig", "Submit anonymous statistics to the Mumble project", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qcbUsage->setWhatsThis(QCoreApplication::translate("NetworkConfig", "<b>Submit anonymous statistics.</b><br />Mumble has a small development team, and as such needs to focus its development where it is needed most. By submitting a bit of statistics you help the project determine where to focus development.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qcbUsage->setText(QCoreApplication::translate("NetworkConfig", "Submit anonymous statistics", nullptr));
#if QT_CONFIG(tooltip)
        qcbDisablePublicList->setToolTip(QCoreApplication::translate("NetworkConfig", "When toggled this hides the public server list from the connect dialog", nullptr));
#endif // QT_CONFIG(tooltip)
        qcbDisablePublicList->setText(QCoreApplication::translate("NetworkConfig", "Hide public server list", nullptr));
        (void)NetworkConfig;
    } // retranslateUi

};

namespace Ui {
    class NetworkConfig: public Ui_NetworkConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETWORKCONFIG_H
