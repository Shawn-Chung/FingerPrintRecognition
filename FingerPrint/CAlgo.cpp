/************************************************************************
* 版权所有
*
* 文件名称： // CAlgo.cpp
* 文件标识： //
* 内容摘要： // 算法基类实现文件
* 其它说明： // 其它内容的说明
* 当前版本： //
* 作    者： // ShawnChung
* 完成日期： // 2017年06月14日
*
* 修改记录1：// 修改历史记录，包括修改日期、修改者及修改内容
*    修改日期：
*    版 本 号：
*    修 改 人：
*    修改内容：
* 修改记录2：…
************************************************************************/
#include "CAlgo.h"
#include "easylogging++.h"

const int CAlgo::sin_10000[91] = {
    0,     //0
    175,   //1
    349,   //2
    523,   //3
    698,   //4
    872,   //5
    1045,  //6
    1219,  //7
    1392,  //8
    1564,  //9
    1736,  //10
    1908,  //11
    2079,  //12
    2250,  //13
    2419,  //14
    2588,  //15
    2756,  //16
    2924,  //17
    3090,  //18
    3256,  //19
    3420,  //20
    3584,  //21
    3746,  //22
    3907,  //23
    4067,  //24
    4226,  //25
    4384,  //26
    4540,  //27
    4695,  //28
    4848,  //29
    5000,  //30
    5150,  //31
    5299,  //32
    5446,  //33
    5592,  //34
    5736,  //35
    5878,  //36
    6018,  //37
    6157,  //38
    6293,  //39
    6428,  //40
    6561,  //41
    6691,  //42
    6820,  //43
    6947,  //44
    7071,  //45
    7193,  //46
    7314,  //47
    7431,  //48
    7547,  //49
    7660,  //50
    7771,  //51
    7880,  //52
    7986,  //53
    8090,  //54
    8192,  //55
    8290,  //56
    8387,  //57
    8480,  //58
    8572,  //59
    8660,  //60
    8746,  //61
    8829,  //62
    8910,  //63
    8988,  //64
    9063,  //65
    9135,  //66
    9205,  //67
    9272,  //68
    9336,  //69
    9397,  //70
    9455,  //71
    9511,  //72
    9563,  //73
    9613,  //74
    9659,  //75
    9703,  //76
    9744,  //77
    9781,  //78
    9816,  //79
    9848,  //80
    9877,  //81
    9903,  //82
    9925,  //83
    9945,  //84
    9962,  //85
    9976,  //86
    9986,  //87
    9994,  //88
    9998,  //89
    10000  //90

};

CAlgo::~CAlgo()
{

}

CAlgo::exec(CImage in, CImage &out)
{
    LOG(INFO) << "CAlgo exec nothing!";
}

/**************************************************************************
* 函数名称： getSin(int angle)
* 功能描述： 获取 角度 的 Sin 值
* 访问的表：
* 修改的表：
* 输入参数： int angle   角度（0-360）
* 输出参数：
* 返 回 值： int  角度对应的 Sin值 放大了10000倍，避免浮点运算
* 其它说明：
* 修改日期    版本号     修改人	     修改内容
* -----------------------------------------------
* 2017/06/14  V1.0	    ShawnChung	      新增
**************************************************************************/

int CAlgo::getSin(int angle)
{
    if (angle <= 90)
    {
        return sin_10000[angle];
    }
    else if (angle <= 180)
    {
        return sin_10000[180-angle];
    }
    else if (angle <= 270)
    {
        return -sin_10000[angle-180];
    } else
    {
        return -sin_10000[360-angle];
    }
}
/**************************************************************************
* 函数名称： getCos(int angle)
* 功能描述： 获取 角度 的 Cos 值
* 访问的表：
* 修改的表：
* 输入参数： int angle   角度（0-360）
* 输出参数：
* 返 回 值： int  角度对应的 Cos值 放大了10000倍，避免浮点运算
* 其它说明：
* 修改日期    版本号     修改人	     修改内容
* -----------------------------------------------
* 2017/06/14  V1.0	    ShawnChung	      新增
**************************************************************************/

int CAlgo::getCos(int angle)
{
    if (angle <= 90)
    {
        return sin_10000[90-angle];
    }
    else if (angle <= 180)
    {
        return -sin_10000[angle-90];
    }
    else if (angle <= 270)
    {
        return -sin_10000[270-angle];
    }
    else
    {
        return sin_10000[angle-270];
    }
}
/**************************************************************************
* 函数名称： getAngle90In180(int angle1, int angle2)
* 功能描述： 求两个 角度 的夹角
* 访问的表：
* 修改的表：
* 输入参数： int angle1   角度1（0-180）
*          int angle2   角度2（0-180）
* 输出参数：
* 返 回 值： int  夹角 （0-90）
* 其它说明：
* 修改日期    版本号     修改人	     修改内容
* -----------------------------------------------
* 2017/06/14  V1.0	    ShawnChung	      新增
**************************************************************************/
int CAlgo::getAngle90In180(int angle1, int angle2)
{
    int dit = abs(angle1-angle2);


    if(dit > 90)
    {
        dit = 180-dit;
    }

    return dit;
}

/**************************************************************************
* 函数名称： getAngle180In360(int angle1, int angle2)
* 功能描述： 求两个 角度 的夹角
* 访问的表：
* 修改的表：
* 输入参数： int angle1   角度1（0-360）
*          int angle2   角度2（0-360）
* 输出参数：
* 返 回 值： int  夹角 （0-180）
* 其它说明：
* 修改日期    版本号     修改人	     修改内容
* -----------------------------------------------
* 2017/06/14  V1.0	    ShawnChung	      新增
**************************************************************************/
int  CAlgo::getAngle180In360(int angle1, int angle2)
{
    int dit = abs(angle1 - angle2);

    if(dit > 180)
    {
        return (360 - dit);
    }
    else
    {
        return dit;
    }
}

/**************************************************************************
* 函数名称： getAngle360In360(int angle1, int angle2)
* 功能描述： 求逆时针方向 两个角度 的距离（夹角）
* 访问的表：
* 修改的表：
* 输入参数： int angle1   角度1（0-360）
*          int angle2   角度2（0-360）
* 输出参数：
* 返 回 值： int  夹角 （0-360）
* 其它说明：
* 修改日期    版本号     修改人	     修改内容
* -----------------------------------------------
* 2017/06/14  V1.0	    ShawnChung	      新增
**************************************************************************/
int CAlgo::getAngle360In360(int angle1, int angle2)
{
    int  dit = angle2-angle1;

    if(dit < 0)
    {
        dit += 360;
    }

    return dit;
}

/**************************************************************************
* 函数名称： anglePoints(int x0, int y0, int x1, int y1)
* 功能描述： 求两个点连线与x轴的夹角
* 访问的表：
* 修改的表：
* 输入参数： int x0   第一个点的 x 坐标
*          int y0   第一个点的 y 坐标
*          int x1   第二个点的 x 坐标
*          int y1   第二个点的 y 坐标
* 输出参数：
* 返 回 值： int  夹角 （0-360）
* 其它说明：
* 修改日期    版本号     修改人	     修改内容
* -----------------------------------------------
* 2017/06/14  V1.0	    ShawnChung	      新增
**************************************************************************/
int CAlgo::anglePoints(int x0, int y0, int x1, int y1)
{
    double angle = 0. ;

    angle = atan2((double)(y1-y0), (double)(x1-x0));
    // 弧度转化到0 - 2*M_PI
    if(angle < 0)
    {
        angle += 2*M_PI;
    }
    // 弧度转化为角度
    return (int)(angle*M_EPI + 0.5);
}















