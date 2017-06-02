#ifndef CSIZENORMALIZE_H
#define CSIZENORMALIZE_H

#include <QString>
#include "CAlgo.h"
#include "CImage.h"

class CSizeNormalize : public CAlgo
{
public:
    CSizeNormalize(QString name):CAlgo(name) {}


    int exec(CImage in, CImage &out);
};

#endif // CSIZENORMALIZE_H
