#ifndef AVDECODER_H
#define AVDECODER_H
#include <QtCore/QVariant>
#include <QtCore/QObject>
#include "avdecoder_global.h"

class QByteArray;
struct AVCodecContext;
struct AVFrame;

class AVDecoderPrivate;
class AVDECODER_EXPORT AVDecoder : public QObject
{
	Q_OBJECT
	DPTR_DECLARE_PRIVATE(AVDecoder)
public:
	AVDecoder();
	virtual ~AVDecoder();
	virtual QString name() const;
	virtual QString description() const;
	/*!
	* default is open FFmpeg codec context
	* codec config must be done before open
	* NOTE: open() and close() are not thread safe. You'd better call them in the same thread.
	*/
	virtual bool open();
	virtual bool close();
	bool isOpen() const;
	virtual void flush();
	void setCodecContext(AVCodecContext* codecCtx); //protected
	AVCodecContext* codecContext() const;
	// force a codec
	void setCodecName(const QString& name);
	QString codecName() const;
	/*not available if AVCodecContext == 0*/
	bool isAvailable() const;
	virtual bool prepare(); //if resampler or image converter set, call it
	virtual bool decode(const QByteArray& encoded) = 0;
	QByteArray data() const; //decoded data
	int undecodedSize() const;

	// avcodec_open2
	/*!
	* \brief setOptions
	* 1. set options for AVCodecContext. if contains key "avcodec", use it's value as a hash to set. a value of hash type is ignored.
	* libav's AVDictionary. we can ignore the flags used in av_dict_xxx because we can use hash api.
	* In addition, av_dict is slow.
	* empty means default options in ffmpeg
	* 2. set properties for AVDecoder. use the value of key AVDecoder::name() or it's lower case as a hash to set properties.
	* \param dict
	* example:
	*  "avcodec": {"vismv":"pf"}, "vaapi":{"display":"DRM"}
	* equals
	*  "vismv":"pf", "vaapi":{"display":"DRM"}
	*/
	void setOptions(const QVariantHash &dict);
	QVariantHash options() const;

protected:
	AVDecoder(AVDecoderPrivate& d);

	DPTR_DECLARE(AVDecoder)

};

#endif // AVDECODER_H
