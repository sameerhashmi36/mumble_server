/********************************************************************************
** Form generated from reading UI file 'ConnectDialogEdit.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTDIALOGEDIT_H
#define UI_CONNECTDIALOGEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConnectDialogEdit
{
public:
    QGridLayout *gridLayout;
    QWidget *qwInlineNotice;
    QHBoxLayout *horizontalLayout;
    QLabel *qlPasteNotice;
    QWidget *qwActions;
    QVBoxLayout *qlActions;
    QPushButton *qbFill;
    QPushButton *qbDiscard;
    QLabel *qliServer;
    QLineEdit *qleServer;
    QLabel *qliPort;
    QLineEdit *qlePort;
    QLabel *qliUsername;
    QLabel *qliPassword;
    QLineEdit *qleUsername;
    QDialogButtonBox *qdbbButtonBox;
    QLineEdit *qlePassword;
    QCheckBox *qcbShowPassword;
    QLabel *qliName;
    QLineEdit *qleName;

    void setupUi(QDialog *ConnectDialogEdit)
    {
        if (ConnectDialogEdit->objectName().isEmpty())
            ConnectDialogEdit->setObjectName(QString::fromUtf8("ConnectDialogEdit"));
        ConnectDialogEdit->resize(430, 356);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ConnectDialogEdit->sizePolicy().hasHeightForWidth());
        ConnectDialogEdit->setSizePolicy(sizePolicy);
        ConnectDialogEdit->setMinimumSize(QSize(430, 0));
        gridLayout = new QGridLayout(ConnectDialogEdit);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        qwInlineNotice = new QWidget(ConnectDialogEdit);
        qwInlineNotice->setObjectName(QString::fromUtf8("qwInlineNotice"));
        sizePolicy.setHeightForWidth(qwInlineNotice->sizePolicy().hasHeightForWidth());
        qwInlineNotice->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(qwInlineNotice);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        qlPasteNotice = new QLabel(qwInlineNotice);
        qlPasteNotice->setObjectName(QString::fromUtf8("qlPasteNotice"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(4);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(qlPasteNotice->sizePolicy().hasHeightForWidth());
        qlPasteNotice->setSizePolicy(sizePolicy1);
        qlPasteNotice->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        qlPasteNotice->setWordWrap(true);

        horizontalLayout->addWidget(qlPasteNotice);

        qwActions = new QWidget(qwInlineNotice);
        qwActions->setObjectName(QString::fromUtf8("qwActions"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(qwActions->sizePolicy().hasHeightForWidth());
        qwActions->setSizePolicy(sizePolicy2);
        qlActions = new QVBoxLayout(qwActions);
        qlActions->setObjectName(QString::fromUtf8("qlActions"));
        qlActions->setContentsMargins(0, 0, 0, 0);
        qbFill = new QPushButton(qwActions);
        qbFill->setObjectName(QString::fromUtf8("qbFill"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(qbFill->sizePolicy().hasHeightForWidth());
        qbFill->setSizePolicy(sizePolicy3);

        qlActions->addWidget(qbFill);

        qbDiscard = new QPushButton(qwActions);
        qbDiscard->setObjectName(QString::fromUtf8("qbDiscard"));
        sizePolicy3.setHeightForWidth(qbDiscard->sizePolicy().hasHeightForWidth());
        qbDiscard->setSizePolicy(sizePolicy3);

        qlActions->addWidget(qbDiscard);


        horizontalLayout->addWidget(qwActions);


        gridLayout->addWidget(qwInlineNotice, 1, 0, 1, 2);

        qliServer = new QLabel(ConnectDialogEdit);
        qliServer->setObjectName(QString::fromUtf8("qliServer"));

        gridLayout->addWidget(qliServer, 2, 0, 1, 1);

        qleServer = new QLineEdit(ConnectDialogEdit);
        qleServer->setObjectName(QString::fromUtf8("qleServer"));

        gridLayout->addWidget(qleServer, 2, 1, 1, 1);

        qliPort = new QLabel(ConnectDialogEdit);
        qliPort->setObjectName(QString::fromUtf8("qliPort"));

        gridLayout->addWidget(qliPort, 3, 0, 1, 1);

        qlePort = new QLineEdit(ConnectDialogEdit);
        qlePort->setObjectName(QString::fromUtf8("qlePort"));

        gridLayout->addWidget(qlePort, 3, 1, 1, 1);

        qliUsername = new QLabel(ConnectDialogEdit);
        qliUsername->setObjectName(QString::fromUtf8("qliUsername"));

        gridLayout->addWidget(qliUsername, 5, 0, 1, 1);

        qliPassword = new QLabel(ConnectDialogEdit);
        qliPassword->setObjectName(QString::fromUtf8("qliPassword"));

        gridLayout->addWidget(qliPassword, 6, 0, 1, 1);

        qleUsername = new QLineEdit(ConnectDialogEdit);
        qleUsername->setObjectName(QString::fromUtf8("qleUsername"));

        gridLayout->addWidget(qleUsername, 5, 1, 1, 1);

        qdbbButtonBox = new QDialogButtonBox(ConnectDialogEdit);
        qdbbButtonBox->setObjectName(QString::fromUtf8("qdbbButtonBox"));
        qdbbButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(qdbbButtonBox, 9, 1, 1, 1);

        qlePassword = new QLineEdit(ConnectDialogEdit);
        qlePassword->setObjectName(QString::fromUtf8("qlePassword"));

        gridLayout->addWidget(qlePassword, 6, 1, 1, 1);

        qcbShowPassword = new QCheckBox(ConnectDialogEdit);
        qcbShowPassword->setObjectName(QString::fromUtf8("qcbShowPassword"));

        gridLayout->addWidget(qcbShowPassword, 8, 1, 1, 1);

        qliName = new QLabel(ConnectDialogEdit);
        qliName->setObjectName(QString::fromUtf8("qliName"));

        gridLayout->addWidget(qliName, 7, 0, 1, 1);

        qleName = new QLineEdit(ConnectDialogEdit);
        qleName->setObjectName(QString::fromUtf8("qleName"));

        gridLayout->addWidget(qleName, 7, 1, 1, 1);

#if QT_CONFIG(shortcut)
        qliServer->setBuddy(qleServer);
        qliPort->setBuddy(qlePort);
        qliUsername->setBuddy(qleUsername);
        qliPassword->setBuddy(qlePassword);
        qliName->setBuddy(qleName);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(qleServer, qlePort);
        QWidget::setTabOrder(qlePort, qleUsername);
        QWidget::setTabOrder(qleUsername, qlePassword);
        QWidget::setTabOrder(qlePassword, qleName);
        QWidget::setTabOrder(qleName, qcbShowPassword);
        QWidget::setTabOrder(qcbShowPassword, qdbbButtonBox);

        retranslateUi(ConnectDialogEdit);
        QObject::connect(qdbbButtonBox, SIGNAL(accepted()), ConnectDialogEdit, SLOT(accept()));
        QObject::connect(qdbbButtonBox, SIGNAL(rejected()), ConnectDialogEdit, SLOT(reject()));

        QMetaObject::connectSlotsByName(ConnectDialogEdit);
    } // setupUi

    void retranslateUi(QDialog *ConnectDialogEdit)
    {
        ConnectDialogEdit->setWindowTitle(QCoreApplication::translate("ConnectDialogEdit", "Edit Server", nullptr));
        qbFill->setText(QCoreApplication::translate("ConnectDialogEdit", "&Fill", nullptr));
        qbDiscard->setText(QCoreApplication::translate("ConnectDialogEdit", "&Ignore", nullptr));
        qliServer->setText(QCoreApplication::translate("ConnectDialogEdit", "A&ddress", nullptr));
#if QT_CONFIG(tooltip)
        qleServer->setToolTip(QCoreApplication::translate("ConnectDialogEdit", "Internet address of the server.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qleServer->setWhatsThis(QCoreApplication::translate("ConnectDialogEdit", "<b>Address</b><br/>\n"
"Internet address of the server. This can be a normal hostname, an IPv4/IPv6 address or a Bonjour service identifier. Bonjour service identifiers have to be prefixed with a '@' to be recognized by Mumble.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qleServer->setPlaceholderText(QCoreApplication::translate("ConnectDialogEdit", "127.0.0.1", nullptr));
        qliPort->setText(QCoreApplication::translate("ConnectDialogEdit", "&Port", nullptr));
#if QT_CONFIG(tooltip)
        qlePort->setToolTip(QCoreApplication::translate("ConnectDialogEdit", "Port on which the server is listening", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qlePort->setWhatsThis(QCoreApplication::translate("ConnectDialogEdit", "<b>Port</b><br/>\n"
"Port on which the server is listening. If the server is identified by a Bonjour service identifier this field will be ignored.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qlePort->setPlaceholderText(QCoreApplication::translate("ConnectDialogEdit", "64738", nullptr));
        qliUsername->setText(QCoreApplication::translate("ConnectDialogEdit", "&Username", nullptr));
        qliPassword->setText(QCoreApplication::translate("ConnectDialogEdit", "Password", nullptr));
#if QT_CONFIG(tooltip)
        qleUsername->setToolTip(QCoreApplication::translate("ConnectDialogEdit", "Username to send to the server", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qleUsername->setWhatsThis(QCoreApplication::translate("ConnectDialogEdit", "<b>Username</b><br/>\n"
"Username to send to the server. Be aware that the server can impose restrictions on how a username might look like. Also your username could already be taken by another user.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qleUsername->setPlaceholderText(QCoreApplication::translate("ConnectDialogEdit", "Your username", nullptr));
#if QT_CONFIG(tooltip)
        qlePassword->setToolTip(QCoreApplication::translate("ConnectDialogEdit", "Password to send to the server", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qlePassword->setWhatsThis(QCoreApplication::translate("ConnectDialogEdit", "<b>Password</b><br/>\n"
"Password to be sent to the server on connect. This password is needed when connecting as <i>SuperUser</i> or to a server using password authentication. If not entered here the password will be queried on connect.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qlePassword->setPlaceholderText(QCoreApplication::translate("ConnectDialogEdit", "Your password", nullptr));
#if QT_CONFIG(tooltip)
        qcbShowPassword->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        qcbShowPassword->setText(QCoreApplication::translate("ConnectDialogEdit", "Show password", nullptr));
        qliName->setText(QCoreApplication::translate("ConnectDialogEdit", "Label", nullptr));
#if QT_CONFIG(tooltip)
        qleName->setToolTip(QCoreApplication::translate("ConnectDialogEdit", "Name of the server", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qleName->setWhatsThis(QCoreApplication::translate("ConnectDialogEdit", "<b>Label</b><br/>\n"
"Label of the server. This is what the server will be named like in your server list and can be chosen freely.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qleName->setPlaceholderText(QCoreApplication::translate("ConnectDialogEdit", "Local server label", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConnectDialogEdit: public Ui_ConnectDialogEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTDIALOGEDIT_H
