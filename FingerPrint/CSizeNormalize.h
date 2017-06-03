/************************************************************************
* 版权所有
*
* 文件名称： // CSizeNormalize.h
* 文件标识： //
* 内容摘要： // 尺寸归一化类的申明
* 其它说明： // 外部模块调用 exec 实现
* 当前版本： //
* 作    者： // ShawnChung
* 完成日期： // 2017年06月03日
*
* 修改记录1：//
*    修改日期：
*    版 本 号：
*    修 改 人：
*    修改内容：
* 修改记录2：…
************************************************************************/
#ifndef CSIZENORMALIZE_H
#define CSIZENORMALIZE_H

#include <QString>
#include "CAlgo.h"
#include "CImage.h"

class CSizeNormalize : public CAlgo
{
public:
    CSizeNormalize(QString name):CAlgo(name) {}
    virtual ~CSizeNormalize(){}


    virtual int exec(CImage in, CImage &out);

private:
    int sizeNormalizeV1(CImage in, CImage &out);
    int sizeNormalizeV2(CImage in, CImage &out);
};

#endif // CSIZENORMALIZE_H
