/********************************************************************************
** Form generated from reading UI file 'OverlayEditor.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERLAYEDITOR_H
#define UI_OVERLAYEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OverlayEditor
{
public:
    QGridLayout *gridLayout;
    QGroupBox *qgbState;
    QHBoxLayout *horizontalLayout;
    QRadioButton *qrbPassive;
    QRadioButton *qrbTalking;
    QRadioButton *qrbWhisper;
    QRadioButton *qrbShout;
    QGraphicsView *qgvView;
    QGroupBox *qgbZoom;
    QVBoxLayout *verticalLayout;
    QSlider *qsZoom;
    QGroupBox *qgbElements;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *qcbAvatar;
    QCheckBox *qcbUser;
    QCheckBox *qcbChannel;
    QCheckBox *qcbMutedDeafened;
    QCheckBox *qcbBox;
    QDialogButtonBox *qdbbBox;

    void setupUi(QDialog *OverlayEditor)
    {
        if (OverlayEditor->objectName().isEmpty())
            OverlayEditor->setObjectName(QString::fromUtf8("OverlayEditor"));
        OverlayEditor->resize(718, 556);
        gridLayout = new QGridLayout(OverlayEditor);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        qgbState = new QGroupBox(OverlayEditor);
        qgbState->setObjectName(QString::fromUtf8("qgbState"));
        horizontalLayout = new QHBoxLayout(qgbState);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        qrbPassive = new QRadioButton(qgbState);
        qrbPassive->setObjectName(QString::fromUtf8("qrbPassive"));

        horizontalLayout->addWidget(qrbPassive);

        qrbTalking = new QRadioButton(qgbState);
        qrbTalking->setObjectName(QString::fromUtf8("qrbTalking"));
        qrbTalking->setChecked(true);

        horizontalLayout->addWidget(qrbTalking);

        qrbWhisper = new QRadioButton(qgbState);
        qrbWhisper->setObjectName(QString::fromUtf8("qrbWhisper"));

        horizontalLayout->addWidget(qrbWhisper);

        qrbShout = new QRadioButton(qgbState);
        qrbShout->setObjectName(QString::fromUtf8("qrbShout"));

        horizontalLayout->addWidget(qrbShout);


        gridLayout->addWidget(qgbState, 0, 0, 1, 2);

        qgvView = new QGraphicsView(OverlayEditor);
        qgvView->setObjectName(QString::fromUtf8("qgvView"));
        qgvView->setInteractive(true);
        qgvView->setRenderHints(QPainter::Antialiasing|QPainter::SmoothPixmapTransform|QPainter::TextAntialiasing);

        gridLayout->addWidget(qgvView, 1, 0, 1, 1);

        qgbZoom = new QGroupBox(OverlayEditor);
        qgbZoom->setObjectName(QString::fromUtf8("qgbZoom"));
        verticalLayout = new QVBoxLayout(qgbZoom);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        qsZoom = new QSlider(qgbZoom);
        qsZoom->setObjectName(QString::fromUtf8("qsZoom"));
        qsZoom->setMinimum(1);
        qsZoom->setMaximum(10);
        qsZoom->setPageStep(5);
        qsZoom->setValue(2);
        qsZoom->setOrientation(Qt::Vertical);
        qsZoom->setTickPosition(QSlider::TicksBelow);
        qsZoom->setTickInterval(1);

        verticalLayout->addWidget(qsZoom);


        gridLayout->addWidget(qgbZoom, 1, 1, 1, 1);

        qgbElements = new QGroupBox(OverlayEditor);
        qgbElements->setObjectName(QString::fromUtf8("qgbElements"));
        horizontalLayout_2 = new QHBoxLayout(qgbElements);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        qcbAvatar = new QCheckBox(qgbElements);
        qcbAvatar->setObjectName(QString::fromUtf8("qcbAvatar"));

        horizontalLayout_2->addWidget(qcbAvatar);

        qcbUser = new QCheckBox(qgbElements);
        qcbUser->setObjectName(QString::fromUtf8("qcbUser"));

        horizontalLayout_2->addWidget(qcbUser);

        qcbChannel = new QCheckBox(qgbElements);
        qcbChannel->setObjectName(QString::fromUtf8("qcbChannel"));

        horizontalLayout_2->addWidget(qcbChannel);

        qcbMutedDeafened = new QCheckBox(qgbElements);
        qcbMutedDeafened->setObjectName(QString::fromUtf8("qcbMutedDeafened"));

        horizontalLayout_2->addWidget(qcbMutedDeafened);

        qcbBox = new QCheckBox(qgbElements);
        qcbBox->setObjectName(QString::fromUtf8("qcbBox"));

        horizontalLayout_2->addWidget(qcbBox);


        gridLayout->addWidget(qgbElements, 2, 0, 1, 2);

        qdbbBox = new QDialogButtonBox(OverlayEditor);
        qdbbBox->setObjectName(QString::fromUtf8("qdbbBox"));
        qdbbBox->setOrientation(Qt::Horizontal);
        qdbbBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::Reset);

        gridLayout->addWidget(qdbbBox, 3, 0, 1, 2);

        QWidget::setTabOrder(qrbPassive, qrbTalking);
        QWidget::setTabOrder(qrbTalking, qrbWhisper);
        QWidget::setTabOrder(qrbWhisper, qrbShout);
        QWidget::setTabOrder(qrbShout, qcbAvatar);
        QWidget::setTabOrder(qcbAvatar, qcbUser);
        QWidget::setTabOrder(qcbUser, qcbChannel);
        QWidget::setTabOrder(qcbChannel, qcbMutedDeafened);
        QWidget::setTabOrder(qcbMutedDeafened, qcbBox);
        QWidget::setTabOrder(qcbBox, qsZoom);
        QWidget::setTabOrder(qsZoom, qgvView);
        QWidget::setTabOrder(qgvView, qdbbBox);

        retranslateUi(OverlayEditor);
        QObject::connect(qdbbBox, SIGNAL(accepted()), OverlayEditor, SLOT(accept()));
        QObject::connect(qdbbBox, SIGNAL(rejected()), OverlayEditor, SLOT(reject()));

        QMetaObject::connectSlotsByName(OverlayEditor);
    } // setupUi

    void retranslateUi(QDialog *OverlayEditor)
    {
        OverlayEditor->setWindowTitle(QCoreApplication::translate("OverlayEditor", "Overlay Editor", nullptr));
        qgbState->setTitle(QCoreApplication::translate("OverlayEditor", "State", nullptr));
#if QT_CONFIG(tooltip)
        qrbPassive->setToolTip(QCoreApplication::translate("OverlayEditor", "User is not talking", nullptr));
#endif // QT_CONFIG(tooltip)
        qrbPassive->setText(QCoreApplication::translate("OverlayEditor", "Passive", nullptr));
#if QT_CONFIG(tooltip)
        qrbTalking->setToolTip(QCoreApplication::translate("OverlayEditor", "User is talking in your channel or a linked channel", nullptr));
#endif // QT_CONFIG(tooltip)
        qrbTalking->setText(QCoreApplication::translate("OverlayEditor", "Talking", nullptr));
#if QT_CONFIG(tooltip)
        qrbWhisper->setToolTip(QCoreApplication::translate("OverlayEditor", "User is whispering to you privately", nullptr));
#endif // QT_CONFIG(tooltip)
        qrbWhisper->setText(QCoreApplication::translate("OverlayEditor", "Private Whisper", nullptr));
#if QT_CONFIG(tooltip)
        qrbShout->setToolTip(QCoreApplication::translate("OverlayEditor", "User is shouting to your channel", nullptr));
#endif // QT_CONFIG(tooltip)
        qrbShout->setText(QCoreApplication::translate("OverlayEditor", "Channel Whisper", nullptr));
        qgbZoom->setTitle(QCoreApplication::translate("OverlayEditor", "Zoom", nullptr));
#if QT_CONFIG(tooltip)
        qsZoom->setToolTip(QCoreApplication::translate("OverlayEditor", "Zoom Factor", nullptr));
#endif // QT_CONFIG(tooltip)
        qgbElements->setTitle(QCoreApplication::translate("OverlayEditor", "Enabled Elements", nullptr));
#if QT_CONFIG(tooltip)
        qcbAvatar->setToolTip(QCoreApplication::translate("OverlayEditor", "User avatar, chosen by each user", nullptr));
#endif // QT_CONFIG(tooltip)
        qcbAvatar->setText(QCoreApplication::translate("OverlayEditor", "Avatar", nullptr));
#if QT_CONFIG(tooltip)
        qcbUser->setToolTip(QCoreApplication::translate("OverlayEditor", "User's name", nullptr));
#endif // QT_CONFIG(tooltip)
        qcbUser->setText(QCoreApplication::translate("OverlayEditor", "Username", nullptr));
#if QT_CONFIG(tooltip)
        qcbChannel->setToolTip(QCoreApplication::translate("OverlayEditor", "Name of user's channel, if outside your current channel", nullptr));
#endif // QT_CONFIG(tooltip)
        qcbChannel->setText(QCoreApplication::translate("OverlayEditor", "Channel", nullptr));
#if QT_CONFIG(tooltip)
        qcbMutedDeafened->setToolTip(QCoreApplication::translate("OverlayEditor", "Muted or deafened", nullptr));
#endif // QT_CONFIG(tooltip)
        qcbMutedDeafened->setText(QCoreApplication::translate("OverlayEditor", "Mute state", nullptr));
#if QT_CONFIG(tooltip)
        qcbBox->setToolTip(QCoreApplication::translate("OverlayEditor", "Bounding box, automatically shrunk to minimum size to contain all visible elements", nullptr));
#endif // QT_CONFIG(tooltip)
        qcbBox->setText(QCoreApplication::translate("OverlayEditor", "Bounding box", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OverlayEditor: public Ui_OverlayEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERLAYEDITOR_H
