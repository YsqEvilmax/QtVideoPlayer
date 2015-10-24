#include "stdafx.h"
#include "VideoFrame.h"
#include "ui_VideoFrame.h"

namespace Gui{
	VideoFrame::VideoFrame(QWidget *parent)
		: QMainWindow(parent)
	{
		ui = new Ui::VideoFrame();
		ui->setupUi(this);
	}

	VideoFrame::~VideoFrame()
	{
		delete ui;
	}
}


