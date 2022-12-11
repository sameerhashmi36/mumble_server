/********************************************************************************
** Form generated from reading UI file 'GlobalShortcutButtons.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GLOBALSHORTCUTBUTTONS_H
#define UI_GLOBALSHORTCUTBUTTONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GlobalShortcutButtons
{
public:
    QVBoxLayout *mainLayout;
    QGroupBox *groupBox;
    QVBoxLayout *groupBoxLayout;
    QTreeWidget *buttonTree;
    QHBoxLayout *buttonLayout;
    QPushButton *addButton;
    QPushButton *removeButton;
    QSpacerItem *buttonSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *GlobalShortcutButtons)
    {
        if (GlobalShortcutButtons->objectName().isEmpty())
            GlobalShortcutButtons->setObjectName(QString::fromUtf8("GlobalShortcutButtons"));
        GlobalShortcutButtons->resize(250, 250);
        mainLayout = new QVBoxLayout(GlobalShortcutButtons);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        groupBox = new QGroupBox(GlobalShortcutButtons);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBoxLayout = new QVBoxLayout(groupBox);
        groupBoxLayout->setObjectName(QString::fromUtf8("groupBoxLayout"));
        buttonTree = new QTreeWidget(groupBox);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        buttonTree->setHeaderItem(__qtreewidgetitem);
        buttonTree->setObjectName(QString::fromUtf8("buttonTree"));
        buttonTree->setSelectionMode(QAbstractItemView::ExtendedSelection);
        buttonTree->setHeaderHidden(true);

        groupBoxLayout->addWidget(buttonTree);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName(QString::fromUtf8("buttonLayout"));
        addButton = new QPushButton(groupBox);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setCheckable(true);

        buttonLayout->addWidget(addButton);

        removeButton = new QPushButton(groupBox);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));

        buttonLayout->addWidget(removeButton);

        buttonSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonLayout->addItem(buttonSpacer);


        groupBoxLayout->addLayout(buttonLayout);


        mainLayout->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(GlobalShortcutButtons);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        mainLayout->addWidget(buttonBox);


        retranslateUi(GlobalShortcutButtons);
        QObject::connect(buttonBox, SIGNAL(accepted()), GlobalShortcutButtons, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), GlobalShortcutButtons, SLOT(reject()));

        QMetaObject::connectSlotsByName(GlobalShortcutButtons);
    } // setupUi

    void retranslateUi(QDialog *GlobalShortcutButtons)
    {
        GlobalShortcutButtons->setWindowTitle(QCoreApplication::translate("GlobalShortcutButtons", "Edit shortcut", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GlobalShortcutButtons", "Edit shortcut", nullptr));
#if QT_CONFIG(tooltip)
        addButton->setToolTip(QCoreApplication::translate("GlobalShortcutButtons", "Start capture process", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        addButton->setWhatsThis(QCoreApplication::translate("GlobalShortcutButtons", "<html><head/><body><p>Starts the capture process: all buttons you press will be added to the tree.</p><p>Once all buttons are released, the capture process stops automatically.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        addButton->setText(QCoreApplication::translate("GlobalShortcutButtons", "Add", nullptr));
#if QT_CONFIG(tooltip)
        removeButton->setToolTip(QCoreApplication::translate("GlobalShortcutButtons", "Remove the currently selected items", nullptr));
#endif // QT_CONFIG(tooltip)
        removeButton->setText(QCoreApplication::translate("GlobalShortcutButtons", "Remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GlobalShortcutButtons: public Ui_GlobalShortcutButtons {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GLOBALSHORTCUTBUTTONS_H
