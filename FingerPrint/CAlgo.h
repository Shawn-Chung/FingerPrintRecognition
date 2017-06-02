#ifndef CALGO_H
#define CALGO_H

#include <QString>
#include "CImage.h"


class CAlgo
{
public:
    CAlgo(QString name){m_strName = name;}

    virtual int exec(CImage in, CImage &out);

private:
    CImage m_inImage;
    CImage m_outImage;
    QString m_strName;
};

#endif // CALGO_H
