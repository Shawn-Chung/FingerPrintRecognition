/************************************************************************
* 版权所有
*
* 文件名称： // CSizeNormalize.cpp
* 文件标识： //
* 内容摘要： // 尺寸归一化类的实现文件
* 其它说明： // 其它内容的说明
* 当前版本： //
* 作    者： // ShawnChung
* 完成日期： // 2017年06月03日
*
* 修改记录1：// 修改历史记录，包括修改日期、修改者及修改内容
*    修改日期：
*    版 本 号：
*    修 改 人：
*    修改内容：
* 修改记录2：…
************************************************************************/
#include "CSizeNormalize.h"


/**************************************************************************
* 函数名称： exec(CImage in, CImage &out)
* 功能描述： 执行归一化功能，调用类内子函数实现
* 访问的表：
* 修改的表：
* 输入参数： CImage in   原图像
* 输出参数： CImage &out  输出图像
* 返 回 值： 0 成功     -1 出现错误
* 其它说明：
* 修改日期    版本号     修改人	     修改内容
* -----------------------------------------------
* 2017/06/03  V1.0	    ShawnChung	      新增
**************************************************************************/
int CSizeNormalize::exec(CImage in, CImage &out)
{
    return sizeNormalizeV2(in, out);
}

/**************************************************************************
* 函数名称： CSizeNormalize::sizeNormalizeV1(CImage in, CImage &out)
* 功能描述： 尺度归一化（缩小）（隔行格列抽取）
* 访问的表：
* 修改的表：
* 输入参数： CImage in   原图像
* 输出参数： CImage &out  输出图像
* 返 回 值： 0 成功     -1 出现错误
* 其它说明：
* 修改日期    版本号     修改人	     修改内容
* -----------------------------------------------
* 2017/06/03  V1.0	    ShawnChung	      新增
**************************************************************************/
int CSizeNormalize::sizeNormalizeV1(CImage in, CImage &out)
{
    Q_ASSERT(!in.isEmpty() && !out.isEmpty());

    uchar *pSrc = NULL;
    uchar *pDst = NULL;

    for(int j=0; j<out.getHeight(); ++j)
    {
        pDst = out.getLinePtr(j);
        pSrc = in.getLinePtr(2*j);
        for(int i=0; i<out.getWidth(); ++i)
        {
            pDst[i] = pSrc[2*i];
        }
    }

    return 0;
}
/**************************************************************************
* 函数名称： sizeNormalizeV2(CImage in, CImage &out)
* 功能描述： 尺寸归一化，使用双线性插值方法，可放大、可缩小
* 访问的表：
* 修改的表：
* 输入参数： CImage in   原图像
* 输出参数： CImage &out  输出图像
* 返 回 值： 0 成功     -1 出现错误
* 其它说明：
* 修改日期    版本号     修改人	     修改内容
* -----------------------------------------------
* 2017/06/03  V1.0	    ShawnChung	      新增
**************************************************************************/
int CSizeNormalize::sizeNormalizeV2(CImage in, CImage &out)
{
    Q_ASSERT(!in.isEmpty() && !out.isEmpty());

    //多处使用了 放大 scale 倍数再计算，为了避免 浮点数计算。
    int scale = 100;
    //放大了 scale 倍
    int scale_x = in.getWidth() * scale / out.getWidth();
    int scale_y = in.getHeight() * scale / out.getHeight();
    int x_left = 0;
    int x_right = 0;
    int y_top = 0;
    int y_bottom = 0;
    int pix_topleft = 0;
    int pix_topright = 0;
    int pix_bottomleft = 0;
    int pix_bottomright = 0;
    int pix_top = 0;
    int pix_bottom = 0;
    int pix = 0;

    for(int j=0; j<out.getHeight(); ++j)
    {
        y_top = j * scale_y / scale;
        y_bottom = y_top + 1;
        //防止超出原图像坐标的边界
        if(y_top >= in.getHeight())
        {
            y_top = in.getHeight()-1;
        }
        if(y_bottom >= in.getHeight())
        {
            y_bottom = in.getHeight()-1;
        }
        //放大了 scale 倍
        int dy = j * scale_y - y_top * scale;
        uchar *pDst = out.getLinePtr(j);
        uchar *pSrcTop = in.getLinePtr(y_top);
        uchar *pSrcBottom = in.getLinePtr(y_bottom);

        for(int i=0; i<out.getWidth(); ++i)
        {
            x_left = i * scale_x / scale;
            x_right = x_left + 1;
            //防止超出原图像坐标的边界
            if(x_left >= in.getWidth())
            {
                x_left = in.getWidth()-1;
            }
            if(x_right >= in.getWidth())
            {
                x_right = in.getWidth()-1;
            }
            //放大了 scale 倍
            int dx = i * scale_x - x_left * scale;

            pix_topleft = pSrcTop[x_left];
            pix_topright = pSrcTop[x_right];
            pix_bottomleft = pSrcBottom[x_left];
            pix_bottomright = pSrcBottom[x_right];

            pix_top = pix_topleft*(scale-dx) + dx*pix_topright;
            pix_bottom = pix_bottomleft*(scale-dx) + dx*pix_bottomright;

            //pix = pix_top*(scale-dy) + dy*pix_bottom; //放大了 scale * scale 倍
            pix = dy*(pix_bottom-pix_top)/scale + pix_top;

            pDst[i] = pix / scale;
        }
    }

    return 0;
}
