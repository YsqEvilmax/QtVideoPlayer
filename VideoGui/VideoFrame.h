#ifndef VIDEOFRAM_H
#define VIDEOFRAM_H

#include <QtWidgets/QMainWindow>
namespace Ui {class VideoFrame;};

namespace Gui{
	class VideoFrame : public QMainWindow
	{
		Q_OBJECT

	public:
		VideoFrame(QWidget *parent = 0);
		~VideoFrame();

	private:
		Ui::VideoFrame *ui;
	};
}


#endif // VIDEOFRAM_H
