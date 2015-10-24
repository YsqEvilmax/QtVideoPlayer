#ifndef VIDEODISPLAY_H
#define VIDEODISPLAY_H

#include <QWidget>
#include "../VideoPlayer/VideoPlayer.h"
#include "QtAV\QtAV.h"
using namespace QtAV;

namespace Ui {class VideoDisplay;};

namespace Gui{
	class VideoDisplay : public QWidget
	{
		Q_OBJECT

	public:
		VideoDisplay(QWidget *parent = 0);
		~VideoDisplay();

	private:
		Ui::VideoDisplay *ui;
		VideoPlayer m_VideoPlayer;
		AVPlayer m_AVPlayer;
		public slots:
		void changeToRealtime();
		void changeToHistoric();
		void playOrPause();
	};
}


#endif // VIDEODISPLAY_H
