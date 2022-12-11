/********************************************************************************
** Form generated from reading UI file 'GlobalShortcut.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GLOBALSHORTCUT_H
#define UI_GLOBALSHORTCUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GlobalShortcut
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *qwWarningContainer;
    QVBoxLayout *vboxLayout;
    QWidget *qwMacWarning;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *qpbOpenAccessibilityPrefs;
    QPushButton *qpbSkipWarning;
    QSpacerItem *verticalSpacer;
    QLabel *qlWaylandNote;
    QGroupBox *qgbShortcuts;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *qcbEnableGlobalShortcuts;
    QTreeWidget *qtwShortcuts;
    QHBoxLayout *horizontalLayout;
    QPushButton *qpbAdd;
    QPushButton *qpbRemove;
    QSpacerItem *horizontalSpacer;
    QGroupBox *qgbWindowsShortcutEngines;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *qcbEnableUIAccess;
    QCheckBox *qcbEnableGKey;
    QCheckBox *qcbEnableXboxInput;

    void setupUi(QWidget *GlobalShortcut)
    {
        if (GlobalShortcut->objectName().isEmpty())
            GlobalShortcut->setObjectName(QString::fromUtf8("GlobalShortcut"));
        GlobalShortcut->resize(621, 542);
        verticalLayout = new QVBoxLayout(GlobalShortcut);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        qwWarningContainer = new QWidget(GlobalShortcut);
        qwWarningContainer->setObjectName(QString::fromUtf8("qwWarningContainer"));
        vboxLayout = new QVBoxLayout(qwWarningContainer);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        qwMacWarning = new QWidget(qwWarningContainer);
        qwMacWarning->setObjectName(QString::fromUtf8("qwMacWarning"));
        verticalLayout_4 = new QVBoxLayout(qwMacWarning);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label = new QLabel(qwMacWarning);
        label->setObjectName(QString::fromUtf8("label"));
        label->setTextFormat(Qt::RichText);
        label->setWordWrap(true);

        verticalLayout_4->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        qpbOpenAccessibilityPrefs = new QPushButton(qwMacWarning);
        qpbOpenAccessibilityPrefs->setObjectName(QString::fromUtf8("qpbOpenAccessibilityPrefs"));

        horizontalLayout_2->addWidget(qpbOpenAccessibilityPrefs);

        qpbSkipWarning = new QPushButton(qwMacWarning);
        qpbSkipWarning->setObjectName(QString::fromUtf8("qpbSkipWarning"));

        horizontalLayout_2->addWidget(qpbSkipWarning);


        verticalLayout_4->addLayout(horizontalLayout_2);


        vboxLayout->addWidget(qwMacWarning);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        vboxLayout->addItem(verticalSpacer);


        verticalLayout->addWidget(qwWarningContainer);

        qlWaylandNote = new QLabel(GlobalShortcut);
        qlWaylandNote->setObjectName(QString::fromUtf8("qlWaylandNote"));
        qlWaylandNote->setWordWrap(true);
        qlWaylandNote->setOpenExternalLinks(true);

        verticalLayout->addWidget(qlWaylandNote);

        qgbShortcuts = new QGroupBox(GlobalShortcut);
        qgbShortcuts->setObjectName(QString::fromUtf8("qgbShortcuts"));
        verticalLayout_3 = new QVBoxLayout(qgbShortcuts);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        qcbEnableGlobalShortcuts = new QCheckBox(qgbShortcuts);
        qcbEnableGlobalShortcuts->setObjectName(QString::fromUtf8("qcbEnableGlobalShortcuts"));

        verticalLayout_2->addWidget(qcbEnableGlobalShortcuts);

        qtwShortcuts = new QTreeWidget(qgbShortcuts);
        qtwShortcuts->setObjectName(QString::fromUtf8("qtwShortcuts"));
        qtwShortcuts->setEditTriggers(QAbstractItemView::AllEditTriggers);
        qtwShortcuts->setAlternatingRowColors(true);
        qtwShortcuts->setRootIsDecorated(false);
        qtwShortcuts->setUniformRowHeights(true);
        qtwShortcuts->header()->setMinimumSectionSize(50);
        qtwShortcuts->header()->setDefaultSectionSize(100);
        qtwShortcuts->header()->setStretchLastSection(false);

        verticalLayout_2->addWidget(qtwShortcuts);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        qpbAdd = new QPushButton(qgbShortcuts);
        qpbAdd->setObjectName(QString::fromUtf8("qpbAdd"));

        horizontalLayout->addWidget(qpbAdd);

        qpbRemove = new QPushButton(qgbShortcuts);
        qpbRemove->setObjectName(QString::fromUtf8("qpbRemove"));
        qpbRemove->setEnabled(false);

        horizontalLayout->addWidget(qpbRemove);

        horizontalSpacer = new QSpacerItem(59, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout);

        qgbWindowsShortcutEngines = new QGroupBox(qgbShortcuts);
        qgbWindowsShortcutEngines->setObjectName(QString::fromUtf8("qgbWindowsShortcutEngines"));
        verticalLayout_5 = new QVBoxLayout(qgbWindowsShortcutEngines);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        qcbEnableUIAccess = new QCheckBox(qgbWindowsShortcutEngines);
        qcbEnableUIAccess->setObjectName(QString::fromUtf8("qcbEnableUIAccess"));

        verticalLayout_5->addWidget(qcbEnableUIAccess);

        qcbEnableGKey = new QCheckBox(qgbWindowsShortcutEngines);
        qcbEnableGKey->setObjectName(QString::fromUtf8("qcbEnableGKey"));

        verticalLayout_5->addWidget(qcbEnableGKey);

        qcbEnableXboxInput = new QCheckBox(qgbWindowsShortcutEngines);
        qcbEnableXboxInput->setObjectName(QString::fromUtf8("qcbEnableXboxInput"));

        verticalLayout_5->addWidget(qcbEnableXboxInput);


        verticalLayout_3->addWidget(qgbWindowsShortcutEngines);


        verticalLayout->addWidget(qgbShortcuts);


        retranslateUi(GlobalShortcut);

        QMetaObject::connectSlotsByName(GlobalShortcut);
    } // setupUi

    void retranslateUi(QWidget *GlobalShortcut)
    {
        label->setText(QCoreApplication::translate("GlobalShortcut", "<html><head/><body><p>Mumble can currently only use mouse buttons and keyboard modifier keys (Alt, Ctrl, Cmd, etc.) for global shortcuts.</p><p>If you want more flexibility, you can enable <span style=\" font-style:italic;\">Access for assistive devices</span> in the system's Accessibility preferences. However, please note that this change also potentially allows malicious programs to read what is typed on your keyboard.</p></body></html>", nullptr));
        qpbOpenAccessibilityPrefs->setText(QCoreApplication::translate("GlobalShortcut", "Open Accessibility Preferences", nullptr));
        qpbSkipWarning->setText(QCoreApplication::translate("GlobalShortcut", "Skip", nullptr));
        qlWaylandNote->setText(QCoreApplication::translate("GlobalShortcut", "<html><head/><body><p>Mumble's Global Shortcuts system does currently not work properly in combination with the Wayland protocol. For more information, visit <a href=\"https://github.com/mumble-voip/mumble/issues/5257\"><span style=\" text-decoration: underline; color:#0057ae;\">https://github.com/mumble-voip/mumble/issues/5257</span></a>.</p></body></html>", nullptr));
        qgbShortcuts->setTitle(QCoreApplication::translate("GlobalShortcut", "Shortcuts", nullptr));
        qcbEnableGlobalShortcuts->setText(QCoreApplication::translate("GlobalShortcut", "Enable Global Shortcuts", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = qtwShortcuts->headerItem();
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("GlobalShortcut", "Suppress", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("GlobalShortcut", "Shortcut", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("GlobalShortcut", "Data", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("GlobalShortcut", "Function", nullptr));
#if QT_CONFIG(tooltip)
        qtwShortcuts->setToolTip(QCoreApplication::translate("GlobalShortcut", "List of configured shortcuts", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        qpbAdd->setToolTip(QCoreApplication::translate("GlobalShortcut", "Add new shortcut", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qpbAdd->setWhatsThis(QCoreApplication::translate("GlobalShortcut", "This will add a new global shortcut", nullptr));
#endif // QT_CONFIG(whatsthis)
        qpbAdd->setText(QCoreApplication::translate("GlobalShortcut", "&Add", nullptr));
#if QT_CONFIG(tooltip)
        qpbRemove->setToolTip(QCoreApplication::translate("GlobalShortcut", "Remove selected shortcut", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qpbRemove->setWhatsThis(QCoreApplication::translate("GlobalShortcut", "This will permanently remove a selected shortcut.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qpbRemove->setText(QCoreApplication::translate("GlobalShortcut", "&Remove", nullptr));
#if QT_CONFIG(whatsthis)
        qgbWindowsShortcutEngines->setWhatsThis(QCoreApplication::translate("GlobalShortcut", "<b>Additional Shortcut Engines</b><br />This section allows you to configure the use of additional GlobalShortcut engines.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qgbWindowsShortcutEngines->setTitle(QCoreApplication::translate("GlobalShortcut", "Additional Shortcut Engines", nullptr));
#if QT_CONFIG(whatsthis)
        qcbEnableUIAccess->setWhatsThis(QCoreApplication::translate("GlobalShortcut", "<b>Enable shortcuts in privileged applications</b>.<br />Also known as \"UIAccess\". This allows Mumble to receive global shortcut events from programs running at high privilege levels, such as an Admin Command Prompt or older games that run with admin privileges.\n"
"<br /><br />\n"
"Without this option enabled, using Mumble's global shortcuts in privileged applications will not work. This can seem inconsistent: for example, if the Push-to-Talk button is pressed in a non-privileged program, but released in a privileged application, Mumble will not observe that it has been released and you will continue to talk until you press the Push-to-Talk button again.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qcbEnableUIAccess->setText(QCoreApplication::translate("GlobalShortcut", "Enable shortcuts in privileged applications", nullptr));
#if QT_CONFIG(whatsthis)
        qcbEnableGKey->setWhatsThis(QCoreApplication::translate("GlobalShortcut", "<b>Enable GKey</b>.<br />This setting enables support for the GKey shortcut engine, for \"G\"-keys found on Logitech keyboards.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qcbEnableGKey->setText(QCoreApplication::translate("GlobalShortcut", "Enable GKey", nullptr));
#if QT_CONFIG(whatsthis)
        qcbEnableXboxInput->setWhatsThis(QCoreApplication::translate("GlobalShortcut", "<b>Enable XInput</b><br />This setting enables support for the XInput shortcut engine, for Xbox compatible controllers.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qcbEnableXboxInput->setText(QCoreApplication::translate("GlobalShortcut", "Enable XInput", nullptr));
        (void)GlobalShortcut;
    } // retranslateUi

};

namespace Ui {
    class GlobalShortcut: public Ui_GlobalShortcut {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GLOBALSHORTCUT_H
