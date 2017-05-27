#include "CDatabase.h"
#include "easylogging++.h"

CDatabase::CDatabase()
{

}


int CDatabase::load(QString name)
{
    setPathName(DATABASE_NAME + name);
    searchFiles();
    return 0;
}
//搜索当前指定目录下的文件名
int CDatabase::searchFiles()
{
    QDir dir(m_strPathName);
    if(!dir.exists())
    {
        return -1;
    }
    dir.setFilter(QDir::Files);
    QFileInfoList list = dir.entryInfoList();//获取文件信息列表
    m_lstFiles.clear();
    for(int i=0; i<list.size(); i++)
    {
        QFileInfo fileInfo = list.at(i);
        if(fileInfo.fileName()=="."|fileInfo.fileName()=="..")
        {
            continue;
        }
        m_lstFiles.push_back(m_strPathName + fileInfo.fileName());
    }

    return 0;
}
//从本地读取图片，一次读取一张，读取完后即删除其记录，入当前记录读取完了，则需要重新从本地加载
int CDatabase::getImage(CImage &img)
{
    if(m_lstFiles.empty())
    {
        LOG(ERROR)<< "the database is empty!";
        return -1;
    }

    QString fileName = m_lstFiles.at(0);
    m_lstFiles.pop_front();
    QImage image;
    if(!image.load(fileName))
    {
        LOG(ERROR)<< "load image file failed!";
        return -1;
    }

    img.setFileName(fileName);
    img.setQImage(image);

    return 0;
}
