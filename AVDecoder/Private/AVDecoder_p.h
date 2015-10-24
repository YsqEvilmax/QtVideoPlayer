#ifndef AVDECODER_P_H
#define AVDECODER_P_H

#include <QtCore/QByteArray>
#include <QtCore/QHash>
#include <QtCore/QMutex>
#include <QtCore/QThread>
#include "dptr.h"
//#include "QtAV/private/AVCompat.h"

class AVDecoderPrivate : public DPtrPrivate<AVDecoder>
{
public:
	AVDecoderPrivate() :
		codec_ctx(0)
		, available(true)
		, is_open(false)
		, frame(0)
		, got_frame_ptr(0)
		, undecoded_size(0)
		, dict(0)
	{
		frame = av_frame_alloc();
	}
	virtual ~AVDecoderPrivate() {
		if (frame) {
			av_frame_free(&frame);
			frame = 0;
		}
		if (dict) {
			av_dict_free(&dict);
		}
	}
	virtual bool open() { return true; }
	virtual void close() {}

	AVCodecContext *codec_ctx; //set once and not change
	bool available; //TODO: true only when context(and hw ctx) is ready
	bool is_open;
	AVFrame *frame; //set once and not change
	QByteArray decoded;
	int got_frame_ptr;
	int undecoded_size;
	QMutex mutex;
	QString codec_name;
	QVariantHash options;
	AVDictionary *dict;
};
#endif // AVDECODER_P_H
