#ifndef FINGERPRINT_H
#define FINGERPRINT_H

#include <QMainWindow>

namespace Ui {
class FingerPrint;
}

class FingerPrint : public QMainWindow
{
    Q_OBJECT

public:
    explicit FingerPrint(QWidget *parent = 0);
    ~FingerPrint();

private slots:
    void on_m_btnClose_clicked();

    void on_m_btnNext_clicked();

    void on_actionzhuce_triggered();

    void on_actionren_triggered();

    void on_m_btnSrcImg_clicked();

    void on_m_btnOriFild_clicked();

    void on_m_btnMatude_clicked();

    void on_m_btnSegment_clicked();

    void on_m_btnEnhance_clicked();

    void on_m_btnTexture_clicked();

    void on_m_btnBinary_clicked();

    void on_m_btnThin_clicked();

    void on_m_btnDebur_clicked();

    void on_m_btnMinutiae_clicked();

private:
    Ui::FingerPrint *ui;
};

#endif // FINGERPRINT_H
