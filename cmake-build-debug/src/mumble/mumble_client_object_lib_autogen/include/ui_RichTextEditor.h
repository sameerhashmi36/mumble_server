/********************************************************************************
** Form generated from reading UI file 'RichTextEditor.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RICHTEXTEDITOR_H
#define UI_RICHTEXTEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "RichTextEditor.h"

QT_BEGIN_NAMESPACE

class Ui_RichTextEditor
{
public:
    QAction *qaBold;
    QAction *qaItalic;
    QAction *qaUnderline;
    QAction *qaColor;
    QAction *qaLink;
    QAction *qaImage;
    QWidget *qwRich;
    QVBoxLayout *verticalLayout_2;
    QToolBar *qtbToolBar;
    RichTextHtmlEdit *qteRichText;
    QWidget *qwPlain;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *qptePlainText;

    void setupUi(QTabWidget *RichTextEditor)
    {
        if (RichTextEditor->objectName().isEmpty())
            RichTextEditor->setObjectName(QString::fromUtf8("RichTextEditor"));
        RichTextEditor->resize(700, 518);
        RichTextEditor->setWindowTitle(QString::fromUtf8("TabWidget"));
        RichTextEditor->setTabPosition(QTabWidget::South);
        qaBold = new QAction(RichTextEditor);
        qaBold->setObjectName(QString::fromUtf8("qaBold"));
        qaBold->setCheckable(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8("skin:actions/format-text-bold.svg"), QSize(), QIcon::Normal, QIcon::Off);
        qaBold->setIcon(icon);
        qaItalic = new QAction(RichTextEditor);
        qaItalic->setObjectName(QString::fromUtf8("qaItalic"));
        qaItalic->setCheckable(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("skin:actions/format-text-italic.svg"), QSize(), QIcon::Normal, QIcon::Off);
        qaItalic->setIcon(icon1);
        qaUnderline = new QAction(RichTextEditor);
        qaUnderline->setObjectName(QString::fromUtf8("qaUnderline"));
        qaUnderline->setCheckable(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("skin:actions/format-text-underline.svg"), QSize(), QIcon::Normal, QIcon::Off);
        qaUnderline->setIcon(icon2);
        qaColor = new QAction(RichTextEditor);
        qaColor->setObjectName(QString::fromUtf8("qaColor"));
        qaLink = new QAction(RichTextEditor);
        qaLink->setObjectName(QString::fromUtf8("qaLink"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("skin:mimetypes/text-html.svg"), QSize(), QIcon::Normal, QIcon::Off);
        qaLink->setIcon(icon3);
        qaImage = new QAction(RichTextEditor);
        qaImage->setObjectName(QString::fromUtf8("qaImage"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("skin:mimetypes/image-x-generic.svg"), QSize(), QIcon::Normal, QIcon::Off);
        qaImage->setIcon(icon4);
        qwRich = new QWidget();
        qwRich->setObjectName(QString::fromUtf8("qwRich"));
        verticalLayout_2 = new QVBoxLayout(qwRich);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        qtbToolBar = new QToolBar(qwRich);
        qtbToolBar->setObjectName(QString::fromUtf8("qtbToolBar"));

        verticalLayout_2->addWidget(qtbToolBar);

        qteRichText = new RichTextHtmlEdit(qwRich);
        qteRichText->setObjectName(QString::fromUtf8("qteRichText"));
        qteRichText->setAutoFormatting(QTextEdit::AutoAll);

        verticalLayout_2->addWidget(qteRichText);

        RichTextEditor->addTab(qwRich, QString());
        qwPlain = new QWidget();
        qwPlain->setObjectName(QString::fromUtf8("qwPlain"));
        verticalLayout = new QVBoxLayout(qwPlain);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        qptePlainText = new QPlainTextEdit(qwPlain);
        qptePlainText->setObjectName(QString::fromUtf8("qptePlainText"));

        verticalLayout->addWidget(qptePlainText);

        RichTextEditor->addTab(qwPlain, QString());

        retranslateUi(RichTextEditor);

        RichTextEditor->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RichTextEditor);
    } // setupUi

    void retranslateUi(QTabWidget *RichTextEditor)
    {
        qaBold->setText(QCoreApplication::translate("RichTextEditor", "&Bold", nullptr));
#if QT_CONFIG(shortcut)
        qaBold->setShortcut(QCoreApplication::translate("RichTextEditor", "Ctrl+B", nullptr));
#endif // QT_CONFIG(shortcut)
        qaItalic->setText(QCoreApplication::translate("RichTextEditor", "&Italic", nullptr));
#if QT_CONFIG(tooltip)
        qaItalic->setToolTip(QCoreApplication::translate("RichTextEditor", "Italic", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        qaItalic->setShortcut(QCoreApplication::translate("RichTextEditor", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        qaUnderline->setText(QCoreApplication::translate("RichTextEditor", "Underline", nullptr));
#if QT_CONFIG(shortcut)
        qaUnderline->setShortcut(QCoreApplication::translate("RichTextEditor", "Ctrl+U", nullptr));
#endif // QT_CONFIG(shortcut)
        qaColor->setText(QCoreApplication::translate("RichTextEditor", "Color", nullptr));
        qaLink->setText(QCoreApplication::translate("RichTextEditor", "Insert Link", nullptr));
#if QT_CONFIG(shortcut)
        qaLink->setShortcut(QCoreApplication::translate("RichTextEditor", "Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        qaImage->setText(QCoreApplication::translate("RichTextEditor", "Insert Image", nullptr));
        RichTextEditor->setTabText(RichTextEditor->indexOf(qwRich), QCoreApplication::translate("RichTextEditor", "Display", nullptr));
        RichTextEditor->setTabText(RichTextEditor->indexOf(qwPlain), QCoreApplication::translate("RichTextEditor", "Source Text", nullptr));
        (void)RichTextEditor;
    } // retranslateUi

};

namespace Ui {
    class RichTextEditor: public Ui_RichTextEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RICHTEXTEDITOR_H
