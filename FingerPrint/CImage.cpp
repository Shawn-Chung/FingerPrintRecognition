#include "CImage.h"
#include "easylogging++.h"

CImage::CImage()
{

}

uchar *CImage::getLinePtr(int index)
{
    if(index >= getHeight())
    {
        LOG(INFO) << "the line num is big than image's height!";
        return  NULL;
    }
    else
    {
        return m_qImage.scanLine(index);
    }
}
