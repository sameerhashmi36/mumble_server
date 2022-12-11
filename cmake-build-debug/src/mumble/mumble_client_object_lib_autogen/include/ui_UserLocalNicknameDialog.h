/********************************************************************************
** Form generated from reading UI file 'UserLocalNicknameDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERLOCALNICKNAMEDIALOG_H
#define UI_USERLOCALNICKNAMEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_UserLocalNicknameDialog
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *qbbUserLocalNickname;
    QLineEdit *qleUserLocalNickname;

    void setupUi(QDialog *UserLocalNicknameDialog)
    {
        if (UserLocalNicknameDialog->objectName().isEmpty())
            UserLocalNicknameDialog->setObjectName(QString::fromUtf8("UserLocalNicknameDialog"));
        UserLocalNicknameDialog->resize(500, 80);
        UserLocalNicknameDialog->setMinimumSize(QSize(500, 80));
        UserLocalNicknameDialog->setMaximumSize(QSize(16777215, 224));
        gridLayout = new QGridLayout(UserLocalNicknameDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        qbbUserLocalNickname = new QDialogButtonBox(UserLocalNicknameDialog);
        qbbUserLocalNickname->setObjectName(QString::fromUtf8("qbbUserLocalNickname"));
        qbbUserLocalNickname->setOrientation(Qt::Horizontal);
        qbbUserLocalNickname->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::Reset);
        qbbUserLocalNickname->setCenterButtons(false);

        gridLayout->addWidget(qbbUserLocalNickname, 2, 0, 1, 2, Qt::AlignBottom);

        qleUserLocalNickname = new QLineEdit(UserLocalNicknameDialog);
        qleUserLocalNickname->setObjectName(QString::fromUtf8("qleUserLocalNickname"));

        gridLayout->addWidget(qleUserLocalNickname, 0, 0, 1, 1);


        retranslateUi(UserLocalNicknameDialog);

        QMetaObject::connectSlotsByName(UserLocalNicknameDialog);
    } // setupUi

    void retranslateUi(QDialog *UserLocalNicknameDialog)
    {
#if QT_CONFIG(tooltip)
        qleUserLocalNickname->setToolTip(QCoreApplication::translate("UserLocalNicknameDialog", "Local nickname for other users", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qleUserLocalNickname->setWhatsThis(QCoreApplication::translate("UserLocalNicknameDialog", "<b>Adjust the nickname of other users locally</b><br />", nullptr));
#endif // QT_CONFIG(whatsthis)
        (void)UserLocalNicknameDialog;
    } // retranslateUi

};

namespace Ui {
    class UserLocalNicknameDialog: public Ui_UserLocalNicknameDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERLOCALNICKNAMEDIALOG_H
