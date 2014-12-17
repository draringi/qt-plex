#ifndef QTPLEX_GLOBAL_H
#define QTPLEX_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(QTPLEX_LIBRARY)
#  define QTPLEXSHARED_EXPORT Q_DECL_EXPORT
#else
#  define QTPLEXSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // QTPLEX_GLOBAL_H
