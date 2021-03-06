#ifndef CIMAGE_H
#define CIMAGE_H

#include <QString>
#include <QImage>

class CImage
{
public:
    CImage();
    CImage(int width, int height);
    CImage & operator =(const CImage &other);


    int getWidth() { return m_qImage.width(); }
    int getHeight() { return m_qImage.height(); }
    uchar *getLinePtr(int index);
    QString getName() { return m_strName; }
    QImage getQImage() { return m_qImage; }
    int setQImage(QImage img) { m_qImage = img; return 0;}
    int setFileName(QString name) { m_strName = name; return 0;}
    bool isEmpty(){return m_qImage.isNull();}
private:
    QString m_strName;
    QImage m_qImage;
};

#endif // CIMAGE_H
