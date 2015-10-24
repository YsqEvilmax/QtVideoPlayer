/********************************************************************************
** Form generated from reading UI file 'VideoFrame.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEOFRAME_H
#define UI_VIDEOFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "VideoDisplay.h"

QT_BEGIN_NAMESPACE

class Ui_VideoFrame
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    Gui::VideoDisplay *dispalyWidget;

    void setupUi(QMainWindow *VideoFrame)
    {
        if (VideoFrame->objectName().isEmpty())
            VideoFrame->setObjectName(QStringLiteral("VideoFrame"));
        VideoFrame->resize(1033, 661);
        centralWidget = new QWidget(VideoFrame);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        dispalyWidget = new Gui::VideoDisplay(centralWidget);
        dispalyWidget->setObjectName(QStringLiteral("dispalyWidget"));

        verticalLayout->addWidget(dispalyWidget);

        VideoFrame->setCentralWidget(centralWidget);

        retranslateUi(VideoFrame);

        QMetaObject::connectSlotsByName(VideoFrame);
    } // setupUi

    void retranslateUi(QMainWindow *VideoFrame)
    {
        VideoFrame->setWindowTitle(QApplication::translate("VideoFrame", "VideoFrame", 0));
    } // retranslateUi

};

namespace Ui {
    class VideoFrame: public Ui_VideoFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOFRAME_H
