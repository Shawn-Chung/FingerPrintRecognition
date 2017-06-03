#include "FingerPrint.h"
#include "ui_FingerPrint.h"
#include "easylogging++.h"

FingerPrint::FingerPrint(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FingerPrint)
{
    ui->setupUi(this);

}

FingerPrint::~FingerPrint()
{
    delete ui;
}

void FingerPrint::showImageOnLabel(QLabel *lab, CImage &img)
{
    lab->setPixmap(QPixmap::fromImage(img.getQImage()));
}

void FingerPrint::on_m_btnClose_clicked()
{
    close();
}

void FingerPrint::on_m_btnNext_clicked()
{

}

void FingerPrint::on_actionzhuce_triggered()
{
    ui->m_DisWidget->setCurrentIndex(0);
}

void FingerPrint::on_actionren_triggered()
{
    ui->m_DisWidget->setCurrentIndex(1);
}
//从数据库读取一张图片并显示在label上
void FingerPrint::on_m_btnSrcImg_clicked()
{
    if(-1 == m_cDataBase.getImage(m_curImage))
    {
        LOG(INFO)<< "get image failed!";
        ui->m_leResult->setText("the database is empty, please load the database first!");
        return;
    }
    ui->m_leResult->clear();
    showImageOnLabel(ui->m_lbSrcImg, m_curImage);
}

void FingerPrint::on_m_btnOriFild_clicked()
{
    CImage imgSize(m_curImage.getWidth()/2, m_curImage.getHeight()/2);

    CAlgo *normalize = new CSizeNormalize("SizeNormalize");
    normalize->exec(m_curImage, imgSize);

    m_curImage = imgSize;
    showImageOnLabel(ui->m_lbOriFild, m_curImage);
}

void FingerPrint::on_m_btnMatude_clicked()
{

}

void FingerPrint::on_m_btnSegment_clicked()
{

}

void FingerPrint::on_m_btnEnhance_clicked()
{

}

void FingerPrint::on_m_btnTexture_clicked()
{

}

void FingerPrint::on_m_btnBinary_clicked()
{

}

void FingerPrint::on_m_btnThin_clicked()
{

}

void FingerPrint::on_m_btnDebur_clicked()
{

}

void FingerPrint::on_m_btnMinutiae_clicked()
{

}

void FingerPrint::on_actionDB1_B_triggered()
{
    LOG(INFO)<< "loading database DB1_B";

    m_cDataBase.load(DB1_B);

    LOG(INFO)<< "database is loaded success";
}

void FingerPrint::on_actionDB2_B_triggered()
{
    LOG(INFO)<< "loading database DB2_B";

    m_cDataBase.load(DB2_B);

    LOG(INFO)<< "database is loaded success";
}

void FingerPrint::on_actionDB3_B_triggered()
{
    LOG(INFO)<< "loading database DB3_B";

    m_cDataBase.load(DB3_B);

    LOG(INFO)<< "database is loaded success";
}

void FingerPrint::on_actionDB4_B_triggered()
{
    LOG(INFO)<< "loading database DB4_B";

    m_cDataBase.load(DB4_B);

    LOG(INFO)<< "database is loaded success";
}
