#ifndef XDMA_LIB_GLOBAL_H
#define XDMA_LIB_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(XDMA_LIB_LIBRARY)
#  define XDMA_LIBSHARED_EXPORT Q_DECL_EXPORT
#else
#  define XDMA_LIBSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // XDMA_LIB_GLOBAL_H
