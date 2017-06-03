#include "CImage.h"
#include "easylogging++.h"

CImage::CImage()
{

}

CImage::CImage(int width, int height)
{
    QImage img(width, height, QImage::Format_Grayscale8);
    m_qImage = img.copy(0, 0, width, height);
}

CImage& CImage::operator =(const CImage &other)
{
    if(this == &other)
    {
        return *this;
    }

    m_strName = other.m_strName;
    m_qImage = other.m_qImage;

    return *this;
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
