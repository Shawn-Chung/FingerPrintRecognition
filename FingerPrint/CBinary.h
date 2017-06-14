/************************************************************************
* 版权所有
*
* 文件名称： // CBinary.h
* 文件标识： //
* 内容摘要： // 二值化算法基类，实现一些常见的二值化算法
* 其它说明： // 供其他算法调用
* 当前版本： //
* 作    者： // ShawnChung
* 完成日期： // 2017年06月14日
*
* 修改记录1：//
*    修改日期：
*    版 本 号：
*    修 改 人：
*    修改内容：
* 修改记录2：…
************************************************************************/
#ifndef CBINARY_H
#define CBINARY_H
#include "CAlgo.h"

class CBinary : public CAlgo
{
public:
    CBinary(QString name);

    virtual int exec(CImage in, CImage &out);
};

#endif // CBINARY_H
