#ifndef LIBRARYTEST_GLOBAL_H
#define LIBRARYTEST_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(LIBRARYTEST_LIBRARY)
#  define LIBRARYTEST_EXPORT Q_DECL_EXPORT
#else
#  define LIBRARYTEST_EXPORT Q_DECL_IMPORT
#endif

#endif // LIBRARYTEST_GLOBAL_H
