#include "stdafx.h"
#include "VideoDisplay.h"
#include "ui_VideoDisplay.h"
#include <QBuffer>
#include <QFile>

namespace Gui{
	VideoDisplay::VideoDisplay(QWidget *parent)
		: QWidget(parent)
		, m_VideoPlayer()
		, m_AVPlayer()
	{
		ui = new Ui::VideoDisplay();
		ui->setupUi(this);
		//m_VideoPlayer.setVideoOutput(ui->showWidget);
		m_AVPlayer.setRenderer(ui->showWidget);
		ui->showWidget->show();
		changeToRealtime();
	}

	VideoDisplay::~VideoDisplay()
	{
		delete ui;
	}

	void VideoDisplay::changeToRealtime()
	{
		ui->panelStackedWidget->setCurrentIndex(0);
		ui->controlStackedWidget->setCurrentIndex(0);
	}

	void VideoDisplay::changeToHistoric()
	{
		ui->panelStackedWidget->setCurrentIndex(1);
		ui->controlStackedWidget->setCurrentIndex(1);
	}

	void VideoDisplay::playOrPause()
	{
		//QByteArray *line = new QByteArray();
		//QFile file("C:/Users/Alan/Documents/Visual Studio 2013/Projects/VideoPlayer/Win32/Debug/test.h264");
		//if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
		//	qDebug() << "Can't open the file!" << endl;
		//}
		//while (!file.atEnd()) {
		//	*line += file.readLine();
		//}
		//QBuffer *buf = new QBuffer(line);
		//if (buf->open(QIODevice::ReadWrite)) {
		//	m_AVPlayer.setIODevice(buf);
		//}
		//QMediaContent mediaContent;
		//m_VideoPlayer.setMedia(mediaContent, buf);
		//m_VideoPlayer.setMedia(QUrl::fromLocalFile("C:/Users/Alan/Documents/visual studio 2013/Projects/VideoPlayer/x64/Debug/test.h264"));
		//m_VideoPlayer.setVideoOutput(ui->showWidget);
		//m_VideoPlayer.play();	
		
		
		//m_AVPlayer.play();


		//m_AVPlayer.play("C:/Users/Alan/Documents/Visual Studio 2013/Projects/VideoPlayer/Win32/Debug/test.h264");

		AVInput* in = AVInput::create("QFile");
		in->setUrl("C:/Users/Alan/Documents/Visual Studio 2013/Projects/VideoPlayer/Win32/Debug/test.h264");
		m_AVPlayer.setInput(in);
		m_AVPlayer.play();
	}
}