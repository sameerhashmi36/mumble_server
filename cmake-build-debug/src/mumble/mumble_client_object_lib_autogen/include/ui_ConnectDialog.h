/********************************************************************************
** Form generated from reading UI file 'ConnectDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTDIALOG_H
#define UI_CONNECTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include "ConnectDialog.h"

QT_BEGIN_NAMESPACE

class Ui_ConnectDialog
{
public:
    QAction *qaFavoriteRemove;
    QAction *qaFavoriteEdit;
    QAction *qaFavoriteAddNew;
    QAction *qaFavoriteAdd;
    QAction *qaUrl;
    QAction *qaFavoriteCopy;
    QAction *qaFavoritePaste;
    QGridLayout *gridLayout;
    QDialogButtonBox *qdbbButtonBox;
    ServerView *qtwServers;
    QGroupBox *qgbSearch;
    QGridLayout *gridLayout1;
    QLabel *qlSearchServername;
    QLineEdit *qleSearchServername;
    QLabel *qlSearchLocation;
    QComboBox *qcbSearchLocation;
    QLabel *qlFilter;
    QComboBox *qcbFilter;

    void setupUi(QDialog *ConnectDialog)
    {
        if (ConnectDialog->objectName().isEmpty())
            ConnectDialog->setObjectName(QString::fromUtf8("ConnectDialog"));
        ConnectDialog->resize(574, 366);
        qaFavoriteRemove = new QAction(ConnectDialog);
        qaFavoriteRemove->setObjectName(QString::fromUtf8("qaFavoriteRemove"));
        qaFavoriteEdit = new QAction(ConnectDialog);
        qaFavoriteEdit->setObjectName(QString::fromUtf8("qaFavoriteEdit"));
        qaFavoriteAddNew = new QAction(ConnectDialog);
        qaFavoriteAddNew->setObjectName(QString::fromUtf8("qaFavoriteAddNew"));
        qaFavoriteAdd = new QAction(ConnectDialog);
        qaFavoriteAdd->setObjectName(QString::fromUtf8("qaFavoriteAdd"));
        qaUrl = new QAction(ConnectDialog);
        qaUrl->setObjectName(QString::fromUtf8("qaUrl"));
        qaFavoriteCopy = new QAction(ConnectDialog);
        qaFavoriteCopy->setObjectName(QString::fromUtf8("qaFavoriteCopy"));
        qaFavoritePaste = new QAction(ConnectDialog);
        qaFavoritePaste->setObjectName(QString::fromUtf8("qaFavoritePaste"));
        gridLayout = new QGridLayout(ConnectDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        qdbbButtonBox = new QDialogButtonBox(ConnectDialog);
        qdbbButtonBox->setObjectName(QString::fromUtf8("qdbbButtonBox"));
        qdbbButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(qdbbButtonBox, 2, 0, 1, 3);

        qtwServers = new ServerView(ConnectDialog);
        qtwServers->setObjectName(QString::fromUtf8("qtwServers"));
        qtwServers->setContextMenuPolicy(Qt::CustomContextMenu);
        qtwServers->setDragEnabled(true);
        qtwServers->setDragDropMode(QAbstractItemView::DragDrop);
        qtwServers->setAlternatingRowColors(true);
        qtwServers->setAutoExpandDelay(250);
        qtwServers->setRootIsDecorated(true);
        qtwServers->setUniformRowHeights(true);
        qtwServers->setSortingEnabled(true);
        qtwServers->header()->setStretchLastSection(false);

        gridLayout->addWidget(qtwServers, 0, 0, 1, 3);

        qgbSearch = new QGroupBox(ConnectDialog);
        qgbSearch->setObjectName(QString::fromUtf8("qgbSearch"));
        qgbSearch->setEnabled(true);
        gridLayout1 = new QGridLayout(qgbSearch);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        qlSearchServername = new QLabel(qgbSearch);
        qlSearchServername->setObjectName(QString::fromUtf8("qlSearchServername"));

        gridLayout1->addWidget(qlSearchServername, 1, 0, 1, 1);

        qleSearchServername = new QLineEdit(qgbSearch);
        qleSearchServername->setObjectName(QString::fromUtf8("qleSearchServername"));

        gridLayout1->addWidget(qleSearchServername, 1, 2, 1, 1);

        qlSearchLocation = new QLabel(qgbSearch);
        qlSearchLocation->setObjectName(QString::fromUtf8("qlSearchLocation"));

        gridLayout1->addWidget(qlSearchLocation, 2, 0, 1, 1);

        qcbSearchLocation = new QComboBox(qgbSearch);
        qcbSearchLocation->setObjectName(QString::fromUtf8("qcbSearchLocation"));

        gridLayout1->addWidget(qcbSearchLocation, 2, 2, 1, 1);

        qlFilter = new QLabel(qgbSearch);
        qlFilter->setObjectName(QString::fromUtf8("qlFilter"));

        gridLayout1->addWidget(qlFilter, 3, 0, 1, 1);

        qcbFilter = new QComboBox(qgbSearch);
        qcbFilter->addItem(QString());
        qcbFilter->addItem(QString());
        qcbFilter->addItem(QString());
        qcbFilter->setObjectName(QString::fromUtf8("qcbFilter"));
        qcbFilter->setEnabled(true);

        gridLayout1->addWidget(qcbFilter, 3, 2, 1, 1);


        gridLayout->addWidget(qgbSearch, 1, 0, 1, 3);


        retranslateUi(ConnectDialog);
        QObject::connect(qdbbButtonBox, SIGNAL(accepted()), ConnectDialog, SLOT(accept()));
        QObject::connect(qdbbButtonBox, SIGNAL(rejected()), ConnectDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ConnectDialog);
    } // setupUi

    void retranslateUi(QDialog *ConnectDialog)
    {
        ConnectDialog->setWindowTitle(QCoreApplication::translate("ConnectDialog", "Mumble Server Connect", nullptr));
        qaFavoriteRemove->setText(QCoreApplication::translate("ConnectDialog", "Remove from Favorites", nullptr));
        qaFavoriteEdit->setText(QCoreApplication::translate("ConnectDialog", "&Edit...", nullptr));
        qaFavoriteAddNew->setText(QCoreApplication::translate("ConnectDialog", "&Add New...", nullptr));
#if QT_CONFIG(tooltip)
        qaFavoriteAddNew->setToolTip(QCoreApplication::translate("ConnectDialog", "Add custom server", nullptr));
#endif // QT_CONFIG(tooltip)
        qaFavoriteAdd->setText(QCoreApplication::translate("ConnectDialog", "Add to &Favorites", nullptr));
        qaUrl->setText(QCoreApplication::translate("ConnectDialog", "Open &Webpage", nullptr));
        qaFavoriteCopy->setText(QCoreApplication::translate("ConnectDialog", "&Copy", nullptr));
#if QT_CONFIG(tooltip)
        qaFavoriteCopy->setToolTip(QCoreApplication::translate("ConnectDialog", "Copy favorite link to clipboard", nullptr));
#endif // QT_CONFIG(tooltip)
        qaFavoritePaste->setText(QCoreApplication::translate("ConnectDialog", "&Paste", nullptr));
#if QT_CONFIG(tooltip)
        qaFavoritePaste->setToolTip(QCoreApplication::translate("ConnectDialog", "Paste favorite from clipboard", nullptr));
#endif // QT_CONFIG(tooltip)
        QTreeWidgetItem *___qtreewidgetitem = qtwServers->headerItem();
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("ConnectDialog", "Users", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("ConnectDialog", "Ping", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("ConnectDialog", "Servername", nullptr));
        qgbSearch->setTitle(QCoreApplication::translate("ConnectDialog", "Search", nullptr));
        qlSearchServername->setText(QCoreApplication::translate("ConnectDialog", "Servername", nullptr));
        qleSearchServername->setPlaceholderText(QCoreApplication::translate("ConnectDialog", "Servername", nullptr));
        qlSearchLocation->setText(QCoreApplication::translate("ConnectDialog", "Location", nullptr));
        qlFilter->setText(QCoreApplication::translate("ConnectDialog", "Filter", nullptr));
        qcbFilter->setItemText(0, QCoreApplication::translate("ConnectDialog", "Show All", nullptr));
        qcbFilter->setItemText(1, QCoreApplication::translate("ConnectDialog", "Show Populated", nullptr));
        qcbFilter->setItemText(2, QCoreApplication::translate("ConnectDialog", "Show Reachable", nullptr));

    } // retranslateUi

};

namespace Ui {
    class ConnectDialog: public Ui_ConnectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTDIALOG_H
