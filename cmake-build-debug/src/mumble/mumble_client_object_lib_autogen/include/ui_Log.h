/********************************************************************************
** Form generated from reading UI file 'Log.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOG_H
#define UI_LOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogConfig
{
public:
    QVBoxLayout *vboxLayout;
    QTreeWidget *qtwMessages;
    QGroupBox *qgbTTS;
    QGridLayout *gridLayout;
    QCheckBox *qcbReadBackOwn;
    QLabel *qlThreshold;
    QCheckBox *qcbEnableTTS;
    QSpinBox *qsbThreshold;
    QCheckBox *qcbNoScope;
    QCheckBox *qcbNoAuthor;
    QGroupBox *qgbMessageVolume;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *qgbMessageVolumeGrid;
    QSpinBox *qsbCueVolume;
    QLabel *qlTTSVolume;
    QSlider *qsCueVolume;
    QLabel *qlNotificationVolume;
    QSpinBox *qsbNotificationVolume;
    QSlider *qsNotificationVolume;
    QSlider *qsTTSVolume;
    QLabel *qlCueVolume;
    QSpinBox *qsbTTSVolume;
    QGroupBox *qgbMaxBlocks;
    QGridLayout *_2;
    QCheckBox *qcb24HourClock;
    QSpinBox *qsbMaxBlocks;
    QLabel *qlMaxBlocks;
    QSpacerItem *horizontalSpacer;
    QLabel *qlChatMessageMargins;
    QSpinBox *qsbChatMessageMargins;
    QGroupBox *qgbMisc;
    QVBoxLayout *verticalLayout;
    QCheckBox *qcbWhisperFriends;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpinBox *qsbMessageLimitUsers;
    QLabel *label;

    void setupUi(QWidget *LogConfig)
    {
        if (LogConfig->objectName().isEmpty())
            LogConfig->setObjectName(QString::fromUtf8("LogConfig"));
        LogConfig->resize(657, 627);
        vboxLayout = new QVBoxLayout(LogConfig);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        qtwMessages = new QTreeWidget(LogConfig);
        qtwMessages->setObjectName(QString::fromUtf8("qtwMessages"));
        qtwMessages->setAlternatingRowColors(true);
        qtwMessages->setSelectionMode(QAbstractItemView::SingleSelection);
        qtwMessages->setRootIsDecorated(false);
        qtwMessages->setUniformRowHeights(true);
        qtwMessages->setItemsExpandable(false);

        vboxLayout->addWidget(qtwMessages);

        qgbTTS = new QGroupBox(LogConfig);
        qgbTTS->setObjectName(QString::fromUtf8("qgbTTS"));
        gridLayout = new QGridLayout(qgbTTS);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        qcbReadBackOwn = new QCheckBox(qgbTTS);
        qcbReadBackOwn->setObjectName(QString::fromUtf8("qcbReadBackOwn"));

        gridLayout->addWidget(qcbReadBackOwn, 2, 3, 1, 1);

        qlThreshold = new QLabel(qgbTTS);
        qlThreshold->setObjectName(QString::fromUtf8("qlThreshold"));

        gridLayout->addWidget(qlThreshold, 2, 0, 1, 1);

        qcbEnableTTS = new QCheckBox(qgbTTS);
        qcbEnableTTS->setObjectName(QString::fromUtf8("qcbEnableTTS"));
        qcbEnableTTS->setEnabled(true);

        gridLayout->addWidget(qcbEnableTTS, 0, 0, 1, 1);

        qsbThreshold = new QSpinBox(qgbTTS);
        qsbThreshold->setObjectName(QString::fromUtf8("qsbThreshold"));
        qsbThreshold->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        qsbThreshold->setMaximum(5000);
        qsbThreshold->setSingleStep(10);

        gridLayout->addWidget(qsbThreshold, 2, 1, 1, 1);

        qcbNoScope = new QCheckBox(qgbTTS);
        qcbNoScope->setObjectName(QString::fromUtf8("qcbNoScope"));

        gridLayout->addWidget(qcbNoScope, 0, 1, 1, 1);

        qcbNoAuthor = new QCheckBox(qgbTTS);
        qcbNoAuthor->setObjectName(QString::fromUtf8("qcbNoAuthor"));

        gridLayout->addWidget(qcbNoAuthor, 0, 3, 1, 1);


        vboxLayout->addWidget(qgbTTS);

        qgbMessageVolume = new QGroupBox(LogConfig);
        qgbMessageVolume->setObjectName(QString::fromUtf8("qgbMessageVolume"));
        verticalLayout_3 = new QVBoxLayout(qgbMessageVolume);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 9, -1, -1);
        qgbMessageVolumeGrid = new QGridLayout();
        qgbMessageVolumeGrid->setObjectName(QString::fromUtf8("qgbMessageVolumeGrid"));
        qsbCueVolume = new QSpinBox(qgbMessageVolume);
        qsbCueVolume->setObjectName(QString::fromUtf8("qsbCueVolume"));
        qsbCueVolume->setMinimum(-60);
        qsbCueVolume->setMaximum(30);

        qgbMessageVolumeGrid->addWidget(qsbCueVolume, 2, 2, 1, 1);

        qlTTSVolume = new QLabel(qgbMessageVolume);
        qlTTSVolume->setObjectName(QString::fromUtf8("qlTTSVolume"));

        qgbMessageVolumeGrid->addWidget(qlTTSVolume, 0, 0, 1, 1);

        qsCueVolume = new QSlider(qgbMessageVolume);
        qsCueVolume->setObjectName(QString::fromUtf8("qsCueVolume"));
        qsCueVolume->setMinimum(-60);
        qsCueVolume->setMaximum(30);
        qsCueVolume->setSingleStep(1);
        qsCueVolume->setPageStep(10);
        qsCueVolume->setValue(0);
        qsCueVolume->setOrientation(Qt::Horizontal);
        qsCueVolume->setTickPosition(QSlider::TicksBelow);
        qsCueVolume->setTickInterval(10);

        qgbMessageVolumeGrid->addWidget(qsCueVolume, 2, 1, 1, 1);

        qlNotificationVolume = new QLabel(qgbMessageVolume);
        qlNotificationVolume->setObjectName(QString::fromUtf8("qlNotificationVolume"));
        qlNotificationVolume->setMargin(0);

        qgbMessageVolumeGrid->addWidget(qlNotificationVolume, 1, 0, 1, 1);

        qsbNotificationVolume = new QSpinBox(qgbMessageVolume);
        qsbNotificationVolume->setObjectName(QString::fromUtf8("qsbNotificationVolume"));
        qsbNotificationVolume->setMinimum(-60);
        qsbNotificationVolume->setMaximum(30);

        qgbMessageVolumeGrid->addWidget(qsbNotificationVolume, 1, 2, 1, 1);

        qsNotificationVolume = new QSlider(qgbMessageVolume);
        qsNotificationVolume->setObjectName(QString::fromUtf8("qsNotificationVolume"));
        qsNotificationVolume->setMinimum(-60);
        qsNotificationVolume->setMaximum(30);
        qsNotificationVolume->setSingleStep(1);
        qsNotificationVolume->setPageStep(10);
        qsNotificationVolume->setValue(0);
        qsNotificationVolume->setOrientation(Qt::Horizontal);
        qsNotificationVolume->setTickPosition(QSlider::TicksBelow);
        qsNotificationVolume->setTickInterval(10);

        qgbMessageVolumeGrid->addWidget(qsNotificationVolume, 1, 1, 1, 1);

        qsTTSVolume = new QSlider(qgbMessageVolume);
        qsTTSVolume->setObjectName(QString::fromUtf8("qsTTSVolume"));
        qsTTSVolume->setMaximum(100);
        qsTTSVolume->setSingleStep(5);
        qsTTSVolume->setPageStep(20);
        qsTTSVolume->setOrientation(Qt::Horizontal);
        qsTTSVolume->setTickPosition(QSlider::TicksBelow);
        qsTTSVolume->setTickInterval(5);

        qgbMessageVolumeGrid->addWidget(qsTTSVolume, 0, 1, 1, 1);

        qlCueVolume = new QLabel(qgbMessageVolume);
        qlCueVolume->setObjectName(QString::fromUtf8("qlCueVolume"));
        qlCueVolume->setMargin(0);

        qgbMessageVolumeGrid->addWidget(qlCueVolume, 2, 0, 1, 1);

        qsbTTSVolume = new QSpinBox(qgbMessageVolume);
        qsbTTSVolume->setObjectName(QString::fromUtf8("qsbTTSVolume"));
        qsbTTSVolume->setMaximum(100);

        qgbMessageVolumeGrid->addWidget(qsbTTSVolume, 0, 2, 1, 1);


        verticalLayout_3->addLayout(qgbMessageVolumeGrid);


        vboxLayout->addWidget(qgbMessageVolume);

        qgbMaxBlocks = new QGroupBox(LogConfig);
        qgbMaxBlocks->setObjectName(QString::fromUtf8("qgbMaxBlocks"));
        _2 = new QGridLayout(qgbMaxBlocks);
        _2->setObjectName(QString::fromUtf8("_2"));
        qcb24HourClock = new QCheckBox(qgbMaxBlocks);
        qcb24HourClock->setObjectName(QString::fromUtf8("qcb24HourClock"));

        _2->addWidget(qcb24HourClock, 1, 0, 1, 1);

        qsbMaxBlocks = new QSpinBox(qgbMaxBlocks);
        qsbMaxBlocks->setObjectName(QString::fromUtf8("qsbMaxBlocks"));
        qsbMaxBlocks->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        qsbMaxBlocks->setMaximum(1000000);
        qsbMaxBlocks->setSingleStep(100);

        _2->addWidget(qsbMaxBlocks, 0, 1, 1, 1);

        qlMaxBlocks = new QLabel(qgbMaxBlocks);
        qlMaxBlocks->setObjectName(QString::fromUtf8("qlMaxBlocks"));

        _2->addWidget(qlMaxBlocks, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(8, 16, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(horizontalSpacer, 0, 2, 1, 1);

        qlChatMessageMargins = new QLabel(qgbMaxBlocks);
        qlChatMessageMargins->setObjectName(QString::fromUtf8("qlChatMessageMargins"));

        _2->addWidget(qlChatMessageMargins, 2, 0, 1, 1);

        qsbChatMessageMargins = new QSpinBox(qgbMaxBlocks);
        qsbChatMessageMargins->setObjectName(QString::fromUtf8("qsbChatMessageMargins"));
        qsbChatMessageMargins->setFrame(true);

        _2->addWidget(qsbChatMessageMargins, 2, 1, 1, 1);


        vboxLayout->addWidget(qgbMaxBlocks);

        qgbMisc = new QGroupBox(LogConfig);
        qgbMisc->setObjectName(QString::fromUtf8("qgbMisc"));
        verticalLayout = new QVBoxLayout(qgbMisc);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        qcbWhisperFriends = new QCheckBox(qgbMisc);
        qcbWhisperFriends->setObjectName(QString::fromUtf8("qcbWhisperFriends"));

        verticalLayout->addWidget(qcbWhisperFriends);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(qgbMisc);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        qsbMessageLimitUsers = new QSpinBox(qgbMisc);
        qsbMessageLimitUsers->setObjectName(QString::fromUtf8("qsbMessageLimitUsers"));
        qsbMessageLimitUsers->setEnabled(true);
        qsbMessageLimitUsers->setMaximumSize(QSize(40, 20));
        qsbMessageLimitUsers->setFrame(true);

        horizontalLayout->addWidget(qsbMessageLimitUsers);

        label = new QLabel(qgbMisc);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);


        verticalLayout->addLayout(horizontalLayout);


        vboxLayout->addWidget(qgbMisc);

#if QT_CONFIG(shortcut)
        qlThreshold->setBuddy(qsbThreshold);
        qlTTSVolume->setBuddy(qsTTSVolume);
        qlNotificationVolume->setBuddy(qsNotificationVolume);
        qlCueVolume->setBuddy(qsNotificationVolume);
        label->setBuddy(qsbMessageLimitUsers);
#endif // QT_CONFIG(shortcut)

        retranslateUi(LogConfig);

        QMetaObject::connectSlotsByName(LogConfig);
    } // setupUi

    void retranslateUi(QWidget *LogConfig)
    {
        LogConfig->setWindowTitle(QCoreApplication::translate("LogConfig", "Messages", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = qtwMessages->headerItem();
        ___qtreewidgetitem->setText(7, QCoreApplication::translate("LogConfig", "Soundfile", nullptr));
        ___qtreewidgetitem->setText(6, QCoreApplication::translate("LogConfig", "Path", nullptr));
        ___qtreewidgetitem->setText(5, QCoreApplication::translate("LogConfig", "Limit", nullptr));
        ___qtreewidgetitem->setText(4, QCoreApplication::translate("LogConfig", "Text-To-Speech", nullptr));
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("LogConfig", "Highlight", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("LogConfig", "Notification", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("LogConfig", "Console", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("LogConfig", "Message", nullptr));
        qgbTTS->setTitle(QCoreApplication::translate("LogConfig", "Text To Speech", nullptr));
#if QT_CONFIG(tooltip)
        qcbReadBackOwn->setToolTip(QCoreApplication::translate("LogConfig", "If enabled text messages you send will be read back to you with TTS", nullptr));
#endif // QT_CONFIG(tooltip)
        qcbReadBackOwn->setText(QCoreApplication::translate("LogConfig", "Read back own messages", nullptr));
        qlThreshold->setText(QCoreApplication::translate("LogConfig", "Length threshold", nullptr));
#if QT_CONFIG(tooltip)
        qcbEnableTTS->setToolTip(QCoreApplication::translate("LogConfig", "Click to enable Text-to-Speech", nullptr));
#endif // QT_CONFIG(tooltip)
        qcbEnableTTS->setText(QCoreApplication::translate("LogConfig", "Enable Text-to-Speech", nullptr));
#if QT_CONFIG(tooltip)
        qsbThreshold->setToolTip(QCoreApplication::translate("LogConfig", "Message length threshold for Text-To-Speech Engine", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qsbThreshold->setWhatsThis(QCoreApplication::translate("LogConfig", "<b>This is the length threshold used for the Text-To-Speech Engine.</b><br />Messages longer than this limit will not be read aloud in their full length.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qsbThreshold->setSuffix(QCoreApplication::translate("LogConfig", " Characters", nullptr));
#if QT_CONFIG(tooltip)
        qcbNoScope->setToolTip(QCoreApplication::translate("LogConfig", "If enabled, TTS will not dictate the message scope.", nullptr));
#endif // QT_CONFIG(tooltip)
        qcbNoScope->setText(QCoreApplication::translate("LogConfig", "Omit Message Scope", nullptr));
#if QT_CONFIG(tooltip)
        qcbNoAuthor->setToolTip(QCoreApplication::translate("LogConfig", "If enabled, TTS will not dictate the message author.", nullptr));
#endif // QT_CONFIG(tooltip)
        qcbNoAuthor->setText(QCoreApplication::translate("LogConfig", "Omit Message Author", nullptr));
        qgbMessageVolume->setTitle(QCoreApplication::translate("LogConfig", "Message Volume", nullptr));
#if QT_CONFIG(tooltip)
        qsbCueVolume->setToolTip(QCoreApplication::translate("LogConfig", "Volume adjustment for audio cues", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qsbCueVolume->setWhatsThis(QCoreApplication::translate("LogConfig", "<b>This is the volume adjustment for audio cues.</b><br />A value of 0 dB means no change to the sound sample.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qsbCueVolume->setSuffix(QCoreApplication::translate("LogConfig", " dB", nullptr));
        qlTTSVolume->setText(QCoreApplication::translate("LogConfig", "Text-to-Speech volume", nullptr));
#if QT_CONFIG(tooltip)
        qsCueVolume->setToolTip(QCoreApplication::translate("LogConfig", "Volume adjustment for audio cues", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qsCueVolume->setWhatsThis(QCoreApplication::translate("LogConfig", "<b>This is the volume adjustment for audio cues.</b><br />A value of 0 dB means no change to the sound sample.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qlNotificationVolume->setText(QCoreApplication::translate("LogConfig", "Notification volume adjustment", nullptr));
#if QT_CONFIG(tooltip)
        qsbNotificationVolume->setToolTip(QCoreApplication::translate("LogConfig", "Volume adjustment for notification sounds", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qsbNotificationVolume->setWhatsThis(QCoreApplication::translate("LogConfig", "<b>This is the volume adjustment for notification sounds.</b><br />A value of 0 dB means no change to the sound sample.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qsbNotificationVolume->setSuffix(QCoreApplication::translate("LogConfig", " dB", nullptr));
#if QT_CONFIG(tooltip)
        qsNotificationVolume->setToolTip(QCoreApplication::translate("LogConfig", "Volume adjustment for notification sounds", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qsNotificationVolume->setWhatsThis(QCoreApplication::translate("LogConfig", "<b>This is the volume adjustment for notification sounds.</b><br />A value of 0 dB means no change to the sound sample.", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        qsTTSVolume->setToolTip(QCoreApplication::translate("LogConfig", "Volume of Text-To-Speech Engine", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qsTTSVolume->setWhatsThis(QCoreApplication::translate("LogConfig", "<b>This is the volume used for the speech synthesis.</b>", nullptr));
#endif // QT_CONFIG(whatsthis)
        qlCueVolume->setText(QCoreApplication::translate("LogConfig", "Audio cue volume adjustment", nullptr));
        qsbTTSVolume->setSuffix(QCoreApplication::translate("LogConfig", " %", nullptr));
        qgbMaxBlocks->setTitle(QCoreApplication::translate("LogConfig", "Chat Log", nullptr));
#if QT_CONFIG(tooltip)
        qcb24HourClock->setToolTip(QCoreApplication::translate("LogConfig", "If checked the time at the beginning of a message will be displayed in the 24-hour format.\n"
"\n"
"The setting only applies for new messages, the already shown ones will retain the previous time format.", nullptr));
#endif // QT_CONFIG(tooltip)
        qcb24HourClock->setText(QCoreApplication::translate("LogConfig", "Use 24-hour clock", nullptr));
        qsbMaxBlocks->setSpecialValueText(QCoreApplication::translate("LogConfig", "Unlimited", nullptr));
        qsbMaxBlocks->setSuffix(QCoreApplication::translate("LogConfig", " Lines", nullptr));
        qlMaxBlocks->setText(QCoreApplication::translate("LogConfig", "Maximum chat length", nullptr));
#if QT_CONFIG(tooltip)
        qlChatMessageMargins->setToolTip(QCoreApplication::translate("LogConfig", "How far individual messages are spaced out from one another.", nullptr));
#endif // QT_CONFIG(tooltip)
        qlChatMessageMargins->setText(QCoreApplication::translate("LogConfig", "Message margins", nullptr));
#if QT_CONFIG(tooltip)
        qsbChatMessageMargins->setToolTip(QCoreApplication::translate("LogConfig", "How far individual messages are spaced out from one another.", nullptr));
#endif // QT_CONFIG(tooltip)
        qgbMisc->setTitle(QCoreApplication::translate("LogConfig", "Misc.", nullptr));
#if QT_CONFIG(tooltip)
        qcbWhisperFriends->setToolTip(QCoreApplication::translate("LogConfig", "If checked you will only hear whispers from users you added to your friend list.", nullptr));
#endif // QT_CONFIG(tooltip)
        qcbWhisperFriends->setText(QCoreApplication::translate("LogConfig", "Only accept whispers from friends", nullptr));
        label_2->setText(QCoreApplication::translate("LogConfig", "Limit notifications when there are more than", nullptr));
#if QT_CONFIG(tooltip)
        qsbMessageLimitUsers->setToolTip(QCoreApplication::translate("LogConfig", "Number of users that will trigger message limiting functionality.", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("LogConfig", "users on the server.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogConfig: public Ui_LogConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOG_H
