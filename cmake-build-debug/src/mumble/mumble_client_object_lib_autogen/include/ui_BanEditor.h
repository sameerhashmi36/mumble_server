/********************************************************************************
** Form generated from reading UI file 'BanEditor.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BANEDITOR_H
#define UI_BANEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_BanEditor
{
public:
    QGridLayout *gridLayout_2;
    QDialogButtonBox *qbbButtons;
    QGroupBox *qgbBanList;
    QGridLayout *gridLayout;
    QLineEdit *qleSearch;
    QLabel *qlUser;
    QLineEdit *qleUser;
    QLabel *qlIP;
    QLineEdit *qleIP;
    QLabel *qlMask;
    QSpinBox *qsbMask;
    QLabel *qlReason;
    QLineEdit *qleReason;
    QLabel *qlStart;
    QDateTimeEdit *qdteStart;
    QLabel *qlEnd;
    QDateTimeEdit *qdteEnd;
    QLabel *qliHash;
    QLineEdit *qleHash;
    QListWidget *qlwBans;
    QPushButton *qpbAdd;
    QPushButton *qpbUpdate;
    QPushButton *qpbRemove;
    QPushButton *qpbClear;

    void setupUi(QDialog *BanEditor)
    {
        if (BanEditor->objectName().isEmpty())
            BanEditor->setObjectName(QString::fromUtf8("BanEditor"));
        BanEditor->resize(454, 470);
        gridLayout_2 = new QGridLayout(BanEditor);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        qbbButtons = new QDialogButtonBox(BanEditor);
        qbbButtons->setObjectName(QString::fromUtf8("qbbButtons"));
        qbbButtons->setOrientation(Qt::Horizontal);
        qbbButtons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(qbbButtons, 1, 0, 1, 1);

        qgbBanList = new QGroupBox(BanEditor);
        qgbBanList->setObjectName(QString::fromUtf8("qgbBanList"));
        gridLayout = new QGridLayout(qgbBanList);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        qleSearch = new QLineEdit(qgbBanList);
        qleSearch->setObjectName(QString::fromUtf8("qleSearch"));
        QFont font;
        font.setItalic(false);
        qleSearch->setFont(font);
        qleSearch->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(qleSearch, 1, 0, 1, 7);

        qlUser = new QLabel(qgbBanList);
        qlUser->setObjectName(QString::fromUtf8("qlUser"));

        gridLayout->addWidget(qlUser, 2, 0, 1, 1);

        qleUser = new QLineEdit(qgbBanList);
        qleUser->setObjectName(QString::fromUtf8("qleUser"));
        qleUser->setFont(font);

        gridLayout->addWidget(qleUser, 2, 1, 1, 5);

        qlIP = new QLabel(qgbBanList);
        qlIP->setObjectName(QString::fromUtf8("qlIP"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qlIP->sizePolicy().hasHeightForWidth());
        qlIP->setSizePolicy(sizePolicy);

        gridLayout->addWidget(qlIP, 3, 0, 1, 1);

        qleIP = new QLineEdit(qgbBanList);
        qleIP->setObjectName(QString::fromUtf8("qleIP"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(qleIP->sizePolicy().hasHeightForWidth());
        qleIP->setSizePolicy(sizePolicy1);
        qleIP->setFont(font);

        gridLayout->addWidget(qleIP, 3, 1, 1, 3);

        qlMask = new QLabel(qgbBanList);
        qlMask->setObjectName(QString::fromUtf8("qlMask"));
        sizePolicy.setHeightForWidth(qlMask->sizePolicy().hasHeightForWidth());
        qlMask->setSizePolicy(sizePolicy);

        gridLayout->addWidget(qlMask, 3, 4, 1, 1);

        qsbMask = new QSpinBox(qgbBanList);
        qsbMask->setObjectName(QString::fromUtf8("qsbMask"));
        qsbMask->setMinimum(8);
        qsbMask->setMaximum(128);
        qsbMask->setValue(128);

        gridLayout->addWidget(qsbMask, 3, 5, 1, 1);

        qlReason = new QLabel(qgbBanList);
        qlReason->setObjectName(QString::fromUtf8("qlReason"));

        gridLayout->addWidget(qlReason, 4, 0, 1, 1);

        qleReason = new QLineEdit(qgbBanList);
        qleReason->setObjectName(QString::fromUtf8("qleReason"));

        gridLayout->addWidget(qleReason, 4, 1, 1, 5);

        qlStart = new QLabel(qgbBanList);
        qlStart->setObjectName(QString::fromUtf8("qlStart"));

        gridLayout->addWidget(qlStart, 5, 0, 1, 1);

        qdteStart = new QDateTimeEdit(qgbBanList);
        qdteStart->setObjectName(QString::fromUtf8("qdteStart"));
        qdteStart->setEnabled(false);
        qdteStart->setReadOnly(false);
        qdteStart->setCalendarPopup(false);

        gridLayout->addWidget(qdteStart, 5, 1, 1, 1);

        qlEnd = new QLabel(qgbBanList);
        qlEnd->setObjectName(QString::fromUtf8("qlEnd"));
        sizePolicy.setHeightForWidth(qlEnd->sizePolicy().hasHeightForWidth());
        qlEnd->setSizePolicy(sizePolicy);

        gridLayout->addWidget(qlEnd, 5, 2, 1, 1);

        qdteEnd = new QDateTimeEdit(qgbBanList);
        qdteEnd->setObjectName(QString::fromUtf8("qdteEnd"));
        qdteEnd->setCalendarPopup(true);

        gridLayout->addWidget(qdteEnd, 5, 3, 1, 3);

        qliHash = new QLabel(qgbBanList);
        qliHash->setObjectName(QString::fromUtf8("qliHash"));

        gridLayout->addWidget(qliHash, 6, 0, 1, 1);

        qleHash = new QLineEdit(qgbBanList);
        qleHash->setObjectName(QString::fromUtf8("qleHash"));
        qleHash->setInputMethodHints(Qt::ImhLowercaseOnly|Qt::ImhNoAutoUppercase);

        gridLayout->addWidget(qleHash, 6, 1, 1, 5);

        qlwBans = new QListWidget(qgbBanList);
        qlwBans->setObjectName(QString::fromUtf8("qlwBans"));
        qlwBans->setAlternatingRowColors(true);
        qlwBans->setSortingEnabled(false);

        gridLayout->addWidget(qlwBans, 0, 0, 1, 7);

        qpbAdd = new QPushButton(qgbBanList);
        qpbAdd->setObjectName(QString::fromUtf8("qpbAdd"));
        qpbAdd->setEnabled(false);

        gridLayout->addWidget(qpbAdd, 2, 6, 1, 1);

        qpbUpdate = new QPushButton(qgbBanList);
        qpbUpdate->setObjectName(QString::fromUtf8("qpbUpdate"));
        qpbUpdate->setEnabled(false);

        gridLayout->addWidget(qpbUpdate, 3, 6, 1, 1);

        qpbRemove = new QPushButton(qgbBanList);
        qpbRemove->setObjectName(QString::fromUtf8("qpbRemove"));
        qpbRemove->setEnabled(false);

        gridLayout->addWidget(qpbRemove, 4, 6, 1, 1);

        qpbClear = new QPushButton(qgbBanList);
        qpbClear->setObjectName(QString::fromUtf8("qpbClear"));

        gridLayout->addWidget(qpbClear, 6, 6, 1, 1);


        gridLayout_2->addWidget(qgbBanList, 0, 0, 1, 1);

#if QT_CONFIG(shortcut)
        qlIP->setBuddy(qleIP);
        qlMask->setBuddy(qsbMask);
#endif // QT_CONFIG(shortcut)

        retranslateUi(BanEditor);
        QObject::connect(qbbButtons, SIGNAL(accepted()), BanEditor, SLOT(accept()));
        QObject::connect(qbbButtons, SIGNAL(rejected()), BanEditor, SLOT(reject()));

        QMetaObject::connectSlotsByName(BanEditor);
    } // setupUi

    void retranslateUi(QDialog *BanEditor)
    {
        BanEditor->setWindowTitle(QCoreApplication::translate("BanEditor", "Mumble - Edit Bans", nullptr));
        qgbBanList->setTitle(QCoreApplication::translate("BanEditor", "Ban List", nullptr));
#if QT_CONFIG(tooltip)
        qleSearch->setToolTip(QCoreApplication::translate("BanEditor", "Search field", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qleSearch->setWhatsThis(QCoreApplication::translate("BanEditor", "This is the search field. Use it to find bans that have this username set in the username field.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qleSearch->setPlaceholderText(QCoreApplication::translate("BanEditor", "Who are you looking for?", nullptr));
        qlUser->setText(QCoreApplication::translate("BanEditor", "User", nullptr));
        qleUser->setPlaceholderText(QCoreApplication::translate("BanEditor", "No nickname", nullptr));
        qlIP->setText(QCoreApplication::translate("BanEditor", "&Address", nullptr));
#if QT_CONFIG(tooltip)
        qleIP->setToolTip(QCoreApplication::translate("BanEditor", "IP address", nullptr));
#endif // QT_CONFIG(tooltip)
        qleIP->setText(QString());
        qleIP->setPlaceholderText(QCoreApplication::translate("BanEditor", "No IP address", nullptr));
        qlMask->setText(QCoreApplication::translate("BanEditor", "&Mask", nullptr));
        qlReason->setText(QCoreApplication::translate("BanEditor", "Reason", nullptr));
#if QT_CONFIG(tooltip)
        qleReason->setToolTip(QCoreApplication::translate("BanEditor", "Reason for the ban", nullptr));
#endif // QT_CONFIG(tooltip)
        qleReason->setPlaceholderText(QCoreApplication::translate("BanEditor", "No reason", nullptr));
        qlStart->setText(QCoreApplication::translate("BanEditor", "Start", nullptr));
        qlEnd->setText(QCoreApplication::translate("BanEditor", "End", nullptr));
#if QT_CONFIG(tooltip)
        qdteEnd->setToolTip(QCoreApplication::translate("BanEditor", "Ban end date", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qdteEnd->setWhatsThis(QCoreApplication::translate("BanEditor", "Ban end date. If you set the same date for start and end, the ban will be permanent (it will not expire).", nullptr));
#endif // QT_CONFIG(whatsthis)
        qliHash->setText(QCoreApplication::translate("BanEditor", "Hash", nullptr));
#if QT_CONFIG(tooltip)
        qleHash->setToolTip(QCoreApplication::translate("BanEditor", "Certificate hash", nullptr));
#endif // QT_CONFIG(tooltip)
        qleHash->setPlaceholderText(QCoreApplication::translate("BanEditor", "No certificate hash", nullptr));
#if QT_CONFIG(tooltip)
        qlwBans->setToolTip(QCoreApplication::translate("BanEditor", "Banned users", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qlwBans->setWhatsThis(QCoreApplication::translate("BanEditor", "This is a list with banned users.", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        qpbAdd->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qpbAdd->setWhatsThis(QCoreApplication::translate("BanEditor", "Use this button if you want to add a new ban.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qpbAdd->setText(QCoreApplication::translate("BanEditor", "&Add", nullptr));
#if QT_CONFIG(tooltip)
        qpbUpdate->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qpbUpdate->setWhatsThis(QCoreApplication::translate("BanEditor", "Use this button if you want to update ban information.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qpbUpdate->setText(QCoreApplication::translate("BanEditor", "&Update", nullptr));
#if QT_CONFIG(whatsthis)
        qpbRemove->setWhatsThis(QCoreApplication::translate("BanEditor", "Use this button if you want to remove user from the ban list.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qpbRemove->setText(QCoreApplication::translate("BanEditor", "&Remove", nullptr));
#if QT_CONFIG(tooltip)
        qpbClear->setToolTip(QCoreApplication::translate("BanEditor", "Clear all fields", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qpbClear->setWhatsThis(QCoreApplication::translate("BanEditor", "This button clears all fields. Use it if you want to add a new ban.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qpbClear->setText(QCoreApplication::translate("BanEditor", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BanEditor: public Ui_BanEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BANEDITOR_H
