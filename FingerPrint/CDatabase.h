#ifndef CDATABASE_H
#define CDATABASE_H

#include <QString>
#include <QList>
#include <QDir>
#include "CImage.h"

#define DATABASE_NAME   "../"
#define DB1_B   "DB1_B/"
#define DB2_B   "DB2_B/"
#define DB3_B   "DB3_B/"
#define DB4_B   "DB4_B/"

class CDatabase
{
public:
    CDatabase();

    int setPathName(QString name){m_strPathName = name;}
    int load(QString name);
    int searchFiles();
    int getImage(CImage &img);

private:

    QString m_strPathName;
    QList<QString> m_lstFiles;
};

#endif // CDATABASE_H
