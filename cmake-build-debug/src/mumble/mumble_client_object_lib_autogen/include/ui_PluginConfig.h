/********************************************************************************
** Form generated from reading UI file 'PluginConfig.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLUGINCONFIG_H
#define UI_PLUGINCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PluginConfig
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *qgbOptions;
    QVBoxLayout *vboxLayout;
    QCheckBox *qcbTransmit;
    QGroupBox *qgbPlugins;
    QVBoxLayout *vboxLayout1;
    QTreeWidget *qtwPlugins;
    QHBoxLayout *hboxLayout;
    QPushButton *qpbReload;
    QPushButton *qpbInstallPlugin;
    QSpacerItem *spacerItem;
    QPushButton *qpbAbout;
    QPushButton *qpbConfig;
    QPushButton *qpbUnload;

    void setupUi(QWidget *PluginConfig)
    {
        if (PluginConfig->objectName().isEmpty())
            PluginConfig->setObjectName(QString::fromUtf8("PluginConfig"));
        PluginConfig->resize(570, 289);
        verticalLayout = new QVBoxLayout(PluginConfig);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        qgbOptions = new QGroupBox(PluginConfig);
        qgbOptions->setObjectName(QString::fromUtf8("qgbOptions"));
        vboxLayout = new QVBoxLayout(qgbOptions);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        qcbTransmit = new QCheckBox(qgbOptions);
        qcbTransmit->setObjectName(QString::fromUtf8("qcbTransmit"));

        vboxLayout->addWidget(qcbTransmit);


        verticalLayout->addWidget(qgbOptions);

        qgbPlugins = new QGroupBox(PluginConfig);
        qgbPlugins->setObjectName(QString::fromUtf8("qgbPlugins"));
        vboxLayout1 = new QVBoxLayout(qgbPlugins);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        qtwPlugins = new QTreeWidget(qgbPlugins);
        qtwPlugins->setObjectName(QString::fromUtf8("qtwPlugins"));
        qtwPlugins->setRootIsDecorated(false);
        qtwPlugins->setHeaderHidden(false);
        qtwPlugins->header()->setStretchLastSection(false);

        vboxLayout1->addWidget(qtwPlugins);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        qpbReload = new QPushButton(qgbPlugins);
        qpbReload->setObjectName(QString::fromUtf8("qpbReload"));

        hboxLayout->addWidget(qpbReload);

        qpbInstallPlugin = new QPushButton(qgbPlugins);
        qpbInstallPlugin->setObjectName(QString::fromUtf8("qpbInstallPlugin"));

        hboxLayout->addWidget(qpbInstallPlugin);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        qpbAbout = new QPushButton(qgbPlugins);
        qpbAbout->setObjectName(QString::fromUtf8("qpbAbout"));

        hboxLayout->addWidget(qpbAbout);

        qpbConfig = new QPushButton(qgbPlugins);
        qpbConfig->setObjectName(QString::fromUtf8("qpbConfig"));

        hboxLayout->addWidget(qpbConfig);

        qpbUnload = new QPushButton(qgbPlugins);
        qpbUnload->setObjectName(QString::fromUtf8("qpbUnload"));

        hboxLayout->addWidget(qpbUnload);


        vboxLayout1->addLayout(hboxLayout);


        verticalLayout->addWidget(qgbPlugins);


        retranslateUi(PluginConfig);

        QMetaObject::connectSlotsByName(PluginConfig);
    } // setupUi

    void retranslateUi(QWidget *PluginConfig)
    {
        PluginConfig->setWindowTitle(QCoreApplication::translate("PluginConfig", "Plugins", nullptr));
        qgbOptions->setTitle(QCoreApplication::translate("PluginConfig", "Options", nullptr));
#if QT_CONFIG(tooltip)
        qcbTransmit->setToolTip(QCoreApplication::translate("PluginConfig", "Enable plugins and transmit positional information", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qcbTransmit->setWhatsThis(QCoreApplication::translate("PluginConfig", "This allows plugins for supported games to fetch your in-game position and transmit it with each voice packet. This enables other users to hear your voice in-game from the direction your character is in relation to their own.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qcbTransmit->setText(QCoreApplication::translate("PluginConfig", "Link to Game and Transmit Position", nullptr));
        qgbPlugins->setTitle(QCoreApplication::translate("PluginConfig", "Plugins", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = qtwPlugins->headerItem();
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("PluginConfig", "KeyEvents", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("PluginConfig", "PA", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("PluginConfig", "Enable", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("PluginConfig", "Name", nullptr));
#if QT_CONFIG(tooltip)
        qpbReload->setToolTip(QCoreApplication::translate("PluginConfig", "Reloads all plugins", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qpbReload->setWhatsThis(QCoreApplication::translate("PluginConfig", "This rescans and reloads plugins. Use this if you just added or changed a plugin to the plugins directory.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qpbReload->setText(QCoreApplication::translate("PluginConfig", "&Reload plugins", nullptr));
#if QT_CONFIG(tooltip)
        qpbInstallPlugin->setToolTip(QCoreApplication::translate("PluginConfig", "Install a plugin from a local file", nullptr));
#endif // QT_CONFIG(tooltip)
        qpbInstallPlugin->setText(QCoreApplication::translate("PluginConfig", "Install plugin...", nullptr));
#if QT_CONFIG(tooltip)
        qpbAbout->setToolTip(QCoreApplication::translate("PluginConfig", "Information about plugin", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qpbAbout->setWhatsThis(QCoreApplication::translate("PluginConfig", "This shows a small information message about the plugin.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qpbAbout->setText(QCoreApplication::translate("PluginConfig", "&About", nullptr));
#if QT_CONFIG(tooltip)
        qpbConfig->setToolTip(QCoreApplication::translate("PluginConfig", "Show configuration page of plugin", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        qpbConfig->setWhatsThis(QCoreApplication::translate("PluginConfig", "This shows the configuration page of the plugin, if any.", nullptr));
#endif // QT_CONFIG(whatsthis)
        qpbConfig->setText(QCoreApplication::translate("PluginConfig", "&Configure", nullptr));
#if QT_CONFIG(tooltip)
        qpbUnload->setToolTip(QCoreApplication::translate("PluginConfig", "Unload the currently selected plugin. This will remove it from the plugin list for the current session.", nullptr));
#endif // QT_CONFIG(tooltip)
        qpbUnload->setText(QCoreApplication::translate("PluginConfig", "Unload", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PluginConfig: public Ui_PluginConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLUGINCONFIG_H
