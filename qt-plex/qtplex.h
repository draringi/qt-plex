#ifndef QTPLEX_H
#define QTPLEX_H

#include "qt-plex_global.h"
#include <QString>

class QTPLEXSHARED_EXPORT Qtplex
{
private:
    QString uuid;
    QString product_name;
    QString version;
    QString device;
    QString os;
    QString os_version;
public:
    Qtplex();
    void setUUID(Qstring uuid);
    void setProductVersion(QString version);
    void setProductName(Qstring product_name);
    void setDevice(QString device);
    void setOS(QString os);
    void setOSVersion(QString os_version);
};

#endif // QTPLEX_H
