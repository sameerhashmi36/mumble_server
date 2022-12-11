/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "CustomElements.h"
#include "UserView.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *qaQuit;
    QAction *qaHide;
    QAction *qaServerConnect;
    QAction *qaServerDisconnect;
    QAction *qaServerBanList;
    QAction *qaServerInformation;
    QAction *qaUserKick;
    QAction *qaUserMute;
    QAction *qaUserBan;
    QAction *qaUserDeaf;
    QAction *qaUserLocalIgnore;
    QAction *qaUserLocalMute;
    QAction *qaUserTextMessage;
    QAction *qaUserLocalNickname;
    QAction *qaChannelAdd;
    QAction *qaChannelRemove;
    QAction *qaChannelACL;
    QAction *qaChannelLink;
    QAction *qaChannelUnlink;
    QAction *qaChannelUnlinkAll;
    QAction *qaAudioReset;
    QAction *qaAudioMute;
    QAction *qaAudioDeaf;
    QAction *qaAudioTTS;
    QAction *qaAudioStats;
    QAction *qaAudioUnlink;
    QAction *qaConfigDialog;
    QAction *qaFilterToggle;
    QAction *qaAudioWizard;
    QAction *qaDeveloperConsole;
    QAction *qaPositionalAudioViewer;
    QAction *qaHelpWhatsThis;
    QAction *qaHelpAbout;
    QAction *qaHelpAboutSpeex;
    QAction *qaHelpAboutQt;
    QAction *qaHelpVersionCheck;
    QAction *qaChannelSendMessage;
    QAction *qaChannelCopyURL;
    QAction *qaConfigMinimal;
    QAction *qaConfigHideFrame;
    QAction *qaConfigCert;
    QAction *qaUserRegister;
    QAction *qaUserFriendAdd;
    QAction *qaUserFriendRemove;
    QAction *qaUserFriendUpdate;
    QAction *qaServerUserList;
    QAction *qaServerTexture;
    QAction *qaServerTokens;
    QAction *qaServerTextureRemove;
    QAction *qaUserCommentReset;
    QAction *qaUserTextureReset;
    QAction *qaChannelJoin;
    QAction *qaChannelFilter;
    QAction *qaUserCommentView;
    QAction *qaUserInformation;
    QAction *qaSelfComment;
    QAction *qaSelfRegister;
    QAction *qaUserPrioritySpeaker;
    QAction *qaSelfPrioritySpeaker;
    QAction *qaRecording;
    QAction *qaShow;
    QAction *qaChannelListen;
    QAction *qaTalkingUIToggle;
    QAction *qaUserJoin;
    QAction *qaUserLocalIgnoreTTS;
    QAction *qaSearch;
    UserView *qtvUsers;
    QMenuBar *menubar;
    QMenu *qmConfig;
    QMenu *qmHelp;
    QMenu *qmServer;
    QMenu *qmSelf;
    QDockWidget *qdwLog;
    LogTextBrowser *qteLog;
    QDockWidget *qdwChat;
    ChatbarTextEdit *qteChat;
    QToolBar *qtIconToolbar;
    QDockWidget *qdwMinimalViewNote;
    QWidget *dockWidgetContents;
    QHBoxLayout *horizontalLayout;
    QLabel *label;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(735, 435);
        MainWindow->setDockOptions(QMainWindow::AllowNestedDocks|QMainWindow::AnimatedDocks);
        MainWindow->setUnifiedTitleAndToolBarOnMac(true);
        qaQuit = new QAction(MainWindow);
        qaQuit->setObjectName(QString::fromUtf8("qaQuit"));
        qaHide = new QAction(MainWindow);
        qaHide->setObjectName(QString::fromUtf8("qaHide"));
        qaServerConnect = new QAction(MainWindow);
        qaServerConnect->setObjectName(QString::fromUtf8("qaServerConnect"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("skin:categories/applications-internet.svg"), QSize(), QIcon::Normal, QIcon::Off);
        qaServerConnect->setIcon(icon);
        qaServerConnect->setIconVisibleInMenu(true);
        qaServerDisconnect = new QAction(MainWindow);
        qaServerDisconnect->setObjectName(QString::fromUtf8("qaServerDisconnect"));
        qaServerDisconnect->setEnabled(false);
        qaServerBanList = new QAction(MainWindow);
        qaServerBanList->setObjectName(QString::fromUtf8("qaServerBanList"));
        qaServerBanList->setEnabled(false);
        qaServerInformation = new QAction(MainWindow);
        qaServerInformation->setObjectName(QString::fromUtf8("qaServerInformation"));
        qaServerInformation->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("skin:Information_icon.svg"), QSize(), QIcon::Normal, QIcon::Off);
        qaServerInformation->setIcon(icon1);
        qaServerInformation->setIconVisibleInMenu(true);
        qaUserKick = new QAction(MainWindow);
        qaUserKick->setObjectName(QString::fromUtf8("qaUserKick"));
        qaUserMute = new QAction(MainWindow);
        qaUserMute->setObjectName(QString::fromUtf8("qaUserMute"));
        qaUserMute->setCheckable(true);
        qaUserBan = new QAction(MainWindow);
        qaUserBan->setObjectName(QString::fromUtf8("qaUserBan"));
        qaUserDeaf = new QAction(MainWindow);
        qaUserDeaf->setObjectName(QString::fromUtf8("qaUserDeaf"));
        qaUserDeaf->setCheckable(true);
        qaUserLocalIgnore = new QAction(MainWindow);
        qaUserLocalIgnore->setObjectName(QString::fromUtf8("qaUserLocalIgnore"));
        qaUserLocalIgnore->setCheckable(true);
        qaUserLocalMute = new QAction(MainWindow);
        qaUserLocalMute->setObjectName(QString::fromUtf8("qaUserLocalMute"));
        qaUserLocalMute->setCheckable(true);
        qaUserTextMessage = new QAction(MainWindow);
        qaUserTextMessage->setObjectName(QString::fromUtf8("qaUserTextMessage"));
        qaUserLocalNickname = new QAction(MainWindow);
        qaUserLocalNickname->setObjectName(QString::fromUtf8("qaUserLocalNickname"));
        qaChannelAdd = new QAction(MainWindow);
        qaChannelAdd->setObjectName(QString::fromUtf8("qaChannelAdd"));
        qaChannelRemove = new QAction(MainWindow);
        qaChannelRemove->setObjectName(QString::fromUtf8("qaChannelRemove"));
        qaChannelACL = new QAction(MainWindow);
        qaChannelACL->setObjectName(QString::fromUtf8("qaChannelACL"));
        qaChannelLink = new QAction(MainWindow);
        qaChannelLink->setObjectName(QString::fromUtf8("qaChannelLink"));
        qaChannelUnlink = new QAction(MainWindow);
        qaChannelUnlink->setObjectName(QString::fromUtf8("qaChannelUnlink"));
        qaChannelUnlinkAll = new QAction(MainWindow);
        qaChannelUnlinkAll->setObjectName(QString::fromUtf8("qaChannelUnlinkAll"));
        qaAudioReset = new QAction(MainWindow);
        qaAudioReset->setObjectName(QString::fromUtf8("qaAudioReset"));
        qaAudioMute = new QAction(MainWindow);
        qaAudioMute->setObjectName(QString::fromUtf8("qaAudioMute"));
        qaAudioMute->setCheckable(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("skin:actions/audio-input-microphone.svg"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QString::fromUtf8("skin:actions/audio-input-microphone-muted.svg"), QSize(), QIcon::Normal, QIcon::On);
        icon2.addFile(QString::fromUtf8("skin:actions/audio-input-microphone-muted.svg"), QSize(), QIcon::Active, QIcon::On);
        qaAudioMute->setIcon(icon2);
        qaAudioMute->setIconVisibleInMenu(false);
        qaAudioDeaf = new QAction(MainWindow);
        qaAudioDeaf->setObjectName(QString::fromUtf8("qaAudioDeaf"));
        qaAudioDeaf->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("skin:self_undeafened.svg"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QString::fromUtf8("skin:deafened_self.svg"), QSize(), QIcon::Normal, QIcon::On);
        icon3.addFile(QString::fromUtf8("skin:deafened_self.svg"), QSize(), QIcon::Active, QIcon::On);
        qaAudioDeaf->setIcon(icon3);
        qaAudioDeaf->setIconVisibleInMenu(false);
        qaAudioTTS = new QAction(MainWindow);
        qaAudioTTS->setObjectName(QString::fromUtf8("qaAudioTTS"));
        qaAudioTTS->setCheckable(true);
        qaAudioStats = new QAction(MainWindow);
        qaAudioStats->setObjectName(QString::fromUtf8("qaAudioStats"));
        qaAudioUnlink = new QAction(MainWindow);
        qaAudioUnlink->setObjectName(QString::fromUtf8("qaAudioUnlink"));
        qaConfigDialog = new QAction(MainWindow);
        qaConfigDialog->setObjectName(QString::fromUtf8("qaConfigDialog"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("skin:config_basic.png"), QSize(), QIcon::Normal, QIcon::Off);
        qaConfigDialog->setIcon(icon4);
        qaConfigDialog->setMenuRole(QAction::PreferencesRole);
        qaConfigDialog->setIconVisibleInMenu(true);
        qaFilterToggle = new QAction(MainWindow);
        qaFilterToggle->setObjectName(QString::fromUtf8("qaFilterToggle"));
        qaFilterToggle->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("skin:filter_off.svg"), QSize(), QIcon::Normal, QIcon::Off);
        icon5.addFile(QString::fromUtf8("skin:filter_on.svg"), QSize(), QIcon::Normal, QIcon::On);
        icon5.addFile(QString::fromUtf8("skin:filter_on.svg"), QSize(), QIcon::Active, QIcon::On);
        qaFilterToggle->setIcon(icon5);
        qaFilterToggle->setIconVisibleInMenu(false);
        qaAudioWizard = new QAction(MainWindow);
        qaAudioWizard->setObjectName(QString::fromUtf8("qaAudioWizard"));
        qaDeveloperConsole = new QAction(MainWindow);
        qaDeveloperConsole->setObjectName(QString::fromUtf8("qaDeveloperConsole"));
        qaPositionalAudioViewer = new QAction(MainWindow);
        qaPositionalAudioViewer->setObjectName(QString::fromUtf8("qaPositionalAudioViewer"));
        qaHelpWhatsThis = new QAction(MainWindow);
        qaHelpWhatsThis->setObjectName(QString::fromUtf8("qaHelpWhatsThis"));
        qaHelpAbout = new QAction(MainWindow);
        qaHelpAbout->setObjectName(QString::fromUtf8("qaHelpAbout"));
        qaHelpAbout->setMenuRole(QAction::AboutRole);
        qaHelpAboutSpeex = new QAction(MainWindow);
        qaHelpAboutSpeex->setObjectName(QString::fromUtf8("qaHelpAboutSpeex"));
        qaHelpAboutSpeex->setMenuRole(QAction::ApplicationSpecificRole);
        qaHelpAboutQt = new QAction(MainWindow);
        qaHelpAboutQt->setObjectName(QString::fromUtf8("qaHelpAboutQt"));
        qaHelpAboutQt->setMenuRole(QAction::AboutQtRole);
        qaHelpVersionCheck = new QAction(MainWindow);
        qaHelpVersionCheck->setObjectName(QString::fromUtf8("qaHelpVersionCheck"));
        qaChannelSendMessage = new QAction(MainWindow);
        qaChannelSendMessage->setObjectName(QString::fromUtf8("qaChannelSendMessage"));
        qaChannelCopyURL = new QAction(MainWindow);
        qaChannelCopyURL->setObjectName(QString::fromUtf8("qaChannelCopyURL"));
        qaConfigMinimal = new QAction(MainWindow);
        qaConfigMinimal->setObjectName(QString::fromUtf8("qaConfigMinimal"));
        qaConfigMinimal->setCheckable(true);
        qaConfigHideFrame = new QAction(MainWindow);
        qaConfigHideFrame->setObjectName(QString::fromUtf8("qaConfigHideFrame"));
        qaConfigHideFrame->setCheckable(true);
        qaConfigCert = new QAction(MainWindow);
        qaConfigCert->setObjectName(QString::fromUtf8("qaConfigCert"));
        qaUserRegister = new QAction(MainWindow);
        qaUserRegister->setObjectName(QString::fromUtf8("qaUserRegister"));
        qaUserFriendAdd = new QAction(MainWindow);
        qaUserFriendAdd->setObjectName(QString::fromUtf8("qaUserFriendAdd"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("skin:emblems/emblem-favorite.svg"), QSize(), QIcon::Normal, QIcon::Off);
        qaUserFriendAdd->setIcon(icon6);
        qaUserFriendAdd->setIconVisibleInMenu(true);
        qaUserFriendRemove = new QAction(MainWindow);
        qaUserFriendRemove->setObjectName(QString::fromUtf8("qaUserFriendRemove"));
        qaUserFriendUpdate = new QAction(MainWindow);
        qaUserFriendUpdate->setObjectName(QString::fromUtf8("qaUserFriendUpdate"));
        qaServerUserList = new QAction(MainWindow);
        qaServerUserList->setObjectName(QString::fromUtf8("qaServerUserList"));
        qaServerTexture = new QAction(MainWindow);
        qaServerTexture->setObjectName(QString::fromUtf8("qaServerTexture"));
        qaServerTokens = new QAction(MainWindow);
        qaServerTokens->setObjectName(QString::fromUtf8("qaServerTokens"));
        qaServerTextureRemove = new QAction(MainWindow);
        qaServerTextureRemove->setObjectName(QString::fromUtf8("qaServerTextureRemove"));
        qaUserCommentReset = new QAction(MainWindow);
        qaUserCommentReset->setObjectName(QString::fromUtf8("qaUserCommentReset"));
        qaUserTextureReset = new QAction(MainWindow);
        qaUserTextureReset->setObjectName(QString::fromUtf8("qaUserTextureReset"));
        qaChannelJoin = new QAction(MainWindow);
        qaChannelJoin->setObjectName(QString::fromUtf8("qaChannelJoin"));
        qaChannelFilter = new QAction(MainWindow);
        qaChannelFilter->setObjectName(QString::fromUtf8("qaChannelFilter"));
        qaChannelFilter->setCheckable(true);
        qaUserCommentView = new QAction(MainWindow);
        qaUserCommentView->setObjectName(QString::fromUtf8("qaUserCommentView"));
        qaUserInformation = new QAction(MainWindow);
        qaUserInformation->setObjectName(QString::fromUtf8("qaUserInformation"));
        qaUserInformation->setIcon(icon1);
        qaUserInformation->setIconVisibleInMenu(true);
        qaSelfComment = new QAction(MainWindow);
        qaSelfComment->setObjectName(QString::fromUtf8("qaSelfComment"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("skin:self_comment.svg"), QSize(), QIcon::Normal, QIcon::Off);
        qaSelfComment->setIcon(icon7);
        qaSelfComment->setIconVisibleInMenu(true);
        qaSelfRegister = new QAction(MainWindow);
        qaSelfRegister->setObjectName(QString::fromUtf8("qaSelfRegister"));
        qaUserPrioritySpeaker = new QAction(MainWindow);
        qaUserPrioritySpeaker->setObjectName(QString::fromUtf8("qaUserPrioritySpeaker"));
        qaUserPrioritySpeaker->setCheckable(true);
        qaSelfPrioritySpeaker = new QAction(MainWindow);
        qaSelfPrioritySpeaker->setObjectName(QString::fromUtf8("qaSelfPrioritySpeaker"));
        qaSelfPrioritySpeaker->setCheckable(true);
        qaRecording = new QAction(MainWindow);
        qaRecording->setObjectName(QString::fromUtf8("qaRecording"));
        qaRecording->setEnabled(false);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("skin:actions/media-record.svg"), QSize(), QIcon::Normal, QIcon::Off);
        qaRecording->setIcon(icon8);
        qaRecording->setIconVisibleInMenu(true);
        qaShow = new QAction(MainWindow);
        qaShow->setObjectName(QString::fromUtf8("qaShow"));
        qaChannelListen = new QAction(MainWindow);
        qaChannelListen->setObjectName(QString::fromUtf8("qaChannelListen"));
        qaChannelListen->setCheckable(true);
        qaTalkingUIToggle = new QAction(MainWindow);
        qaTalkingUIToggle->setObjectName(QString::fromUtf8("qaTalkingUIToggle"));
        qaTalkingUIToggle->setCheckable(true);
        qaUserJoin = new QAction(MainWindow);
        qaUserJoin->setObjectName(QString::fromUtf8("qaUserJoin"));
        qaUserLocalIgnoreTTS = new QAction(MainWindow);
        qaUserLocalIgnoreTTS->setObjectName(QString::fromUtf8("qaUserLocalIgnoreTTS"));
        qaUserLocalIgnoreTTS->setCheckable(true);
        qaSearch = new QAction(MainWindow);
        qaSearch->setObjectName(QString::fromUtf8("qaSearch"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8("skin:magnifier.svg"), QSize(), QIcon::Normal, QIcon::Off);
        qaSearch->setIcon(icon9);
        qtvUsers = new UserView(MainWindow);
        qtvUsers->setObjectName(QString::fromUtf8("qtvUsers"));
        qtvUsers->setContextMenuPolicy(Qt::CustomContextMenu);
        qtvUsers->setAcceptDrops(true);
        qtvUsers->setDragEnabled(true);
        qtvUsers->setRootIsDecorated(false);
        qtvUsers->setUniformRowHeights(true);
        qtvUsers->setHeaderHidden(true);
        MainWindow->setCentralWidget(qtvUsers);
        qtvUsers->header()->setVisible(false);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 735, 32));
        qmConfig = new QMenu(menubar);
        qmConfig->setObjectName(QString::fromUtf8("qmConfig"));
        qmHelp = new QMenu(menubar);
        qmHelp->setObjectName(QString::fromUtf8("qmHelp"));
        qmServer = new QMenu(menubar);
        qmServer->setObjectName(QString::fromUtf8("qmServer"));
        qmSelf = new QMenu(menubar);
        qmSelf->setObjectName(QString::fromUtf8("qmSelf"));
        MainWindow->setMenuBar(menubar);
        qdwLog = new QDockWidget(MainWindow);
        qdwLog->setObjectName(QString::fromUtf8("qdwLog"));
        qdwLog->setMinimumSize(QSize(250, 121));
        qdwLog->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetMovable);
        qteLog = new LogTextBrowser();
        qteLog->setObjectName(QString::fromUtf8("qteLog"));
        qteLog->setContextMenuPolicy(Qt::CustomContextMenu);
        qteLog->setOpenLinks(false);
        qdwLog->setWidget(qteLog);
        MainWindow->addDockWidget(Qt::LeftDockWidgetArea, qdwLog);
        qdwChat = new QDockWidget(MainWindow);
        qdwChat->setObjectName(QString::fromUtf8("qdwChat"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qdwChat->sizePolicy().hasHeightForWidth());
        qdwChat->setSizePolicy(sizePolicy);
        qdwChat->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetMovable);
        qteChat = new ChatbarTextEdit();
        qteChat->setObjectName(QString::fromUtf8("qteChat"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(qteChat->sizePolicy().hasHeightForWidth());
        qteChat->setSizePolicy(sizePolicy1);
        qteChat->setMaximumSize(QSize(16777215, 16777215));
        qteChat->setAcceptRichText(false);
        qdwChat->setWidget(qteChat);
        MainWindow->addDockWidget(Qt::LeftDockWidgetArea, qdwChat);
        qtIconToolbar = new QToolBar(MainWindow);
        qtIconToolbar->setObjectName(QString::fromUtf8("qtIconToolbar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, qtIconToolbar);
        qdwMinimalViewNote = new QDockWidget(MainWindow);
        qdwMinimalViewNote->setObjectName(QString::fromUtf8("qdwMinimalViewNote"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(qdwMinimalViewNote->sizePolicy().hasHeightForWidth());
        qdwMinimalViewNote->setSizePolicy(sizePolicy2);
        qdwMinimalViewNote->setFloating(false);
        qdwMinimalViewNote->setFeatures(QDockWidget::NoDockWidgetFeatures);
        qdwMinimalViewNote->setAllowedAreas(Qt::AllDockWidgetAreas);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        horizontalLayout = new QHBoxLayout(dockWidgetContents);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, 0);
        label = new QLabel(dockWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setWordWrap(true);

        horizontalLayout->addWidget(label);

        qdwMinimalViewNote->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(Qt::TopDockWidgetArea, qdwMinimalViewNote);

        menubar->addAction(qmServer->menuAction());
        menubar->addAction(qmSelf->menuAction());
        menubar->addAction(qmConfig->menuAction());
        menubar->addAction(qmHelp->menuAction());
        qmConfig->addAction(qaConfigDialog);
        qmHelp->addAction(qaHelpWhatsThis);
        qmHelp->addSeparator();
        qmHelp->addAction(qaHelpAbout);
        qmHelp->addAction(qaHelpAboutQt);
        qmHelp->addSeparator();
        qmHelp->addAction(qaHelpVersionCheck);
        qmSelf->addAction(qaAudioMute);
        qmSelf->addAction(qaAudioDeaf);
        qmSelf->addAction(qaSelfPrioritySpeaker);
        qmSelf->addSeparator();
        qmSelf->addAction(qaRecording);
        qmSelf->addSeparator();
        qmSelf->addAction(qaSelfComment);
        qmSelf->addAction(qaServerTexture);
        qmSelf->addAction(qaServerTextureRemove);
        qmSelf->addSeparator();
        qmSelf->addAction(qaSelfRegister);
        qmSelf->addAction(qaAudioStats);
        qtIconToolbar->addAction(qaServerConnect);
        qtIconToolbar->addAction(qaServerInformation);
        qtIconToolbar->addSeparator();
        qtIconToolbar->addAction(qaAudioMute);
        qtIconToolbar->addAction(qaAudioDeaf);
        qtIconToolbar->addAction(qaRecording);
        qtIconToolbar->addSeparator();
        qtIconToolbar->addAction(qaSelfComment);
        qtIconToolbar->addSeparator();
        qtIconToolbar->addAction(qaConfigDialog);
        qtIconToolbar->addSeparator();
        qtIconToolbar->addAction(qaFilterToggle);
        qtIconToolbar->addSeparator();
        qtIconToolbar->addAction(qaSearch);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Mumble", nullptr));
        qaQuit->setText(QCoreApplication::translate("MainWindow", "&Quit Mumble", nullptr));
#if QT_CONFIG(tooltip)
        qaQuit->setToolTip(QCoreApplication::translate("MainWindow", "Closes the program", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qaQuit->setWhatsThis(QCoreApplication::translate("MainWindow", "Exits the application.", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(shortcut)
        qaQuit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        qaHide->setText(QCoreApplication::translate("MainWindow", "&Hide Mumble", nullptr));
#if QT_CONFIG(tooltip)
        qaHide->setToolTip(QCoreApplication::translate("MainWindow", "Hides the main Mumble window.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qaHide->setWhatsThis(QCoreApplication::translate("MainWindow", "Hides the main Mumble window. Restore by clicking on the tray icon or starting Mumble again.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qaServerConnect->setText(QCoreApplication::translate("MainWindow", "&Connect...", nullptr));
#if QT_CONFIG(tooltip)
        qaServerConnect->setToolTip(QCoreApplication::translate("MainWindow", "Open the server connection dialog", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qaServerConnect->setWhatsThis(QCoreApplication::translate("MainWindow", "Shows a dialog of registered servers, and also allows quick-connect.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qaServerDisconnect->setText(QCoreApplication::translate("MainWindow", "&Disconnect", nullptr));
#if QT_CONFIG(tooltip)
        qaServerDisconnect->setToolTip(QCoreApplication::translate("MainWindow", "Disconnect from server", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qaServerDisconnect->setWhatsThis(QCoreApplication::translate("MainWindow", "Disconnects you from the server.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qaServerBanList->setText(QCoreApplication::translate("MainWindow", "&Ban list...", nullptr));
#if QT_CONFIG(tooltip)
        qaServerBanList->setToolTip(QCoreApplication::translate("MainWindow", "Edit ban list on server", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qaServerBanList->setWhatsThis(QCoreApplication::translate("MainWindow", "This lets you edit the server-side IP ban list.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qaServerInformation->setText(QCoreApplication::translate("MainWindow", "&Information...", nullptr));
#if QT_CONFIG(tooltip)
        qaServerInformation->setToolTip(QCoreApplication::translate("MainWindow", "Show information about the server connection", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qaServerInformation->setWhatsThis(QCoreApplication::translate("MainWindow", "This will show extended information about the connection to the server.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qaUserKick->setText(QCoreApplication::translate("MainWindow", "&Kick...", nullptr));
#if QT_CONFIG(tooltip)
        qaUserKick->setToolTip(QCoreApplication::translate("MainWindow", "Kick user (with reason)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qaUserKick->setWhatsThis(QCoreApplication::translate("MainWindow", "Kick selected user off server. You'll be asked to specify a reason.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qaUserMute->setText(QCoreApplication::translate("MainWindow", "&Mute", nullptr));
#if QT_CONFIG(tooltip)
        qaUserMute->setToolTip(QCoreApplication::translate("MainWindow", "Mute user", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qaUserMute->setWhatsThis(QCoreApplication::translate("MainWindow", "Mute or unmute user on server. Unmuting a deafened user will also undeafen them.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qaUserBan->setText(QCoreApplication::translate("MainWindow", "&Ban...", nullptr));
#if QT_CONFIG(tooltip)
        qaUserBan->setToolTip(QCoreApplication::translate("MainWindow", "Kick and ban user (with reason)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qaUserBan->setWhatsThis(QCoreApplication::translate("MainWindow", "Kick and ban selected user from server. You'll be asked to specify a reason.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qaUserDeaf->setText(QCoreApplication::translate("MainWindow", "&Deafen", nullptr));
#if QT_CONFIG(tooltip)
        qaUserDeaf->setToolTip(QCoreApplication::translate("MainWindow", "Deafen user", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qaUserDeaf->setWhatsThis(QCoreApplication::translate("MainWindow", "Deafen or undeafen user on server. Deafening a user will also mute them.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qaUserLocalIgnore->setText(QCoreApplication::translate("MainWindow", "Ignore Messages", nullptr));
#if QT_CONFIG(tooltip)
        qaUserLocalIgnore->setToolTip(QCoreApplication::translate("MainWindow", "Locally ignore user's text chat messages.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qaUserLocalIgnore->setWhatsThis(QCoreApplication::translate("MainWindow", "Silently drops all text messages from the user.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qaUserLocalMute->setText(QCoreApplication::translate("MainWindow", "&Local Mute", nullptr));
#if QT_CONFIG(tooltip)
        qaUserLocalMute->setToolTip(QCoreApplication::translate("MainWindow", "Mute user locally", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qaUserLocalMute->setWhatsThis(QCoreApplication::translate("MainWindow", "Mute or unmute user locally. Use this on other users in the same room.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qaUserTextMessage->setText(QCoreApplication::translate("MainWindow", "Send &Message...", nullptr));
#if QT_CONFIG(tooltip)
        qaUserTextMessage->setToolTip(QCoreApplication::translate("MainWindow", "Send a Text Message", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qaUserTextMessage->setWhatsThis(QCoreApplication::translate("MainWindow", "Sends a text message to another user.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qaUserLocalNickname->setText(QCoreApplication::translate("MainWindow", "&Set Nickname...", nullptr));
#if QT_CONFIG(tooltip)
        qaUserLocalNickname->setToolTip(QCoreApplication::translate("MainWindow", "Set a local nickname", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qaUserLocalNickname->setWhatsThis(QCoreApplication::translate("MainWindow", "Sets a local nickname for another user.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qaChannelAdd->setText(QCoreApplication::translate("MainWindow", "&Add...", nullptr));
#if QT_CONFIG(tooltip)
        qaChannelAdd->setToolTip(QCoreApplication::translate("MainWindow", "Add new channel", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qaChannelAdd->setWhatsThis(QCoreApplication::translate("MainWindow", "This adds a new sub-channel to the currently selected channel.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qaChannelRemove->setText(QCoreApplication::translate("MainWindow", "&Remove...", nullptr));
#if QT_CONFIG(tooltip)
        qaChannelRemove->setToolTip(QCoreApplication::translate("MainWindow", "Remove channel", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qaChannelRemove->setWhatsThis(QCoreApplication::translate("MainWindow", "This removes a channel and all sub-channels.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qaChannelACL->setText(QCoreApplication::translate("MainWindow", "&Edit...", nullptr));
#if QT_CONFIG(tooltip)
        qaChannelACL->setToolTip(QCoreApplication::translate("MainWindow", "Edit Groups and ACL for channel", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qaChannelACL->setWhatsThis(QCoreApplication::translate("MainWindow", "This opens the Group and ACL dialog for the channel, to control permissions.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qaChannelLink->setText(QCoreApplication::translate("MainWindow", "&Link", nullptr));
#if QT_CONFIG(tooltip)
        qaChannelLink->setToolTip(QCoreApplication::translate("MainWindow", "Link your channel to another channel", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qaChannelLink->setWhatsThis(QCoreApplication::translate("MainWindow", "This links your current channel to the selected channel. If users in a channel have permission to speak in the other channel, users can now hear each other. This is a permanent link, and will last until manually unlinked or the server is restarted. Please see the shortcuts for push-to-link.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qaChannelUnlink->setText(QCoreApplication::translate("MainWindow", "&Unlink", "Channel"));
#if QT_CONFIG(tooltip)
        qaChannelUnlink->setToolTip(QCoreApplication::translate("MainWindow", "Unlink your channel from another channel", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qaChannelUnlink->setWhatsThis(QCoreApplication::translate("MainWindow", "This unlinks your current channel from the selected channel.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qaChannelUnlinkAll->setText(QCoreApplication::translate("MainWindow", "&Unlink All", nullptr));
#if QT_CONFIG(tooltip)
        qaChannelUnlinkAll->setToolTip(QCoreApplication::translate("MainWindow", "Unlinks your channel from all linked channels.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qaChannelUnlinkAll->setWhatsThis(QCoreApplication::translate("MainWindow", "This unlinks your current channel (not the selected one) from all linked channels.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qaAudioReset->setText(QCoreApplication::translate("MainWindow", "&Reset", nullptr));
#if QT_CONFIG(tooltip)
        qaAudioReset->setToolTip(QCoreApplication::translate("MainWindow", "Reset audio preprocessor", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qaAudioReset->setWhatsThis(QCoreApplication::translate("MainWindow", "This will reset the audio preprocessor, including noise cancellation, automatic gain and voice activity detection. If something suddenly worsens the audio environment (like dropping the microphone) and it was temporary, use this to avoid having to wait for the preprocessor to readjust.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qaAudioMute->setText(QCoreApplication::translate("MainWindow", "&Mute Self", nullptr));
#if QT_CONFIG(whatsthis)
        qaAudioMute->setWhatsThis(QCoreApplication::translate("MainWindow", "Mute or unmute yourself. When muted, you will not send any data to the server. Unmuting while deafened will also undeafen.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qaAudioDeaf->setText(QCoreApplication::translate("MainWindow", "&Deafen Self", nullptr));
#if QT_CONFIG(whatsthis)
        qaAudioDeaf->setWhatsThis(QCoreApplication::translate("MainWindow", "Deafen or undeafen yourself. When deafened, you will not hear anything. Deafening yourself will also mute.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qaAudioTTS->setText(QCoreApplication::translate("MainWindow", "&Text-To-Speech", nullptr));
#if QT_CONFIG(tooltip)
        qaAudioTTS->setToolTip(QCoreApplication::translate("MainWindow", "Toggle Text-To-Speech", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qaAudioTTS->setWhatsThis(QCoreApplication::translate("MainWindow", "Enable or disable the text-to-speech engine. Only messages enabled for TTS in the Configuration dialog will actually be spoken.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qaAudioStats->setText(QCoreApplication::translate("MainWindow", "Audio S&tatistics...", nullptr));
#if QT_CONFIG(tooltip)
        qaAudioStats->setToolTip(QCoreApplication::translate("MainWindow", "Display audio statistics", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qaAudioStats->setWhatsThis(QCoreApplication::translate("MainWindow", "Pops up a small dialog with information about your current audio input.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qaAudioUnlink->setText(QCoreApplication::translate("MainWindow", "&Unlink Plugins", nullptr));
#if QT_CONFIG(tooltip)
        qaAudioUnlink->setToolTip(QCoreApplication::translate("MainWindow", "Forcibly unlink plugin", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qaAudioUnlink->setWhatsThis(QCoreApplication::translate("MainWindow", "This forces the current plugin to unlink, which is handy if it is reading completely wrong data.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qaConfigDialog->setText(QCoreApplication::translate("MainWindow", "&Settings...", nullptr));
#if QT_CONFIG(tooltip)
        qaConfigDialog->setToolTip(QCoreApplication::translate("MainWindow", "Configure Mumble", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qaConfigDialog->setWhatsThis(QCoreApplication::translate("MainWindow", "Allows you to change most settings for Mumble.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qaFilterToggle->setText(QCoreApplication::translate("MainWindow", "&Filter on/off", nullptr));
#if QT_CONFIG(tooltip)
        qaFilterToggle->setToolTip(QCoreApplication::translate("MainWindow", "Toggle the channel filter (Alt+F)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qaFilterToggle->setWhatsThis(QCoreApplication::translate("MainWindow", "Enable or disable the filtering of select channels.\n"
"By default all empty channels will be filtered.\n"
"You can mark additional channels for filtering from\n"
"the channel's context menu.", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(shortcut)
        qaFilterToggle->setShortcut(QCoreApplication::translate("MainWindow", "Alt+F", nullptr));
#endif // QT_CONFIG(shortcut)
        qaAudioWizard->setText(QCoreApplication::translate("MainWindow", "&Audio Wizard...", nullptr));
#if QT_CONFIG(tooltip)
        qaAudioWizard->setToolTip(QCoreApplication::translate("MainWindow", "Start the audio configuration wizard", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qaAudioWizard->setWhatsThis(QCoreApplication::translate("MainWindow", "This will guide you through the process of configuring your audio hardware.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qaDeveloperConsole->setText(QCoreApplication::translate("MainWindow", "Developer &Console...", nullptr));
#if QT_CONFIG(tooltip)
        qaDeveloperConsole->setToolTip(QCoreApplication::translate("MainWindow", "Show the Developer Console", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qaDeveloperConsole->setWhatsThis(QCoreApplication::translate("MainWindow", "Shows the Mumble Developer Console, where Mumble's log output can be inspected.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qaPositionalAudioViewer->setText(QCoreApplication::translate("MainWindow", "Positional &Audio Viewer...", nullptr));
#if QT_CONFIG(tooltip)
        qaPositionalAudioViewer->setToolTip(QCoreApplication::translate("MainWindow", "Show the Positional Audio Viewer", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qaPositionalAudioViewer->setWhatsThis(QCoreApplication::translate("MainWindow", "Shows the Positional Audio Viewer. In it the current information used for positional audio can be inspected. Context and identity are also shown.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qaHelpWhatsThis->setText(QCoreApplication::translate("MainWindow", "&What's This?", nullptr));
#if QT_CONFIG(tooltip)
        qaHelpWhatsThis->setToolTip(QCoreApplication::translate("MainWindow", "Enter What's This? mode", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qaHelpWhatsThis->setWhatsThis(QCoreApplication::translate("MainWindow", "Click this to enter \"What's This?\" mode. Your cursor will turn into a question mark. Click on any button, menu choice or area to show a description of what it is.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qaHelpAbout->setText(QCoreApplication::translate("MainWindow", "&About...", nullptr));
#if QT_CONFIG(tooltip)
        qaHelpAbout->setToolTip(QCoreApplication::translate("MainWindow", "Information about Mumble", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qaHelpAbout->setWhatsThis(QCoreApplication::translate("MainWindow", "Shows a small dialog with information and license for Mumble.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qaHelpAboutSpeex->setText(QCoreApplication::translate("MainWindow", "About &Speex...", nullptr));
#if QT_CONFIG(tooltip)
        qaHelpAboutSpeex->setToolTip(QCoreApplication::translate("MainWindow", "Information about Speex", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qaHelpAboutSpeex->setWhatsThis(QCoreApplication::translate("MainWindow", "Shows a small dialog with information about Speex.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qaHelpAboutQt->setText(QCoreApplication::translate("MainWindow", "About &Qt...", nullptr));
#if QT_CONFIG(tooltip)
        qaHelpAboutQt->setToolTip(QCoreApplication::translate("MainWindow", "Information about Qt", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qaHelpAboutQt->setWhatsThis(QCoreApplication::translate("MainWindow", "Shows a small dialog with information about Qt.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qaHelpVersionCheck->setText(QCoreApplication::translate("MainWindow", "Check for &Updates", nullptr));
#if QT_CONFIG(tooltip)
        qaHelpVersionCheck->setToolTip(QCoreApplication::translate("MainWindow", "Check for new version of Mumble", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qaHelpVersionCheck->setWhatsThis(QCoreApplication::translate("MainWindow", "Connects to the Mumble webpage to check if a new version is available, and notifies you with an appropriate download URL if this is the case.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qaChannelSendMessage->setText(QCoreApplication::translate("MainWindow", "Send &Message...", nullptr));
#if QT_CONFIG(tooltip)
        qaChannelSendMessage->setToolTip(QCoreApplication::translate("MainWindow", "Send a Text Message", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qaChannelSendMessage->setWhatsThis(QCoreApplication::translate("MainWindow", "Sends a text message to all users in a channel.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qaChannelCopyURL->setText(QCoreApplication::translate("MainWindow", "&Copy URL", nullptr));
#if QT_CONFIG(tooltip)
        qaChannelCopyURL->setToolTip(QCoreApplication::translate("MainWindow", "Copies a link to this channel to the clipboard.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qaChannelCopyURL->setWhatsThis(QCoreApplication::translate("MainWindow", "Copies a link to this channel to the clipboard.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qaConfigMinimal->setText(QCoreApplication::translate("MainWindow", "&Minimal View", nullptr));
#if QT_CONFIG(tooltip)
        qaConfigMinimal->setToolTip(QCoreApplication::translate("MainWindow", "Toggle minimal window modes", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qaConfigMinimal->setWhatsThis(QCoreApplication::translate("MainWindow", "This will toggle minimal mode, where the log window and menu is hidden.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qaConfigHideFrame->setText(QCoreApplication::translate("MainWindow", "Hide Frame", nullptr));
#if QT_CONFIG(tooltip)
        qaConfigHideFrame->setToolTip(QCoreApplication::translate("MainWindow", "Toggle showing frame on minimal window", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qaConfigHideFrame->setWhatsThis(QCoreApplication::translate("MainWindow", "This will toggle whether the minimal window should have a frame for moving and resizing.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qaConfigCert->setText(QCoreApplication::translate("MainWindow", "&Certificate Wizard...", nullptr));
#if QT_CONFIG(tooltip)
        qaConfigCert->setToolTip(QCoreApplication::translate("MainWindow", "Configure certificates for strong authentication", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qaConfigCert->setWhatsThis(QCoreApplication::translate("MainWindow", "This starts the wizard for creating, importing and exporting certificates for authentication against servers.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qaUserRegister->setText(QCoreApplication::translate("MainWindow", "&Register...", nullptr));
#if QT_CONFIG(tooltip)
        qaUserRegister->setToolTip(QCoreApplication::translate("MainWindow", "Register user on server", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qaUserRegister->setWhatsThis(QCoreApplication::translate("MainWindow", "This will permanently register the user on the server.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qaUserFriendAdd->setText(QCoreApplication::translate("MainWindow", "Add &Friend", nullptr));
#if QT_CONFIG(tooltip)
        qaUserFriendAdd->setToolTip(QCoreApplication::translate("MainWindow", "Adds a user as your friend.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qaUserFriendAdd->setWhatsThis(QCoreApplication::translate("MainWindow", "This will add the user as a friend, so you can recognize him on this and other servers.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qaUserFriendRemove->setText(QCoreApplication::translate("MainWindow", "&Remove Friend", nullptr));
#if QT_CONFIG(tooltip)
        qaUserFriendRemove->setToolTip(QCoreApplication::translate("MainWindow", "Removes a user from your friends.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qaUserFriendRemove->setWhatsThis(QCoreApplication::translate("MainWindow", "This will remove a user from your friends list.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qaUserFriendUpdate->setText(QCoreApplication::translate("MainWindow", "&Update Friend", nullptr));
#if QT_CONFIG(tooltip)
        qaUserFriendUpdate->setToolTip(QCoreApplication::translate("MainWindow", "Update name of your friend.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qaUserFriendUpdate->setWhatsThis(QCoreApplication::translate("MainWindow", "Your friend uses a different name than what is in your database. This will update the name.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qaServerUserList->setText(QCoreApplication::translate("MainWindow", "Registered &Users...", nullptr));
#if QT_CONFIG(tooltip)
        qaServerUserList->setToolTip(QCoreApplication::translate("MainWindow", "Edit registered users list", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qaServerUserList->setWhatsThis(QCoreApplication::translate("MainWindow", "This opens the editor for registered users, which allow you to change their name or unregister them.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qaServerTexture->setText(QCoreApplication::translate("MainWindow", "Change &Avatar...", nullptr));
#if QT_CONFIG(tooltip)
        qaServerTexture->setToolTip(QCoreApplication::translate("MainWindow", "Change your avatar image on this server", nullptr));
#endif // QT_CONFIG(tooltip)
        qaServerTokens->setText(QCoreApplication::translate("MainWindow", "&Access Tokens...", nullptr));
#if QT_CONFIG(tooltip)
        qaServerTokens->setToolTip(QCoreApplication::translate("MainWindow", "Add or remove text-based access tokens", nullptr));
#endif // QT_CONFIG(tooltip)
        qaServerTextureRemove->setText(QCoreApplication::translate("MainWindow", "&Remove Avatar", nullptr));
#if QT_CONFIG(tooltip)
        qaServerTextureRemove->setToolTip(QCoreApplication::translate("MainWindow", "Remove currently defined avatar image.", nullptr));
#endif // QT_CONFIG(tooltip)
        qaUserCommentReset->setText(QCoreApplication::translate("MainWindow", "Reset &Comment...", nullptr));
#if QT_CONFIG(tooltip)
        qaUserCommentReset->setToolTip(QCoreApplication::translate("MainWindow", "Reset the comment of the selected user.", nullptr));
#endif // QT_CONFIG(tooltip)
        qaUserTextureReset->setText(QCoreApplication::translate("MainWindow", "Reset &Avatar...", nullptr));
#if QT_CONFIG(tooltip)
        qaUserTextureReset->setToolTip(QCoreApplication::translate("MainWindow", "Reset the avatar of the selected user.", nullptr));
#endif // QT_CONFIG(tooltip)
        qaChannelJoin->setText(QCoreApplication::translate("MainWindow", "&Join Channel", nullptr));
        qaChannelFilter->setText(QCoreApplication::translate("MainWindow", "&Hide Channel when Filtering", nullptr));
        qaUserCommentView->setText(QCoreApplication::translate("MainWindow", "View Comment...", nullptr));
#if QT_CONFIG(tooltip)
        qaUserCommentView->setToolTip(QCoreApplication::translate("MainWindow", "View comment in editor", nullptr));
#endif // QT_CONFIG(tooltip)
        qaUserInformation->setText(QCoreApplication::translate("MainWindow", "&Information...", nullptr));
#if QT_CONFIG(tooltip)
        qaUserInformation->setToolTip(QCoreApplication::translate("MainWindow", "Query server for connection information for user", nullptr));
#endif // QT_CONFIG(tooltip)
        qaSelfComment->setText(QCoreApplication::translate("MainWindow", "&Change Comment...", nullptr));
#if QT_CONFIG(tooltip)
        qaSelfComment->setToolTip(QCoreApplication::translate("MainWindow", "Change your own comment", nullptr));
#endif // QT_CONFIG(tooltip)
        qaSelfRegister->setText(QCoreApplication::translate("MainWindow", "R&egister...", nullptr));
#if QT_CONFIG(tooltip)
        qaSelfRegister->setToolTip(QCoreApplication::translate("MainWindow", "Register yourself on the server", nullptr));
#endif // QT_CONFIG(tooltip)
        qaUserPrioritySpeaker->setText(QCoreApplication::translate("MainWindow", "Priority Speaker", nullptr));
        qaSelfPrioritySpeaker->setText(QCoreApplication::translate("MainWindow", "Priority Speaker", nullptr));
        qaRecording->setText(QCoreApplication::translate("MainWindow", "Recording", nullptr));
        qaShow->setText(QCoreApplication::translate("MainWindow", "Show", nullptr));
#if QT_CONFIG(tooltip)
        qaShow->setToolTip(QCoreApplication::translate("MainWindow", "Shows the main Mumble window.", nullptr));
#endif // QT_CONFIG(tooltip)
        qaChannelListen->setText(QCoreApplication::translate("MainWindow", "Listen to channel", nullptr));
#if QT_CONFIG(tooltip)
        qaChannelListen->setToolTip(QCoreApplication::translate("MainWindow", "Listen to this channel without joining it", nullptr));
#endif // QT_CONFIG(tooltip)
        qaTalkingUIToggle->setText(QCoreApplication::translate("MainWindow", "Talking UI", nullptr));
#if QT_CONFIG(tooltip)
        qaTalkingUIToggle->setToolTip(QCoreApplication::translate("MainWindow", "Toggles the visibility of the TalkingUI.", nullptr));
#endif // QT_CONFIG(tooltip)
        qaUserJoin->setText(QCoreApplication::translate("MainWindow", "Join user's channel", nullptr));
#if QT_CONFIG(tooltip)
        qaUserJoin->setToolTip(QCoreApplication::translate("MainWindow", "Joins the channel of this user.", nullptr));
#endif // QT_CONFIG(tooltip)
        qaUserLocalIgnoreTTS->setText(QCoreApplication::translate("MainWindow", "Disable Text-To-Speech", nullptr));
#if QT_CONFIG(tooltip)
        qaUserLocalIgnoreTTS->setToolTip(QCoreApplication::translate("MainWindow", "Locally disable Text-To-Speech for this user's text chat messages.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qaUserLocalIgnoreTTS->setWhatsThis(QCoreApplication::translate("MainWindow", "Silently disables Text-To-Speech for all text messages from the user.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qaSearch->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
#if QT_CONFIG(tooltip)
        qaSearch->setToolTip(QCoreApplication::translate("MainWindow", "Search for a user or channel (Ctrl+F)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        qaSearch->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        qmConfig->setTitle(QCoreApplication::translate("MainWindow", "C&onfigure", nullptr));
        qmHelp->setTitle(QCoreApplication::translate("MainWindow", "&Help", nullptr));
        qmServer->setTitle(QCoreApplication::translate("MainWindow", "S&erver", nullptr));
        qmSelf->setTitle(QCoreApplication::translate("MainWindow", "&Self", nullptr));
        qdwLog->setWindowTitle(QCoreApplication::translate("MainWindow", "Log", nullptr));
#if QT_CONFIG(whatsthis)
        qteLog->setWhatsThis(QCoreApplication::translate("MainWindow", "This shows all recent activity. Connecting to servers, errors and information messages all show up here.<br />To configure exactly which messages show up here, use the <b>Settings</b> command from the menu.", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        qdwChat->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qdwChat->setWhatsThis(QCoreApplication::translate("MainWindow", "This is the chatbar<br />If you enter text here and then press enter the text is sent to the user or channel that was selected. If nothing is selected the message is sent to your current channel.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qdwChat->setWindowTitle(QCoreApplication::translate("MainWindow", "Chatbar", nullptr));
        qtIconToolbar->setWindowTitle(QCoreApplication::translate("MainWindow", "Icon Toolbar", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "You are currently in minimal view but not connected to a server. Use the context menu to connect to a server or disable minimal view.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
