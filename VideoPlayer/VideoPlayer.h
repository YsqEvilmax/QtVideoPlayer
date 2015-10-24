#ifndef VIDEOPLAYER_H
#define VIDEOPLAYER_H

#include "videoplayer_global.h"
#include <QMediaPlayer>

class VIDEOPLAYER_EXPORT VideoPlayer : public QMediaPlayer
{
	Q_OBJECT
public:
	VideoPlayer();
	~VideoPlayer();

private:

};

#endif // VIDEOPLAYER_H
