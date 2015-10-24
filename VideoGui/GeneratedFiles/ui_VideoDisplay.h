/********************************************************************************
** Form generated from reading UI file 'VideoDisplay.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEODISPLAY_H
#define UI_VIDEODISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "../Qt5AV/QtAV/WidgetRenderer.h"
#include "Emerging.h"

QT_BEGIN_NAMESPACE

class Ui_VideoDisplay
{
public:
    QHBoxLayout *horizontalLayout;
    QtAV::WidgetRenderer *showWidget;
    QVBoxLayout *verticalLayout_3;
    QStackedWidget *controlStackedWidget;
    QWidget *PTZControllerWidget;
    QGridLayout *gridLayout;
    Gui::EmergingButton *leftupPushButton;
    Gui::EmergingButton *upPushButton;
    Gui::EmergingButton *rightupPushButton;
    Gui::EmergingButton *leftPushButton;
    Gui::EmergingButton *circlePushButton;
    Gui::EmergingButton *rightPushButton;
    Gui::EmergingButton *leftdownpushButton;
    Gui::EmergingButton *downPushButton;
    Gui::EmergingButton *rightdownPushButton;
    QWidget *playControllerWidget;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer;
    Gui::EmergingWidget *palyWidget;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *stopPushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *lastPushButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *playOrPausePushButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *nextPushButton;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *yesterdayPushButton;
    QPushButton *tomorrowPushButton;
    QSlider *todayHorizontalSlider;
    QSpacerItem *verticalSpacer_2;
    QWidget *panelWidget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *videoGroupBox;
    QVBoxLayout *verticalLayout;
    QPushButton *realtimeVideoPushButton;
    QPushButton *historicVideoPushButton;
    QGroupBox *panelGroupBox;
    QVBoxLayout *verticalLayout_4;
    QStackedWidget *panelStackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_6;
    QWidget *panWidget;
    QGridLayout *gridLayout_3;
    QPushButton *leftupPushButton_2;
    QPushButton *upPushButton_2;
    QPushButton *rightupPushButton_2;
    QPushButton *leftPushButton_2;
    QPushButton *circlePushButton_2;
    QPushButton *rightPushButton_2;
    QPushButton *leftdownPushButton;
    QPushButton *downPushButton_2;
    QPushButton *rightdownPushButton_2;
    QWidget *speedWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *decreaseLabel;
    QSlider *speedHorizontalSlider;
    QLabel *increaseLabel;
    QWidget *cameraWidget;
    QGridLayout *gridLayout_5;
    QPushButton *tiltDecreasePushButton;
    QLabel *tiltLabel;
    QPushButton *tiltIncreasePushButton;
    QPushButton *zoomDecreasePushButton;
    QLabel *zoomLabel;
    QPushButton *zoomIncreasePushButton;
    QPushButton *apertureDecreasePushButton;
    QLabel *apertureLabel;
    QPushButton *apertureIncreasePushButton;
    QWidget *colourWidget;
    QGridLayout *gridLayout_4;
    QLabel *brightnessLabel;
    QSlider *brightnessHorizontalSlider;
    QLabel *hueLabel;
    QSlider *hueHorizontalSlider;
    QSlider *contrastHorizontalSlider;
    QSlider *saturationHorizontalSlider;
    QPushButton *defaultValuePushButton;
    QLabel *contrastLabel;
    QLabel *saturationLabel;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_8;
    QCalendarWidget *calendarWidget;
    QWidget *durationWidget;
    QGridLayout *gridLayout_6;
    QLabel *fromLabel;
    QTimeEdit *fromTimeEdit;
    QLabel *toLabel;
    QTimeEdit *toTimeEdit;
    QWidget *resualtWidget;
    QVBoxLayout *verticalLayout_7;
    QPushButton *searchPushButton;
    QListWidget *resualtListWidget;

    void setupUi(QWidget *VideoDisplay)
    {
        if (VideoDisplay->objectName().isEmpty())
            VideoDisplay->setObjectName(QStringLiteral("VideoDisplay"));
        VideoDisplay->resize(849, 497);
        horizontalLayout = new QHBoxLayout(VideoDisplay);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        showWidget = new QtAV::WidgetRenderer(VideoDisplay);
        showWidget->setObjectName(QStringLiteral("showWidget"));
        showWidget->setAutoFillBackground(false);
        verticalLayout_3 = new QVBoxLayout(showWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        controlStackedWidget = new QStackedWidget(showWidget);
        controlStackedWidget->setObjectName(QStringLiteral("controlStackedWidget"));
        PTZControllerWidget = new QWidget();
        PTZControllerWidget->setObjectName(QStringLiteral("PTZControllerWidget"));
        gridLayout = new QGridLayout(PTZControllerWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        leftupPushButton = new Gui::EmergingButton(PTZControllerWidget);
        leftupPushButton->setObjectName(QStringLiteral("leftupPushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(leftupPushButton->sizePolicy().hasHeightForWidth());
        leftupPushButton->setSizePolicy(sizePolicy);
        leftupPushButton->setStyleSheet(QStringLiteral(""));
        leftupPushButton->setFlat(false);

        gridLayout->addWidget(leftupPushButton, 0, 0, 1, 1);

        upPushButton = new Gui::EmergingButton(PTZControllerWidget);
        upPushButton->setObjectName(QStringLiteral("upPushButton"));
        sizePolicy.setHeightForWidth(upPushButton->sizePolicy().hasHeightForWidth());
        upPushButton->setSizePolicy(sizePolicy);
        upPushButton->setStyleSheet(QStringLiteral(""));
        upPushButton->setFlat(false);

        gridLayout->addWidget(upPushButton, 0, 1, 1, 1);

        rightupPushButton = new Gui::EmergingButton(PTZControllerWidget);
        rightupPushButton->setObjectName(QStringLiteral("rightupPushButton"));
        sizePolicy.setHeightForWidth(rightupPushButton->sizePolicy().hasHeightForWidth());
        rightupPushButton->setSizePolicy(sizePolicy);
        rightupPushButton->setStyleSheet(QStringLiteral(""));
        rightupPushButton->setFlat(false);

        gridLayout->addWidget(rightupPushButton, 0, 2, 1, 1);

        leftPushButton = new Gui::EmergingButton(PTZControllerWidget);
        leftPushButton->setObjectName(QStringLiteral("leftPushButton"));
        sizePolicy.setHeightForWidth(leftPushButton->sizePolicy().hasHeightForWidth());
        leftPushButton->setSizePolicy(sizePolicy);
        leftPushButton->setStyleSheet(QStringLiteral(""));
        leftPushButton->setFlat(false);

        gridLayout->addWidget(leftPushButton, 1, 0, 1, 1);

        circlePushButton = new Gui::EmergingButton(PTZControllerWidget);
        circlePushButton->setObjectName(QStringLiteral("circlePushButton"));
        circlePushButton->setEnabled(true);
        sizePolicy.setHeightForWidth(circlePushButton->sizePolicy().hasHeightForWidth());
        circlePushButton->setSizePolicy(sizePolicy);
        circlePushButton->setCursor(QCursor(Qt::ArrowCursor));
        circlePushButton->setMouseTracking(false);
        circlePushButton->setStyleSheet(QStringLiteral(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/\346\226\260\345\211\215\347\274\200/test.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        circlePushButton->setIcon(icon);
        circlePushButton->setIconSize(QSize(177, 158));
        circlePushButton->setCheckable(false);
        circlePushButton->setAutoDefault(false);
        circlePushButton->setDefault(false);
        circlePushButton->setFlat(false);

        gridLayout->addWidget(circlePushButton, 1, 1, 1, 1);

        rightPushButton = new Gui::EmergingButton(PTZControllerWidget);
        rightPushButton->setObjectName(QStringLiteral("rightPushButton"));
        sizePolicy.setHeightForWidth(rightPushButton->sizePolicy().hasHeightForWidth());
        rightPushButton->setSizePolicy(sizePolicy);
        rightPushButton->setStyleSheet(QStringLiteral(""));
        rightPushButton->setFlat(false);

        gridLayout->addWidget(rightPushButton, 1, 2, 1, 1);

        leftdownpushButton = new Gui::EmergingButton(PTZControllerWidget);
        leftdownpushButton->setObjectName(QStringLiteral("leftdownpushButton"));
        sizePolicy.setHeightForWidth(leftdownpushButton->sizePolicy().hasHeightForWidth());
        leftdownpushButton->setSizePolicy(sizePolicy);
        leftdownpushButton->setStyleSheet(QStringLiteral(""));
        leftdownpushButton->setFlat(false);

        gridLayout->addWidget(leftdownpushButton, 2, 0, 1, 1);

        downPushButton = new Gui::EmergingButton(PTZControllerWidget);
        downPushButton->setObjectName(QStringLiteral("downPushButton"));
        sizePolicy.setHeightForWidth(downPushButton->sizePolicy().hasHeightForWidth());
        downPushButton->setSizePolicy(sizePolicy);
        downPushButton->setStyleSheet(QStringLiteral(""));
        downPushButton->setAutoDefault(false);
        downPushButton->setFlat(false);

        gridLayout->addWidget(downPushButton, 2, 1, 1, 1);

        rightdownPushButton = new Gui::EmergingButton(PTZControllerWidget);
        rightdownPushButton->setObjectName(QStringLiteral("rightdownPushButton"));
        sizePolicy.setHeightForWidth(rightdownPushButton->sizePolicy().hasHeightForWidth());
        rightdownPushButton->setSizePolicy(sizePolicy);
        rightdownPushButton->setStyleSheet(QStringLiteral(""));
        rightdownPushButton->setFlat(false);

        gridLayout->addWidget(rightdownPushButton, 2, 2, 1, 1);

        controlStackedWidget->addWidget(PTZControllerWidget);
        playControllerWidget = new QWidget();
        playControllerWidget->setObjectName(QStringLiteral("playControllerWidget"));
        verticalLayout_5 = new QVBoxLayout(playControllerWidget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 212, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        palyWidget = new Gui::EmergingWidget(playControllerWidget);
        palyWidget->setObjectName(QStringLiteral("palyWidget"));
        gridLayout_2 = new QGridLayout(palyWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_5 = new QSpacerItem(72, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 0, 0, 1, 1);

        stopPushButton = new QPushButton(palyWidget);
        stopPushButton->setObjectName(QStringLiteral("stopPushButton"));

        gridLayout_2->addWidget(stopPushButton, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(46, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 2, 1, 1);

        lastPushButton = new QPushButton(palyWidget);
        lastPushButton->setObjectName(QStringLiteral("lastPushButton"));

        gridLayout_2->addWidget(lastPushButton, 0, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(45, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 4, 1, 1);

        playOrPausePushButton = new QPushButton(palyWidget);
        playOrPausePushButton->setObjectName(QStringLiteral("playOrPausePushButton"));

        gridLayout_2->addWidget(playOrPausePushButton, 0, 5, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(46, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 6, 1, 1);

        nextPushButton = new QPushButton(palyWidget);
        nextPushButton->setObjectName(QStringLiteral("nextPushButton"));

        gridLayout_2->addWidget(nextPushButton, 0, 7, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(72, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 0, 8, 1, 1);

        yesterdayPushButton = new QPushButton(palyWidget);
        yesterdayPushButton->setObjectName(QStringLiteral("yesterdayPushButton"));

        gridLayout_2->addWidget(yesterdayPushButton, 1, 0, 1, 1);

        tomorrowPushButton = new QPushButton(palyWidget);
        tomorrowPushButton->setObjectName(QStringLiteral("tomorrowPushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tomorrowPushButton->sizePolicy().hasHeightForWidth());
        tomorrowPushButton->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(tomorrowPushButton, 1, 8, 1, 1);

        todayHorizontalSlider = new QSlider(palyWidget);
        todayHorizontalSlider->setObjectName(QStringLiteral("todayHorizontalSlider"));
        todayHorizontalSlider->setMaximum(24);
        todayHorizontalSlider->setOrientation(Qt::Horizontal);
        todayHorizontalSlider->setTickPosition(QSlider::TicksAbove);
        todayHorizontalSlider->setTickInterval(0);

        gridLayout_2->addWidget(todayHorizontalSlider, 1, 1, 1, 7);

        gridLayout_2->setRowStretch(0, 1);
        gridLayout_2->setRowStretch(1, 1);
        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 2);
        gridLayout_2->setColumnStretch(2, 1);
        gridLayout_2->setColumnStretch(3, 2);
        gridLayout_2->setColumnStretch(4, 1);
        gridLayout_2->setColumnStretch(5, 2);
        gridLayout_2->setColumnStretch(6, 1);
        gridLayout_2->setColumnStretch(7, 2);
        gridLayout_2->setColumnStretch(8, 1);

        verticalLayout_5->addWidget(palyWidget);

        verticalSpacer_2 = new QSpacerItem(20, 211, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);

        controlStackedWidget->addWidget(playControllerWidget);

        verticalLayout_3->addWidget(controlStackedWidget);


        horizontalLayout->addWidget(showWidget);

        panelWidget = new QWidget(VideoDisplay);
        panelWidget->setObjectName(QStringLiteral("panelWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(100);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(panelWidget->sizePolicy().hasHeightForWidth());
        panelWidget->setSizePolicy(sizePolicy2);
        verticalLayout_2 = new QVBoxLayout(panelWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        videoGroupBox = new QGroupBox(panelWidget);
        videoGroupBox->setObjectName(QStringLiteral("videoGroupBox"));
        verticalLayout = new QVBoxLayout(videoGroupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        realtimeVideoPushButton = new QPushButton(videoGroupBox);
        realtimeVideoPushButton->setObjectName(QStringLiteral("realtimeVideoPushButton"));

        verticalLayout->addWidget(realtimeVideoPushButton);

        historicVideoPushButton = new QPushButton(videoGroupBox);
        historicVideoPushButton->setObjectName(QStringLiteral("historicVideoPushButton"));

        verticalLayout->addWidget(historicVideoPushButton);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);

        verticalLayout_2->addWidget(videoGroupBox);

        panelGroupBox = new QGroupBox(panelWidget);
        panelGroupBox->setObjectName(QStringLiteral("panelGroupBox"));
        verticalLayout_4 = new QVBoxLayout(panelGroupBox);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        panelStackedWidget = new QStackedWidget(panelGroupBox);
        panelStackedWidget->setObjectName(QStringLiteral("panelStackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_6 = new QVBoxLayout(page);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        panWidget = new QWidget(page);
        panWidget->setObjectName(QStringLiteral("panWidget"));
        gridLayout_3 = new QGridLayout(panWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        leftupPushButton_2 = new QPushButton(panWidget);
        leftupPushButton_2->setObjectName(QStringLiteral("leftupPushButton_2"));

        gridLayout_3->addWidget(leftupPushButton_2, 0, 0, 1, 1);

        upPushButton_2 = new QPushButton(panWidget);
        upPushButton_2->setObjectName(QStringLiteral("upPushButton_2"));

        gridLayout_3->addWidget(upPushButton_2, 0, 1, 1, 1);

        rightupPushButton_2 = new QPushButton(panWidget);
        rightupPushButton_2->setObjectName(QStringLiteral("rightupPushButton_2"));

        gridLayout_3->addWidget(rightupPushButton_2, 0, 2, 1, 1);

        leftPushButton_2 = new QPushButton(panWidget);
        leftPushButton_2->setObjectName(QStringLiteral("leftPushButton_2"));

        gridLayout_3->addWidget(leftPushButton_2, 1, 0, 1, 1);

        circlePushButton_2 = new QPushButton(panWidget);
        circlePushButton_2->setObjectName(QStringLiteral("circlePushButton_2"));
        circlePushButton_2->setIcon(icon);

        gridLayout_3->addWidget(circlePushButton_2, 1, 1, 1, 1);

        rightPushButton_2 = new QPushButton(panWidget);
        rightPushButton_2->setObjectName(QStringLiteral("rightPushButton_2"));

        gridLayout_3->addWidget(rightPushButton_2, 1, 2, 1, 1);

        leftdownPushButton = new QPushButton(panWidget);
        leftdownPushButton->setObjectName(QStringLiteral("leftdownPushButton"));

        gridLayout_3->addWidget(leftdownPushButton, 2, 0, 1, 1);

        downPushButton_2 = new QPushButton(panWidget);
        downPushButton_2->setObjectName(QStringLiteral("downPushButton_2"));

        gridLayout_3->addWidget(downPushButton_2, 2, 1, 1, 1);

        rightdownPushButton_2 = new QPushButton(panWidget);
        rightdownPushButton_2->setObjectName(QStringLiteral("rightdownPushButton_2"));

        gridLayout_3->addWidget(rightdownPushButton_2, 2, 2, 1, 1);


        verticalLayout_6->addWidget(panWidget);

        speedWidget = new QWidget(page);
        speedWidget->setObjectName(QStringLiteral("speedWidget"));
        horizontalLayout_2 = new QHBoxLayout(speedWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        decreaseLabel = new QLabel(speedWidget);
        decreaseLabel->setObjectName(QStringLiteral("decreaseLabel"));
        decreaseLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(decreaseLabel);

        speedHorizontalSlider = new QSlider(speedWidget);
        speedHorizontalSlider->setObjectName(QStringLiteral("speedHorizontalSlider"));
        speedHorizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(speedHorizontalSlider);

        increaseLabel = new QLabel(speedWidget);
        increaseLabel->setObjectName(QStringLiteral("increaseLabel"));
        increaseLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(increaseLabel);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 5);
        horizontalLayout_2->setStretch(2, 1);

        verticalLayout_6->addWidget(speedWidget);

        cameraWidget = new QWidget(page);
        cameraWidget->setObjectName(QStringLiteral("cameraWidget"));
        gridLayout_5 = new QGridLayout(cameraWidget);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        tiltDecreasePushButton = new QPushButton(cameraWidget);
        tiltDecreasePushButton->setObjectName(QStringLiteral("tiltDecreasePushButton"));

        gridLayout_5->addWidget(tiltDecreasePushButton, 0, 0, 1, 1);

        tiltLabel = new QLabel(cameraWidget);
        tiltLabel->setObjectName(QStringLiteral("tiltLabel"));
        tiltLabel->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(tiltLabel, 0, 1, 1, 1);

        tiltIncreasePushButton = new QPushButton(cameraWidget);
        tiltIncreasePushButton->setObjectName(QStringLiteral("tiltIncreasePushButton"));

        gridLayout_5->addWidget(tiltIncreasePushButton, 0, 2, 1, 1);

        zoomDecreasePushButton = new QPushButton(cameraWidget);
        zoomDecreasePushButton->setObjectName(QStringLiteral("zoomDecreasePushButton"));

        gridLayout_5->addWidget(zoomDecreasePushButton, 1, 0, 1, 1);

        zoomLabel = new QLabel(cameraWidget);
        zoomLabel->setObjectName(QStringLiteral("zoomLabel"));
        zoomLabel->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(zoomLabel, 1, 1, 1, 1);

        zoomIncreasePushButton = new QPushButton(cameraWidget);
        zoomIncreasePushButton->setObjectName(QStringLiteral("zoomIncreasePushButton"));

        gridLayout_5->addWidget(zoomIncreasePushButton, 1, 2, 1, 1);

        apertureDecreasePushButton = new QPushButton(cameraWidget);
        apertureDecreasePushButton->setObjectName(QStringLiteral("apertureDecreasePushButton"));

        gridLayout_5->addWidget(apertureDecreasePushButton, 2, 0, 1, 1);

        apertureLabel = new QLabel(cameraWidget);
        apertureLabel->setObjectName(QStringLiteral("apertureLabel"));
        apertureLabel->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(apertureLabel, 2, 1, 1, 1);

        apertureIncreasePushButton = new QPushButton(cameraWidget);
        apertureIncreasePushButton->setObjectName(QStringLiteral("apertureIncreasePushButton"));

        gridLayout_5->addWidget(apertureIncreasePushButton, 2, 2, 1, 1);


        verticalLayout_6->addWidget(cameraWidget);

        colourWidget = new QWidget(page);
        colourWidget->setObjectName(QStringLiteral("colourWidget"));
        gridLayout_4 = new QGridLayout(colourWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        brightnessLabel = new QLabel(colourWidget);
        brightnessLabel->setObjectName(QStringLiteral("brightnessLabel"));
        brightnessLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(brightnessLabel, 0, 0, 1, 1);

        brightnessHorizontalSlider = new QSlider(colourWidget);
        brightnessHorizontalSlider->setObjectName(QStringLiteral("brightnessHorizontalSlider"));
        brightnessHorizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(brightnessHorizontalSlider, 0, 1, 1, 1);

        hueLabel = new QLabel(colourWidget);
        hueLabel->setObjectName(QStringLiteral("hueLabel"));

        gridLayout_4->addWidget(hueLabel, 1, 0, 1, 1);

        hueHorizontalSlider = new QSlider(colourWidget);
        hueHorizontalSlider->setObjectName(QStringLiteral("hueHorizontalSlider"));
        hueHorizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(hueHorizontalSlider, 1, 1, 1, 1);

        contrastHorizontalSlider = new QSlider(colourWidget);
        contrastHorizontalSlider->setObjectName(QStringLiteral("contrastHorizontalSlider"));
        contrastHorizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(contrastHorizontalSlider, 2, 1, 1, 1);

        saturationHorizontalSlider = new QSlider(colourWidget);
        saturationHorizontalSlider->setObjectName(QStringLiteral("saturationHorizontalSlider"));
        saturationHorizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(saturationHorizontalSlider, 3, 1, 1, 1);

        defaultValuePushButton = new QPushButton(colourWidget);
        defaultValuePushButton->setObjectName(QStringLiteral("defaultValuePushButton"));

        gridLayout_4->addWidget(defaultValuePushButton, 4, 0, 1, 2);

        contrastLabel = new QLabel(colourWidget);
        contrastLabel->setObjectName(QStringLiteral("contrastLabel"));

        gridLayout_4->addWidget(contrastLabel, 2, 0, 1, 1);

        saturationLabel = new QLabel(colourWidget);
        saturationLabel->setObjectName(QStringLiteral("saturationLabel"));

        gridLayout_4->addWidget(saturationLabel, 3, 0, 1, 1);


        verticalLayout_6->addWidget(colourWidget);

        verticalLayout_6->setStretch(0, 3);
        verticalLayout_6->setStretch(1, 1);
        verticalLayout_6->setStretch(2, 3);
        verticalLayout_6->setStretch(3, 5);
        panelStackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        verticalLayout_8 = new QVBoxLayout(page_2);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        calendarWidget = new QCalendarWidget(page_2);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));

        verticalLayout_8->addWidget(calendarWidget);

        durationWidget = new QWidget(page_2);
        durationWidget->setObjectName(QStringLiteral("durationWidget"));
        gridLayout_6 = new QGridLayout(durationWidget);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        fromLabel = new QLabel(durationWidget);
        fromLabel->setObjectName(QStringLiteral("fromLabel"));
        fromLabel->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(fromLabel, 0, 0, 1, 1);

        fromTimeEdit = new QTimeEdit(durationWidget);
        fromTimeEdit->setObjectName(QStringLiteral("fromTimeEdit"));
        fromTimeEdit->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(fromTimeEdit, 0, 1, 1, 1);

        toLabel = new QLabel(durationWidget);
        toLabel->setObjectName(QStringLiteral("toLabel"));
        toLabel->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(toLabel, 1, 0, 1, 1);

        toTimeEdit = new QTimeEdit(durationWidget);
        toTimeEdit->setObjectName(QStringLiteral("toTimeEdit"));
        toTimeEdit->setAlignment(Qt::AlignCenter);
        toTimeEdit->setTime(QTime(23, 59, 59));

        gridLayout_6->addWidget(toTimeEdit, 1, 1, 1, 1);

        gridLayout_6->setColumnStretch(0, 1);
        gridLayout_6->setColumnStretch(1, 3);

        verticalLayout_8->addWidget(durationWidget);

        resualtWidget = new QWidget(page_2);
        resualtWidget->setObjectName(QStringLiteral("resualtWidget"));
        verticalLayout_7 = new QVBoxLayout(resualtWidget);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        searchPushButton = new QPushButton(resualtWidget);
        searchPushButton->setObjectName(QStringLiteral("searchPushButton"));

        verticalLayout_7->addWidget(searchPushButton);

        resualtListWidget = new QListWidget(resualtWidget);
        resualtListWidget->setObjectName(QStringLiteral("resualtListWidget"));

        verticalLayout_7->addWidget(resualtListWidget);


        verticalLayout_8->addWidget(resualtWidget);

        verticalLayout_8->setStretch(0, 8);
        verticalLayout_8->setStretch(1, 2);
        verticalLayout_8->setStretch(2, 10);
        panelStackedWidget->addWidget(page_2);

        verticalLayout_4->addWidget(panelStackedWidget);


        verticalLayout_2->addWidget(panelGroupBox);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 5);

        horizontalLayout->addWidget(panelWidget);

        horizontalLayout->setStretch(0, 5);
        horizontalLayout->setStretch(1, 1);

        retranslateUi(VideoDisplay);
        QObject::connect(realtimeVideoPushButton, SIGNAL(clicked()), VideoDisplay, SLOT(changeToRealtime()));
        QObject::connect(historicVideoPushButton, SIGNAL(clicked()), VideoDisplay, SLOT(changeToHistoric()));
        QObject::connect(playOrPausePushButton, SIGNAL(clicked()), VideoDisplay, SLOT(playOrPause()));

        controlStackedWidget->setCurrentIndex(0);
        panelStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(VideoDisplay);
    } // setupUi

    void retranslateUi(QWidget *VideoDisplay)
    {
        VideoDisplay->setWindowTitle(QApplication::translate("VideoDisplay", "VideoDisplay", 0));
        leftupPushButton->setText(QApplication::translate("VideoDisplay", "\342\206\226", 0));
        upPushButton->setText(QApplication::translate("VideoDisplay", "\342\206\221", 0));
        rightupPushButton->setText(QApplication::translate("VideoDisplay", "\342\206\227", 0));
        leftPushButton->setText(QApplication::translate("VideoDisplay", "\342\206\220", 0));
        circlePushButton->setText(QApplication::translate("VideoDisplay", "123", 0));
        rightPushButton->setText(QApplication::translate("VideoDisplay", "\342\206\222", 0));
        leftdownpushButton->setText(QApplication::translate("VideoDisplay", "\342\206\231", 0));
        downPushButton->setText(QApplication::translate("VideoDisplay", "\342\206\223", 0));
        rightdownPushButton->setText(QApplication::translate("VideoDisplay", "\342\206\230", 0));
        stopPushButton->setText(QApplication::translate("VideoDisplay", "\345\201\234\346\255\242", 0));
        lastPushButton->setText(QApplication::translate("VideoDisplay", "\344\270\212\344\270\200\344\270\252", 0));
        playOrPausePushButton->setText(QApplication::translate("VideoDisplay", "\346\222\255\346\224\276/\346\232\202\345\201\234", 0));
        nextPushButton->setText(QApplication::translate("VideoDisplay", "\344\270\213\344\270\200\344\270\252", 0));
        yesterdayPushButton->setText(QApplication::translate("VideoDisplay", "<", 0));
        tomorrowPushButton->setText(QApplication::translate("VideoDisplay", ">", 0));
        videoGroupBox->setTitle(QApplication::translate("VideoDisplay", "\350\247\206\351\242\221\347\247\215\347\261\273", 0));
        realtimeVideoPushButton->setText(QApplication::translate("VideoDisplay", "\345\256\236\346\227\266\350\247\206\351\242\221", 0));
        historicVideoPushButton->setText(QApplication::translate("VideoDisplay", "\345\216\206\345\217\262\350\247\206\351\242\221", 0));
        panelGroupBox->setTitle(QApplication::translate("VideoDisplay", "\350\247\206\351\242\221\351\235\242\346\235\277", 0));
        leftupPushButton_2->setText(QApplication::translate("VideoDisplay", "\342\206\226", 0));
        upPushButton_2->setText(QApplication::translate("VideoDisplay", "\342\206\221", 0));
        rightupPushButton_2->setText(QApplication::translate("VideoDisplay", "\342\206\227", 0));
        leftPushButton_2->setText(QApplication::translate("VideoDisplay", "\342\206\220", 0));
        circlePushButton_2->setText(QApplication::translate("VideoDisplay", "\342\212\225", 0));
        rightPushButton_2->setText(QApplication::translate("VideoDisplay", "\342\206\222", 0));
        leftdownPushButton->setText(QApplication::translate("VideoDisplay", "\342\206\231", 0));
        downPushButton_2->setText(QApplication::translate("VideoDisplay", "\342\206\223", 0));
        rightdownPushButton_2->setText(QApplication::translate("VideoDisplay", "\342\206\230", 0));
        decreaseLabel->setText(QApplication::translate("VideoDisplay", "-", 0));
        increaseLabel->setText(QApplication::translate("VideoDisplay", "+", 0));
        tiltDecreasePushButton->setText(QApplication::translate("VideoDisplay", "-", 0));
        tiltLabel->setText(QApplication::translate("VideoDisplay", "\345\217\230\345\200\215", 0));
        tiltIncreasePushButton->setText(QApplication::translate("VideoDisplay", "+", 0));
        zoomDecreasePushButton->setText(QApplication::translate("VideoDisplay", "-", 0));
        zoomLabel->setText(QApplication::translate("VideoDisplay", "\345\217\230\347\204\246", 0));
        zoomIncreasePushButton->setText(QApplication::translate("VideoDisplay", "+", 0));
        apertureDecreasePushButton->setText(QApplication::translate("VideoDisplay", "-", 0));
        apertureLabel->setText(QApplication::translate("VideoDisplay", "\345\205\211\345\234\210", 0));
        apertureIncreasePushButton->setText(QApplication::translate("VideoDisplay", "+", 0));
        brightnessLabel->setText(QApplication::translate("VideoDisplay", "\344\272\256\345\272\246", 0));
        hueLabel->setText(QApplication::translate("VideoDisplay", "\350\211\262\345\272\246", 0));
        defaultValuePushButton->setText(QApplication::translate("VideoDisplay", "\346\201\242\345\244\215\351\273\230\350\256\244\345\200\274", 0));
        contrastLabel->setText(QApplication::translate("VideoDisplay", "\345\257\271\346\257\224\345\272\246", 0));
        saturationLabel->setText(QApplication::translate("VideoDisplay", "\351\245\261\345\222\214\345\272\246", 0));
        fromLabel->setText(QApplication::translate("VideoDisplay", "\344\273\216", 0));
        toLabel->setText(QApplication::translate("VideoDisplay", "\345\210\260", 0));
        searchPushButton->setText(QApplication::translate("VideoDisplay", "\346\237\245\350\257\242", 0));
    } // retranslateUi

};

namespace Ui {
    class VideoDisplay: public Ui_VideoDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEODISPLAY_H
