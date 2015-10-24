#ifndef AVDECODER_GLOBAL_H
#define AVDECODER_GLOBAL_H

#include <QtCore/qglobal.h>

#ifdef AVDECODER_LIB
# define AVDECODER_EXPORT Q_DECL_EXPORT
#else
# define AVDECODER_EXPORT Q_DECL_IMPORT
#endif

#if defined(BUILD_QTAV_LIB)
#  undef Q_AV_EXPORT
#  define Q_AV_EXPORT Q_DECL_EXPORT
#else
#  undef Q_AV_EXPORT
#  define Q_AV_EXPORT Q_DECL_IMPORT //only for vc?
#endif
#define Q_AV_PRIVATE_EXPORT Q_AV_EXPORT

#endif // AVDECODER_GLOBAL_H
