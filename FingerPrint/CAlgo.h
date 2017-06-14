/************************************************************************
* 版权所有
*
* 文件名称： // CAlgo.h
* 文件标识： //
* 内容摘要： // 算法基类，实现一些基础数学函数
* 其它说明： // 供子类中的算法调用
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
#ifndef CALGO_H
#define CALGO_H

#include <QString>
#include "CImage.h"

#define M_PI				3.1415926
#define M_EPI				57.29578		//180/M_PI

class CAlgo
{
public:
    CAlgo(QString name){m_strName = name;}
    virtual ~CAlgo();

    virtual int exec(CImage in, CImage &out);

    static const int sin_10000[91];

protected:
    int getSin(int angle);
    int getCos(int angle);
    int getAngle90In180(int angle1, int angle2);
    int getAngle180In360(int angle1, int angle2);
    int getAngle360In360(int angle1, int angle2);
    int anglePoints(int x0, int y0, int x1, int y1);

private:
    CImage m_inImage;
    CImage m_outImage;
    QString m_strName;
};

#endif // CALGO_H
