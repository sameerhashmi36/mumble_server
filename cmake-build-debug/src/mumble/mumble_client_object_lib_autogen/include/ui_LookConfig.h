/********************************************************************************
** Form generated from reading UI file 'LookConfig.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOOKCONFIG_H
#define UI_LOOKCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/MUComboBox.h"

QT_BEGIN_NAMESPACE

class Ui_LookConfig
{
public:
    QGridLayout *gridLayout_4;
    QGroupBox *qgbChannel;
    QGridLayout *gridLayout_2;
    QCheckBox *qcbFilterHidesEmptyChannels;
    MUComboBox *qcbExpand;
    MUComboBox *qcbUserDrag;
    QLabel *qliUserDrag;
    QLabel *qliChannelDrag;
    QCheckBox *qcbChatBarUseSelection;
    QLabel *qliExpand;
    QCheckBox *qcbShowUserCount;
    MUComboBox *qcbChannelDrag;
    QCheckBox *qcbUsersTop;
    QCheckBox *qcbShowVolumeAdjustments;
    QCheckBox *qcbShowNicknamesOnly;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *qgbLayout;
    QGridLayout *gridLayoutLayout;
    QLabel *qlLHybrid;
    QRadioButton *qrbLHybrid;
    QRadioButton *qrbLCustom;
    QLabel *qlLCustom;
    QRadioButton *qrbLStacked;
    QRadioButton *qrbLClassic;
    QSpacerItem *horizontalSpacer_4;
    QLabel *qlLClassic;
    QLabel *qlLStacked;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_6;
    QGroupBox *qgbTray;
    QVBoxLayout *verticalLayout;
    QCheckBox *qcbHideTray;
    QCheckBox *qcbStateInTray;
    QGroupBox *qgbApplication;
    QGridLayout *gridLayout_3;
    QLabel *qliAlwaysOnTop;
    MUComboBox *qcbAlwaysOnTop;
    QCheckBox *qcbShowContextMenuInMenuBar;
    QLabel *qliQuitBehavior;
    MUComboBox *qcbQuitBehavior;
    QCheckBox *qcbEnableDeveloperMenu;
    QCheckBox *qcbLockLayout;
    QGroupBox *qgbChannelHierarchyString;
    QFormLayout *formLayout;
    QLabel *qlChannelSeparator;
    QLineEdit *qleChannelSeparator;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_5;
    QLabel *qlPostfixCharCount;
    QSpinBox *qsbMaxNameLength;
    QLineEdit *qleAbbreviationReplacement;
    QSpinBox *qsbPostfixCharCount;
    QSpinBox *qsbRelFontSize;
    QLabel *qlMaxNameLength;
    QSpinBox *qsbSilentUserLifetime;
    QCheckBox *qcbAbbreviateCurrentChannel;
    QLabel *qlSilentUserLifetime;
    QCheckBox *qcbAbbreviateChannelNames;
    QSpinBox *qsbChannelHierarchyDepth;
    QCheckBox *qcbShowLocalListeners;
    QLabel *qlAbbreviationReplacement;
    QLabel *qlPrefixCharCount;
    QCheckBox *qcbLocalUserVisible;
    QSpinBox *qsbPrefixCharCount;
    QLabel *qlRelFontSize;
    QLabel *qlChannelHierarchyDepth;
    QGroupBox *qgbLookFeel;
    QGridLayout *gridLayout;
    MUComboBox *qcbLanguage;
    QLabel *qliTheme;
    MUComboBox *qcbTheme;
    QCheckBox *qcbShowTransmitModeComboBox;
    QCheckBox *qcbHighContrast;
    QSpacerItem *verticalSpacer;
    QLabel *qliLanguage;
    QLabel *qlThemesDirectory;
    QGroupBox *qgbSearch;
    QGridLayout *gridLayout_6;
    QComboBox *qcbSearchUserAction;
    QLabel *qlSearchUserAction;
    QComboBox *qcbSearchChannelAction;
    QLabel *qlSearchChannelAction;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *LookConfig)
    {
        if (LookConfig->objectName().isEmpty())
            LookConfig->setObjectName(QString::fromUtf8("LookConfig"));
        LookConfig->resize(728, 1273);
        LookConfig->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout_4 = new QGridLayout(LookConfig);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        qgbChannel = new QGroupBox(LookConfig);
        qgbChannel->setObjectName(QString::fromUtf8("qgbChannel"));
        gridLayout_2 = new QGridLayout(qgbChannel);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        qcbFilterHidesEmptyChannels = new QCheckBox(qgbChannel);
        qcbFilterHidesEmptyChannels->setObjectName(QString::fromUtf8("qcbFilterHidesEmptyChannels"));

        gridLayout_2->addWidget(qcbFilterHidesEmptyChannels, 8, 0, 1, 2);

        qcbExpand = new MUComboBox(qgbChannel);
        qcbExpand->setObjectName(QString::fromUtf8("qcbExpand"));

        gridLayout_2->addWidget(qcbExpand, 2, 1, 1, 1);

        qcbUserDrag = new MUComboBox(qgbChannel);
        qcbUserDrag->setObjectName(QString::fromUtf8("qcbUserDrag"));

        gridLayout_2->addWidget(qcbUserDrag, 1, 1, 1, 1);

        qliUserDrag = new QLabel(qgbChannel);
        qliUserDrag->setObjectName(QString::fromUtf8("qliUserDrag"));

        gridLayout_2->addWidget(qliUserDrag, 1, 0, 1, 1);

        qliChannelDrag = new QLabel(qgbChannel);
        qliChannelDrag->setObjectName(QString::fromUtf8("qliChannelDrag"));

        gridLayout_2->addWidget(qliChannelDrag, 0, 0, 1, 1);

        qcbChatBarUseSelection = new QCheckBox(qgbChannel);
        qcbChatBarUseSelection->setObjectName(QString::fromUtf8("qcbChatBarUseSelection"));

        gridLayout_2->addWidget(qcbChatBarUseSelection, 7, 0, 1, 2);

        qliExpand = new QLabel(qgbChannel);
        qliExpand->setObjectName(QString::fromUtf8("qliExpand"));

        gridLayout_2->addWidget(qliExpand, 2, 0, 1, 1);

        qcbShowUserCount = new QCheckBox(qgbChannel);
        qcbShowUserCount->setObjectName(QString::fromUtf8("qcbShowUserCount"));

        gridLayout_2->addWidget(qcbShowUserCount, 4, 0, 1, 2);

        qcbChannelDrag = new MUComboBox(qgbChannel);
        qcbChannelDrag->setObjectName(QString::fromUtf8("qcbChannelDrag"));

        gridLayout_2->addWidget(qcbChannelDrag, 0, 1, 1, 1);

        qcbUsersTop = new QCheckBox(qgbChannel);
        qcbUsersTop->setObjectName(QString::fromUtf8("qcbUsersTop"));

        gridLayout_2->addWidget(qcbUsersTop, 3, 0, 1, 2);

        qcbShowVolumeAdjustments = new QCheckBox(qgbChannel);
        qcbShowVolumeAdjustments->setObjectName(QString::fromUtf8("qcbShowVolumeAdjustments"));

        gridLayout_2->addWidget(qcbShowVolumeAdjustments, 5, 0, 1, 2);

        qcbShowNicknamesOnly = new QCheckBox(qgbChannel);
        qcbShowNicknamesOnly->setObjectName(QString::fromUtf8("qcbShowNicknamesOnly"));

        gridLayout_2->addWidget(qcbShowNicknamesOnly, 6, 0, 1, 2);


        gridLayout_4->addWidget(qgbChannel, 3, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 6, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 6, 0, 1, 1);

        qgbLayout = new QGroupBox(LookConfig);
        qgbLayout->setObjectName(QString::fromUtf8("qgbLayout"));
        gridLayoutLayout = new QGridLayout(qgbLayout);
        gridLayoutLayout->setObjectName(QString::fromUtf8("gridLayoutLayout"));
        qlLHybrid = new QLabel(qgbLayout);
        qlLHybrid->setObjectName(QString::fromUtf8("qlLHybrid"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qlLHybrid->sizePolicy().hasHeightForWidth());
        qlLHybrid->setSizePolicy(sizePolicy);
        qlLHybrid->setPixmap(QPixmap(QString::fromUtf8("skin:layout_hybrid.svg")));
        qlLHybrid->setScaledContents(false);

        gridLayoutLayout->addWidget(qlLHybrid, 0, 5, 1, 1);

        qrbLHybrid = new QRadioButton(qgbLayout);
        qrbLHybrid->setObjectName(QString::fromUtf8("qrbLHybrid"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(qrbLHybrid->sizePolicy().hasHeightForWidth());
        qrbLHybrid->setSizePolicy(sizePolicy1);
        qrbLHybrid->setIconSize(QSize(64, 64));

        gridLayoutLayout->addWidget(qrbLHybrid, 1, 5, 1, 1);

        qrbLCustom = new QRadioButton(qgbLayout);
        qrbLCustom->setObjectName(QString::fromUtf8("qrbLCustom"));
        sizePolicy1.setHeightForWidth(qrbLCustom->sizePolicy().hasHeightForWidth());
        qrbLCustom->setSizePolicy(sizePolicy1);

        gridLayoutLayout->addWidget(qrbLCustom, 1, 7, 1, 1);

        qlLCustom = new QLabel(qgbLayout);
        qlLCustom->setObjectName(QString::fromUtf8("qlLCustom"));
        qlLCustom->setPixmap(QPixmap(QString::fromUtf8("skin:layout_custom.svg")));

        gridLayoutLayout->addWidget(qlLCustom, 0, 7, 1, 1);

        qrbLStacked = new QRadioButton(qgbLayout);
        qrbLStacked->setObjectName(QString::fromUtf8("qrbLStacked"));
        sizePolicy1.setHeightForWidth(qrbLStacked->sizePolicy().hasHeightForWidth());
        qrbLStacked->setSizePolicy(sizePolicy1);
        qrbLStacked->setIconSize(QSize(64, 64));

        gridLayoutLayout->addWidget(qrbLStacked, 1, 3, 1, 1);

        qrbLClassic = new QRadioButton(qgbLayout);
        qrbLClassic->setObjectName(QString::fromUtf8("qrbLClassic"));
        sizePolicy1.setHeightForWidth(qrbLClassic->sizePolicy().hasHeightForWidth());
        qrbLClassic->setSizePolicy(sizePolicy1);
        qrbLClassic->setIconSize(QSize(64, 64));

        gridLayoutLayout->addWidget(qrbLClassic, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayoutLayout->addItem(horizontalSpacer_4, 1, 2, 1, 1);

        qlLClassic = new QLabel(qgbLayout);
        qlLClassic->setObjectName(QString::fromUtf8("qlLClassic"));
        sizePolicy.setHeightForWidth(qlLClassic->sizePolicy().hasHeightForWidth());
        qlLClassic->setSizePolicy(sizePolicy);
        qlLClassic->setPixmap(QPixmap(QString::fromUtf8("skin:layout_classic.svg")));

        gridLayoutLayout->addWidget(qlLClassic, 0, 1, 1, 1);

        qlLStacked = new QLabel(qgbLayout);
        qlLStacked->setObjectName(QString::fromUtf8("qlLStacked"));
        sizePolicy.setHeightForWidth(qlLStacked->sizePolicy().hasHeightForWidth());
        qlLStacked->setSizePolicy(sizePolicy);
        qlLStacked->setPixmap(QPixmap(QString::fromUtf8("skin:layout_stacked.svg")));

        gridLayoutLayout->addWidget(qlLStacked, 0, 3, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayoutLayout->addItem(horizontalSpacer_5, 1, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayoutLayout->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayoutLayout->addItem(horizontalSpacer_3, 1, 8, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayoutLayout->addItem(horizontalSpacer_6, 1, 6, 1, 1);


        gridLayout_4->addWidget(qgbLayout, 0, 0, 1, 2);

        qgbTray = new QGroupBox(LookConfig);
        qgbTray->setObjectName(QString::fromUtf8("qgbTray"));
        verticalLayout = new QVBoxLayout(qgbTray);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        qcbHideTray = new QCheckBox(qgbTray);
        qcbHideTray->setObjectName(QString::fromUtf8("qcbHideTray"));

        verticalLayout->addWidget(qcbHideTray);

        qcbStateInTray = new QCheckBox(qgbTray);
        qcbStateInTray->setObjectName(QString::fromUtf8("qcbStateInTray"));

        verticalLayout->addWidget(qcbStateInTray);


        gridLayout_4->addWidget(qgbTray, 2, 1, 1, 1);

        qgbApplication = new QGroupBox(LookConfig);
        qgbApplication->setObjectName(QString::fromUtf8("qgbApplication"));
        gridLayout_3 = new QGridLayout(qgbApplication);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        qliAlwaysOnTop = new QLabel(qgbApplication);
        qliAlwaysOnTop->setObjectName(QString::fromUtf8("qliAlwaysOnTop"));

        gridLayout_3->addWidget(qliAlwaysOnTop, 0, 0, 1, 1);

        qcbAlwaysOnTop = new MUComboBox(qgbApplication);
        qcbAlwaysOnTop->addItem(QString());
        qcbAlwaysOnTop->addItem(QString());
        qcbAlwaysOnTop->addItem(QString());
        qcbAlwaysOnTop->addItem(QString());
        qcbAlwaysOnTop->setObjectName(QString::fromUtf8("qcbAlwaysOnTop"));

        gridLayout_3->addWidget(qcbAlwaysOnTop, 0, 1, 1, 1);

        qcbShowContextMenuInMenuBar = new QCheckBox(qgbApplication);
        qcbShowContextMenuInMenuBar->setObjectName(QString::fromUtf8("qcbShowContextMenuInMenuBar"));

        gridLayout_3->addWidget(qcbShowContextMenuInMenuBar, 1, 0, 1, 2);

        qliQuitBehavior = new QLabel(qgbApplication);
        qliQuitBehavior->setObjectName(QString::fromUtf8("qliQuitBehavior"));

        gridLayout_3->addWidget(qliQuitBehavior, 2, 0, 1, 1);

        qcbQuitBehavior = new MUComboBox(qgbApplication);
        qcbQuitBehavior->addItem(QString());
        qcbQuitBehavior->addItem(QString());
        qcbQuitBehavior->addItem(QString());
        qcbQuitBehavior->addItem(QString());
        qcbQuitBehavior->addItem(QString());
        qcbQuitBehavior->setObjectName(QString::fromUtf8("qcbQuitBehavior"));

        gridLayout_3->addWidget(qcbQuitBehavior, 2, 1, 1, 1);

        qcbEnableDeveloperMenu = new QCheckBox(qgbApplication);
        qcbEnableDeveloperMenu->setObjectName(QString::fromUtf8("qcbEnableDeveloperMenu"));

        gridLayout_3->addWidget(qcbEnableDeveloperMenu, 3, 0, 1, 2);

        qcbLockLayout = new QCheckBox(qgbApplication);
        qcbLockLayout->setObjectName(QString::fromUtf8("qcbLockLayout"));

        gridLayout_3->addWidget(qcbLockLayout, 4, 0, 1, 2);


        gridLayout_4->addWidget(qgbApplication, 1, 1, 1, 1);

        qgbChannelHierarchyString = new QGroupBox(LookConfig);
        qgbChannelHierarchyString->setObjectName(QString::fromUtf8("qgbChannelHierarchyString"));
        formLayout = new QFormLayout(qgbChannelHierarchyString);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        qlChannelSeparator = new QLabel(qgbChannelHierarchyString);
        qlChannelSeparator->setObjectName(QString::fromUtf8("qlChannelSeparator"));

        formLayout->setWidget(0, QFormLayout::LabelRole, qlChannelSeparator);

        qleChannelSeparator = new QLineEdit(qgbChannelHierarchyString);
        qleChannelSeparator->setObjectName(QString::fromUtf8("qleChannelSeparator"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(qleChannelSeparator->sizePolicy().hasHeightForWidth());
        qleChannelSeparator->setSizePolicy(sizePolicy2);

        formLayout->setWidget(0, QFormLayout::FieldRole, qleChannelSeparator);


        gridLayout_4->addWidget(qgbChannelHierarchyString, 5, 1, 1, 1);

        groupBox = new QGroupBox(LookConfig);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy3);
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        gridLayout_5 = new QGridLayout(groupBox);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setHorizontalSpacing(6);
        qlPostfixCharCount = new QLabel(groupBox);
        qlPostfixCharCount->setObjectName(QString::fromUtf8("qlPostfixCharCount"));

        gridLayout_5->addWidget(qlPostfixCharCount, 11, 0, 1, 1);

        qsbMaxNameLength = new QSpinBox(groupBox);
        qsbMaxNameLength->setObjectName(QString::fromUtf8("qsbMaxNameLength"));

        gridLayout_5->addWidget(qsbMaxNameLength, 9, 1, 1, 1);

        qleAbbreviationReplacement = new QLineEdit(groupBox);
        qleAbbreviationReplacement->setObjectName(QString::fromUtf8("qleAbbreviationReplacement"));
        sizePolicy1.setHeightForWidth(qleAbbreviationReplacement->sizePolicy().hasHeightForWidth());
        qleAbbreviationReplacement->setSizePolicy(sizePolicy1);

        gridLayout_5->addWidget(qleAbbreviationReplacement, 13, 1, 1, 1);

        qsbPostfixCharCount = new QSpinBox(groupBox);
        qsbPostfixCharCount->setObjectName(QString::fromUtf8("qsbPostfixCharCount"));

        gridLayout_5->addWidget(qsbPostfixCharCount, 11, 1, 1, 1);

        qsbRelFontSize = new QSpinBox(groupBox);
        qsbRelFontSize->setObjectName(QString::fromUtf8("qsbRelFontSize"));
        qsbRelFontSize->setMinimum(1);
        qsbRelFontSize->setMaximum(500);

        gridLayout_5->addWidget(qsbRelFontSize, 4, 1, 1, 1);

        qlMaxNameLength = new QLabel(groupBox);
        qlMaxNameLength->setObjectName(QString::fromUtf8("qlMaxNameLength"));

        gridLayout_5->addWidget(qlMaxNameLength, 9, 0, 1, 1);

        qsbSilentUserLifetime = new QSpinBox(groupBox);
        qsbSilentUserLifetime->setObjectName(QString::fromUtf8("qsbSilentUserLifetime"));
        sizePolicy1.setHeightForWidth(qsbSilentUserLifetime->sizePolicy().hasHeightForWidth());
        qsbSilentUserLifetime->setSizePolicy(sizePolicy1);
        qsbSilentUserLifetime->setMaximum(999);

        gridLayout_5->addWidget(qsbSilentUserLifetime, 5, 1, 1, 1);

        qcbAbbreviateCurrentChannel = new QCheckBox(groupBox);
        qcbAbbreviateCurrentChannel->setObjectName(QString::fromUtf8("qcbAbbreviateCurrentChannel"));

        gridLayout_5->addWidget(qcbAbbreviateCurrentChannel, 2, 0, 1, 2);

        qlSilentUserLifetime = new QLabel(groupBox);
        qlSilentUserLifetime->setObjectName(QString::fromUtf8("qlSilentUserLifetime"));
        sizePolicy.setHeightForWidth(qlSilentUserLifetime->sizePolicy().hasHeightForWidth());
        qlSilentUserLifetime->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(qlSilentUserLifetime, 5, 0, 1, 1);

        qcbAbbreviateChannelNames = new QCheckBox(groupBox);
        qcbAbbreviateChannelNames->setObjectName(QString::fromUtf8("qcbAbbreviateChannelNames"));

        gridLayout_5->addWidget(qcbAbbreviateChannelNames, 1, 0, 1, 2);

        qsbChannelHierarchyDepth = new QSpinBox(groupBox);
        qsbChannelHierarchyDepth->setObjectName(QString::fromUtf8("qsbChannelHierarchyDepth"));

        gridLayout_5->addWidget(qsbChannelHierarchyDepth, 7, 1, 1, 1);

        qcbShowLocalListeners = new QCheckBox(groupBox);
        qcbShowLocalListeners->setObjectName(QString::fromUtf8("qcbShowLocalListeners"));

        gridLayout_5->addWidget(qcbShowLocalListeners, 3, 0, 1, 2);

        qlAbbreviationReplacement = new QLabel(groupBox);
        qlAbbreviationReplacement->setObjectName(QString::fromUtf8("qlAbbreviationReplacement"));

        gridLayout_5->addWidget(qlAbbreviationReplacement, 13, 0, 1, 1);

        qlPrefixCharCount = new QLabel(groupBox);
        qlPrefixCharCount->setObjectName(QString::fromUtf8("qlPrefixCharCount"));

        gridLayout_5->addWidget(qlPrefixCharCount, 10, 0, 1, 1);

        qcbLocalUserVisible = new QCheckBox(groupBox);
        qcbLocalUserVisible->setObjectName(QString::fromUtf8("qcbLocalUserVisible"));

        gridLayout_5->addWidget(qcbLocalUserVisible, 0, 0, 1, 1);

        qsbPrefixCharCount = new QSpinBox(groupBox);
        qsbPrefixCharCount->setObjectName(QString::fromUtf8("qsbPrefixCharCount"));

        gridLayout_5->addWidget(qsbPrefixCharCount, 10, 1, 1, 1);

        qlRelFontSize = new QLabel(groupBox);
        qlRelFontSize->setObjectName(QString::fromUtf8("qlRelFontSize"));

        gridLayout_5->addWidget(qlRelFontSize, 4, 0, 1, 1);

        qlChannelHierarchyDepth = new QLabel(groupBox);
        qlChannelHierarchyDepth->setObjectName(QString::fromUtf8("qlChannelHierarchyDepth"));

        gridLayout_5->addWidget(qlChannelHierarchyDepth, 7, 0, 1, 1);


        gridLayout_4->addWidget(groupBox, 5, 0, 1, 1);

        qgbLookFeel = new QGroupBox(LookConfig);
        qgbLookFeel->setObjectName(QString::fromUtf8("qgbLookFeel"));
        gridLayout = new QGridLayout(qgbLookFeel);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        qcbLanguage = new MUComboBox(qgbLookFeel);
        qcbLanguage->setObjectName(QString::fromUtf8("qcbLanguage"));

        gridLayout->addWidget(qcbLanguage, 3, 0, 1, 2);

        qliTheme = new QLabel(qgbLookFeel);
        qliTheme->setObjectName(QString::fromUtf8("qliTheme"));

        gridLayout->addWidget(qliTheme, 0, 0, 1, 1);

        qcbTheme = new MUComboBox(qgbLookFeel);
        qcbTheme->setObjectName(QString::fromUtf8("qcbTheme"));
        sizePolicy1.setHeightForWidth(qcbTheme->sizePolicy().hasHeightForWidth());
        qcbTheme->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(qcbTheme, 1, 0, 1, 2);

        qcbShowTransmitModeComboBox = new QCheckBox(qgbLookFeel);
        qcbShowTransmitModeComboBox->setObjectName(QString::fromUtf8("qcbShowTransmitModeComboBox"));

        gridLayout->addWidget(qcbShowTransmitModeComboBox, 5, 0, 1, 2);

        qcbHighContrast = new QCheckBox(qgbLookFeel);
        qcbHighContrast->setObjectName(QString::fromUtf8("qcbHighContrast"));

        gridLayout->addWidget(qcbHighContrast, 4, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 0, 1, 1);

        qliLanguage = new QLabel(qgbLookFeel);
        qliLanguage->setObjectName(QString::fromUtf8("qliLanguage"));

        gridLayout->addWidget(qliLanguage, 2, 0, 1, 1);

        qlThemesDirectory = new QLabel(qgbLookFeel);
        qlThemesDirectory->setObjectName(QString::fromUtf8("qlThemesDirectory"));
        qlThemesDirectory->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(qlThemesDirectory, 0, 1, 1, 1);


        gridLayout_4->addWidget(qgbLookFeel, 1, 0, 2, 1);

        qgbSearch = new QGroupBox(LookConfig);
        qgbSearch->setObjectName(QString::fromUtf8("qgbSearch"));
        gridLayout_6 = new QGridLayout(qgbSearch);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        qcbSearchUserAction = new QComboBox(qgbSearch);
        qcbSearchUserAction->setObjectName(QString::fromUtf8("qcbSearchUserAction"));
        sizePolicy2.setHeightForWidth(qcbSearchUserAction->sizePolicy().hasHeightForWidth());
        qcbSearchUserAction->setSizePolicy(sizePolicy2);

        gridLayout_6->addWidget(qcbSearchUserAction, 0, 1, 1, 1);

        qlSearchUserAction = new QLabel(qgbSearch);
        qlSearchUserAction->setObjectName(QString::fromUtf8("qlSearchUserAction"));

        gridLayout_6->addWidget(qlSearchUserAction, 0, 0, 1, 1);

        qcbSearchChannelAction = new QComboBox(qgbSearch);
        qcbSearchChannelAction->setObjectName(QString::fromUtf8("qcbSearchChannelAction"));
        sizePolicy2.setHeightForWidth(qcbSearchChannelAction->sizePolicy().hasHeightForWidth());
        qcbSearchChannelAction->setSizePolicy(sizePolicy2);

        gridLayout_6->addWidget(qcbSearchChannelAction, 1, 1, 1, 1);

        qlSearchChannelAction = new QLabel(qgbSearch);
        qlSearchChannelAction->setObjectName(QString::fromUtf8("qlSearchChannelAction"));

        gridLayout_6->addWidget(qlSearchChannelAction, 1, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_3, 2, 0, 1, 1);


        gridLayout_4->addWidget(qgbSearch, 3, 0, 1, 1);

#if QT_CONFIG(shortcut)
        qliLanguage->setBuddy(qcbLanguage);
#endif // QT_CONFIG(shortcut)

        retranslateUi(LookConfig);

        QMetaObject::connectSlotsByName(LookConfig);
    } // setupUi

    void retranslateUi(QWidget *LookConfig)
    {
        qgbChannel->setTitle(QCoreApplication::translate("LookConfig", "Channel Tree", nullptr));
        qcbFilterHidesEmptyChannels->setText(QCoreApplication::translate("LookConfig", "Filter automatically hides empty channels", nullptr));
#if QT_CONFIG(tooltip)
        qcbExpand->setToolTip(QCoreApplication::translate("LookConfig", "When to automatically expand channels", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qcbExpand->setWhatsThis(QCoreApplication::translate("LookConfig", "This sets which channels to automatically expand. <i>None</i> and <i>All</i> will expand no or all channels, while <i>Only with users</i> will expand and collapse channels as users join and leave them.", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        qcbUserDrag->setToolTip(QCoreApplication::translate("LookConfig", "This changes the behavior when moving users.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qcbUserDrag->setWhatsThis(QCoreApplication::translate("LookConfig", "This sets the behavior of user drags; it can be used to prevent accidental dragging. <i>Move</i> moves the user without prompting. <i>Do Nothing</i> does nothing and prints an error message. <i>Ask</i> uses a message box to confirm if you really wanted to move the user.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qliUserDrag->setText(QCoreApplication::translate("LookConfig", "User Dragging", nullptr));
        qliChannelDrag->setText(QCoreApplication::translate("LookConfig", "Channel Dragging", nullptr));
        qcbChatBarUseSelection->setText(QCoreApplication::translate("LookConfig", "Use selected item as the chat bar target", nullptr));
        qliExpand->setText(QCoreApplication::translate("LookConfig", "Expand", nullptr));
#if QT_CONFIG(tooltip)
        qcbShowUserCount->setToolTip(QCoreApplication::translate("LookConfig", "Show number of users in each channel", nullptr));
#endif // QT_CONFIG(tooltip)
        qcbShowUserCount->setText(QCoreApplication::translate("LookConfig", "Show channel user count", nullptr));
#if QT_CONFIG(tooltip)
        qcbChannelDrag->setToolTip(QCoreApplication::translate("LookConfig", "This changes the behavior when moving channels.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qcbChannelDrag->setWhatsThis(QCoreApplication::translate("LookConfig", "This sets the behavior of channel drags; it can be used to prevent accidental dragging. <i>Move</i> moves the channel without prompting. <i>Do Nothing</i> does nothing and prints an error message. <i>Ask</i> uses a message box to confirm if you really wanted to move the channel.", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        qcbUsersTop->setToolTip(QCoreApplication::translate("LookConfig", "List users above subchannels (requires restart).", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qcbUsersTop->setWhatsThis(QCoreApplication::translate("LookConfig", "<b>If set, users will be shown above subchannels in the channel view.</b><br />A restart of Mumble is required to see the change.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qcbUsersTop->setText(QCoreApplication::translate("LookConfig", "Users above Channels", nullptr));
#if QT_CONFIG(tooltip)
        qcbShowVolumeAdjustments->setToolTip(QCoreApplication::translate("LookConfig", "Show the local volume adjustment for each user (if any).", nullptr));
#endif // QT_CONFIG(tooltip)
        qcbShowVolumeAdjustments->setText(QCoreApplication::translate("LookConfig", "Show volume adjustments", nullptr));
#if QT_CONFIG(tooltip)
        qcbShowNicknamesOnly->setToolTip(QCoreApplication::translate("LookConfig", "Hide the username for each user if they have a nickname.", nullptr));
#endif // QT_CONFIG(tooltip)
        qcbShowNicknamesOnly->setText(QCoreApplication::translate("LookConfig", "Show nicknames only", nullptr));
        qgbLayout->setTitle(QCoreApplication::translate("LookConfig", "Layout", nullptr));
        qlLHybrid->setText(QString());
        qrbLHybrid->setText(QCoreApplication::translate("LookConfig", "Hybrid", nullptr));
        qrbLCustom->setText(QCoreApplication::translate("LookConfig", "Custom", nullptr));
        qlLCustom->setText(QString());
        qrbLStacked->setText(QCoreApplication::translate("LookConfig", "Stacked", nullptr));
        qrbLClassic->setText(QCoreApplication::translate("LookConfig", "Classic", nullptr));
        qlLStacked->setText(QString());
        qgbTray->setTitle(QCoreApplication::translate("LookConfig", "Tray Icon", nullptr));
#if QT_CONFIG(tooltip)
        qcbHideTray->setToolTip(QCoreApplication::translate("LookConfig", "Hide the main Mumble window in the tray when it is minimized.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qcbHideTray->setWhatsThis(QCoreApplication::translate("LookConfig", "<b>If set, minimizing the Mumble main window will cause it to be hidden and accessible only from the tray. Otherwise, it will be minimized as a window normally would.</b>", nullptr));
#endif // QT_CONFIG(whatsthis)
        qcbHideTray->setText(QCoreApplication::translate("LookConfig", "Hide in tray when minimized", nullptr));
#if QT_CONFIG(tooltip)
        qcbStateInTray->setToolTip(QCoreApplication::translate("LookConfig", "Displays talking status in system tray", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qcbStateInTray->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        qcbStateInTray->setText(QCoreApplication::translate("LookConfig", "Show talking status in tray icon", nullptr));
        qgbApplication->setTitle(QCoreApplication::translate("LookConfig", "Application", nullptr));
        qliAlwaysOnTop->setText(QCoreApplication::translate("LookConfig", "Always On Top", nullptr));
        qcbAlwaysOnTop->setItemText(0, QCoreApplication::translate("LookConfig", "Never", nullptr));
        qcbAlwaysOnTop->setItemText(1, QCoreApplication::translate("LookConfig", "Always", nullptr));
        qcbAlwaysOnTop->setItemText(2, QCoreApplication::translate("LookConfig", "In minimal view", nullptr));
        qcbAlwaysOnTop->setItemText(3, QCoreApplication::translate("LookConfig", "In normal view", nullptr));

#if QT_CONFIG(tooltip)
        qcbAlwaysOnTop->setToolTip(QCoreApplication::translate("LookConfig", "This setting controls when the application will be always on top.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qcbAlwaysOnTop->setWhatsThis(QCoreApplication::translate("LookConfig", "This setting controls in which situations the application will stay always on top. If you select <i>Never</i> the application will not stay on top. <i>Always</i> will always keep the application on top. <i>In minimal view</i> / <i>In normal view</i> will only keep the application always on top when minimal view is activated / deactivated.", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        qcbShowContextMenuInMenuBar->setToolTip(QCoreApplication::translate("LookConfig", "Adds user and channel context menus into the menu bar", nullptr));
#endif // QT_CONFIG(tooltip)
        qcbShowContextMenuInMenuBar->setText(QCoreApplication::translate("LookConfig", "Show context menu in menu bar", nullptr));
        qliQuitBehavior->setText(QCoreApplication::translate("LookConfig", "Quit Behavior", nullptr));
        qcbQuitBehavior->setItemText(0, QCoreApplication::translate("LookConfig", "Always Ask", nullptr));
        qcbQuitBehavior->setItemText(1, QCoreApplication::translate("LookConfig", "Ask when connected", nullptr));
        qcbQuitBehavior->setItemText(2, QCoreApplication::translate("LookConfig", "Always Minimize", nullptr));
        qcbQuitBehavior->setItemText(3, QCoreApplication::translate("LookConfig", "Minimize when connected", nullptr));
        qcbQuitBehavior->setItemText(4, QCoreApplication::translate("LookConfig", "Always Quit", nullptr));

#if QT_CONFIG(tooltip)
        qcbQuitBehavior->setToolTip(QCoreApplication::translate("LookConfig", "This setting controls the behavior of clicking on the X in the top right corner.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qcbQuitBehavior->setWhatsThis(QCoreApplication::translate("LookConfig", "This setting controls the behavior when closing Mumble. You can choose between being asked for confirmation, minimize instead if closing or just closing without any additional prompt. Optionally, the first two options can only apply when you are currently connected to a server (in that case, Mumble will quit without asking, when not connected to any server).", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        qcbEnableDeveloperMenu->setWhatsThis(QCoreApplication::translate("LookConfig", "<b>Enable Developer menu</b><br />This enables the \"Developer\"-menu in Mumble. This menu is used for developer-specific features, such as the Developer Console.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qcbEnableDeveloperMenu->setText(QCoreApplication::translate("LookConfig", "Enable Developer menu", nullptr));
#if QT_CONFIG(whatsthis)
        qcbLockLayout->setWhatsThis(QCoreApplication::translate("LookConfig", "When in custom layout mode, checking this disables rearranging.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qcbLockLayout->setText(QCoreApplication::translate("LookConfig", "Lock layout", nullptr));
        qgbChannelHierarchyString->setTitle(QCoreApplication::translate("LookConfig", "Channel Hierarchy String", nullptr));
#if QT_CONFIG(tooltip)
        qlChannelSeparator->setToolTip(QCoreApplication::translate("LookConfig", "String to separate a channel name from its parent's.", nullptr));
#endif // QT_CONFIG(tooltip)
        qlChannelSeparator->setText(QCoreApplication::translate("LookConfig", "Channel separator", nullptr));
#if QT_CONFIG(tooltip)
        qleChannelSeparator->setToolTip(QCoreApplication::translate("LookConfig", "String to separate a channel name from its parent's.", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("LookConfig", "Talking UI", nullptr));
#if QT_CONFIG(tooltip)
        qlPostfixCharCount->setToolTip(QCoreApplication::translate("LookConfig", "How many characters from the original name to display at the end of an abbreviated name.", nullptr));
#endif // QT_CONFIG(tooltip)
        qlPostfixCharCount->setText(QCoreApplication::translate("LookConfig", "Abbreviated postfix characters", nullptr));
#if QT_CONFIG(tooltip)
        qsbMaxNameLength->setToolTip(QCoreApplication::translate("LookConfig", "The preferred maximum length of a channel (hierarchy) name in the Talking UI. Note that this is not a hard limit though.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        qleAbbreviationReplacement->setToolTip(QCoreApplication::translate("LookConfig", "String that gets used instead of the cut-out part of an abbreviated name.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        qsbPostfixCharCount->setToolTip(QCoreApplication::translate("LookConfig", "How many characters from the original name to display at the end of an abbreviated name.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        qsbRelFontSize->setToolTip(QCoreApplication::translate("LookConfig", "Relative font size to use in the Talking UI in percent.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        qlMaxNameLength->setToolTip(QCoreApplication::translate("LookConfig", "The preferred maximum length of a channel (hierarchy) name in the Talking UI. Note that this is not a hard limit though.", nullptr));
#endif // QT_CONFIG(tooltip)
        qlMaxNameLength->setText(QCoreApplication::translate("LookConfig", "Max. channel name length", nullptr));
#if QT_CONFIG(tooltip)
        qsbSilentUserLifetime->setToolTip(QCoreApplication::translate("LookConfig", "A user that is silent for the given amount of seconds will be removed from the Talkin UI.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        qcbAbbreviateCurrentChannel->setToolTip(QCoreApplication::translate("LookConfig", "Whether to also allow abbreviating the current channel of a user (instead of only its parent channels).", nullptr));
#endif // QT_CONFIG(tooltip)
        qcbAbbreviateCurrentChannel->setText(QCoreApplication::translate("LookConfig", "Abbreviate current channel name", nullptr));
#if QT_CONFIG(tooltip)
        qlSilentUserLifetime->setToolTip(QCoreApplication::translate("LookConfig", "A user that is silent for the given amount of seconds will be removed from the Talkin UI.", nullptr));
#endif // QT_CONFIG(tooltip)
        qlSilentUserLifetime->setText(QCoreApplication::translate("LookConfig", "Remove silent user after", nullptr));
#if QT_CONFIG(tooltip)
        qcbAbbreviateChannelNames->setToolTip(QCoreApplication::translate("LookConfig", "Whether the channel (hierarchy) name should be abbreviated, if it exceeds the specified maximum length.", nullptr));
#endif // QT_CONFIG(tooltip)
        qcbAbbreviateChannelNames->setText(QCoreApplication::translate("LookConfig", "Abbreviate channel names", nullptr));
#if QT_CONFIG(tooltip)
        qsbChannelHierarchyDepth->setToolTip(QCoreApplication::translate("LookConfig", "The names of how many parent channels should be included in the channel's name when displaying it in the TalkingUI?", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        qcbShowLocalListeners->setToolTip(QCoreApplication::translate("LookConfig", "Whether to show all of the local user's listeners (ears) in the TalkingUI (and thereby also the channels they are in). ", nullptr));
#endif // QT_CONFIG(tooltip)
        qcbShowLocalListeners->setText(QCoreApplication::translate("LookConfig", "Show local user's listeners (ears)", nullptr));
#if QT_CONFIG(tooltip)
        qlAbbreviationReplacement->setToolTip(QCoreApplication::translate("LookConfig", "String that gets used instead of the cut-out part of an abbreviated name.", nullptr));
#endif // QT_CONFIG(tooltip)
        qlAbbreviationReplacement->setText(QCoreApplication::translate("LookConfig", "Abbreviation replacement", nullptr));
#if QT_CONFIG(tooltip)
        qlPrefixCharCount->setToolTip(QCoreApplication::translate("LookConfig", "How many characters from the original name to display at the beginning of an abbreviated name.", nullptr));
#endif // QT_CONFIG(tooltip)
        qlPrefixCharCount->setText(QCoreApplication::translate("LookConfig", "Abbreviated prefix characters", nullptr));
#if QT_CONFIG(tooltip)
        qcbLocalUserVisible->setToolTip(QCoreApplication::translate("LookConfig", "If this is checked, the local user (yourself) will always be visible in the TalkingUI (regardless of talking state).", nullptr));
#endif // QT_CONFIG(tooltip)
        qcbLocalUserVisible->setText(QCoreApplication::translate("LookConfig", "Always keep local user visible", nullptr));
#if QT_CONFIG(tooltip)
        qsbPrefixCharCount->setToolTip(QCoreApplication::translate("LookConfig", "How many characters from the original name to display at the beginning of an abbreviated name.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        qlRelFontSize->setToolTip(QCoreApplication::translate("LookConfig", "Relative font size to use in the Talking UI in percent.", nullptr));
#endif // QT_CONFIG(tooltip)
        qlRelFontSize->setText(QCoreApplication::translate("LookConfig", "Rel. font size (%)", nullptr));
#if QT_CONFIG(tooltip)
        qlChannelHierarchyDepth->setToolTip(QCoreApplication::translate("LookConfig", "The names of how many parent channels should be included in the channel's name when displaying it in the TalkingUI?", nullptr));
#endif // QT_CONFIG(tooltip)
        qlChannelHierarchyDepth->setText(QCoreApplication::translate("LookConfig", "Channel hierarchy depth", nullptr));
        qgbLookFeel->setTitle(QCoreApplication::translate("LookConfig", "Look and Feel", nullptr));
#if QT_CONFIG(tooltip)
        qcbLanguage->setToolTip(QCoreApplication::translate("LookConfig", "Language to use (requires restart)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qcbLanguage->setWhatsThis(QCoreApplication::translate("LookConfig", "<b>This sets which language Mumble should use.</b><br />You have to restart Mumble to use the new language.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qliTheme->setText(QCoreApplication::translate("LookConfig", "Theme", nullptr));
#if QT_CONFIG(tooltip)
        qcbTheme->setToolTip(QCoreApplication::translate("LookConfig", "Theme to use to style the user interface", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qcbTheme->setWhatsThis(QCoreApplication::translate("LookConfig", "<b>Configures which theme the Mumble user interface should be styled with</b><br />Mumble will pick up themes from certain directories and display them in this list. The one you select will be used to customize the visual appearance of Mumble. This includes colors, icons and more.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qcbShowTransmitModeComboBox->setText(QCoreApplication::translate("LookConfig", "Show transmit mode dropdown in toolbar", nullptr));
#if QT_CONFIG(tooltip)
        qcbHighContrast->setToolTip(QCoreApplication::translate("LookConfig", "Apply some high contrast optimizations for visually impaired users", nullptr));
#endif // QT_CONFIG(tooltip)
        qcbHighContrast->setText(QCoreApplication::translate("LookConfig", "Optimize for high contrast", nullptr));
        qliLanguage->setText(QCoreApplication::translate("LookConfig", "Language", nullptr));
        qlThemesDirectory->setText(QString());
        qgbSearch->setTitle(QCoreApplication::translate("LookConfig", "Search", nullptr));
#if QT_CONFIG(tooltip)
        qcbSearchUserAction->setToolTip(QCoreApplication::translate("LookConfig", "The action to perform when a user is activated (via double-click or enter) in the search dialog.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        qlSearchUserAction->setToolTip(QCoreApplication::translate("LookConfig", "The action to perform when a user is activated (via double-click or enter) in the search dialog.", nullptr));
#endif // QT_CONFIG(tooltip)
        qlSearchUserAction->setText(QCoreApplication::translate("LookConfig", "Action (User):", nullptr));
#if QT_CONFIG(tooltip)
        qcbSearchChannelAction->setToolTip(QCoreApplication::translate("LookConfig", "The action to perform when a channel is activated (via double-click or enter) in the search dialog.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        qlSearchChannelAction->setToolTip(QCoreApplication::translate("LookConfig", "The action to perform when a channel is activated (via double-click or enter) in the search dialog.", nullptr));
#endif // QT_CONFIG(tooltip)
        qlSearchChannelAction->setText(QCoreApplication::translate("LookConfig", "Action (Channel):", nullptr));
        (void)LookConfig;
    } // retranslateUi

};

namespace Ui {
    class LookConfig: public Ui_LookConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOOKCONFIG_H
