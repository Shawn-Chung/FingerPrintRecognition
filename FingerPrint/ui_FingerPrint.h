/********************************************************************************
** Form generated from reading UI file 'FingerPrint.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINGERPRINT_H
#define UI_FINGERPRINT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FingerPrint
{
public:
    QAction *actionzhuce;
    QAction *actionren;
    QAction *actionDB1_B;
    QAction *actionDB2_B;
    QAction *actionDB3_B;
    QAction *actionDB4_B;
    QWidget *centralWidget;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_11;
    QStackedWidget *m_DisWidget;
    QWidget *page;
    QGridLayout *gridLayout_2;
    QWidget *m_Register;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *m_lbSrcImg;
    QPushButton *m_btnSrcImg;
    QVBoxLayout *verticalLayout_2;
    QLabel *m_lbOriFild;
    QPushButton *m_btnOriFild;
    QVBoxLayout *verticalLayout_3;
    QLabel *m_lbMatude;
    QPushButton *m_btnMatude;
    QVBoxLayout *verticalLayout_4;
    QLabel *m_lbSegment;
    QPushButton *m_btnSegment;
    QVBoxLayout *verticalLayout_5;
    QLabel *m_lbEnhance;
    QPushButton *m_btnEnhance;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_6;
    QLabel *m_lbTexture;
    QPushButton *m_btnTexture;
    QVBoxLayout *verticalLayout_7;
    QLabel *m_lbBinary;
    QPushButton *m_btnBinary;
    QVBoxLayout *verticalLayout_8;
    QLabel *m_lbThin;
    QPushButton *m_btnThin;
    QVBoxLayout *verticalLayout_9;
    QLabel *m_lbDebur;
    QPushButton *m_btnDebur;
    QVBoxLayout *verticalLayout_10;
    QLabel *m_lbMinutiae;
    QPushButton *m_btnMinutiae;
    QWidget *page_2;
    QGridLayout *gridLayout_3;
    QWidget *m_Recognition;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_12;
    QLabel *m_lbInName;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_13;
    QLabel *m_lbOutName;
    QVBoxLayout *verticalLayout_13;
    QLabel *m_lbPercent;
    QProgressBar *m_pbPercent;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_11;
    QLineEdit *m_leResult;
    QVBoxLayout *verticalLayout_12;
    QSpacerItem *verticalSpacer_2;
    QPushButton *m_btnNext;
    QSpacerItem *verticalSpacer;
    QPushButton *m_btnClose;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FingerPrint)
    {
        if (FingerPrint->objectName().isEmpty())
            FingerPrint->setObjectName(QStringLiteral("FingerPrint"));
        FingerPrint->resize(880, 490);
        actionzhuce = new QAction(FingerPrint);
        actionzhuce->setObjectName(QStringLiteral("actionzhuce"));
        actionren = new QAction(FingerPrint);
        actionren->setObjectName(QStringLiteral("actionren"));
        actionDB1_B = new QAction(FingerPrint);
        actionDB1_B->setObjectName(QStringLiteral("actionDB1_B"));
        actionDB2_B = new QAction(FingerPrint);
        actionDB2_B->setObjectName(QStringLiteral("actionDB2_B"));
        actionDB3_B = new QAction(FingerPrint);
        actionDB3_B->setObjectName(QStringLiteral("actionDB3_B"));
        actionDB4_B = new QAction(FingerPrint);
        actionDB4_B->setObjectName(QStringLiteral("actionDB4_B"));
        centralWidget = new QWidget(FingerPrint);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_4 = new QGridLayout(centralWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        m_DisWidget = new QStackedWidget(centralWidget);
        m_DisWidget->setObjectName(QStringLiteral("m_DisWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout_2 = new QGridLayout(page);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        m_Register = new QWidget(page);
        m_Register->setObjectName(QStringLiteral("m_Register"));
        gridLayout = new QGridLayout(m_Register);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_lbSrcImg = new QLabel(m_Register);
        m_lbSrcImg->setObjectName(QStringLiteral("m_lbSrcImg"));
        m_lbSrcImg->setStyleSheet(QStringLiteral("background-color: rgb(170, 0, 0);"));

        verticalLayout->addWidget(m_lbSrcImg);

        m_btnSrcImg = new QPushButton(m_Register);
        m_btnSrcImg->setObjectName(QStringLiteral("m_btnSrcImg"));

        verticalLayout->addWidget(m_btnSrcImg);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        m_lbOriFild = new QLabel(m_Register);
        m_lbOriFild->setObjectName(QStringLiteral("m_lbOriFild"));
        m_lbOriFild->setStyleSheet(QStringLiteral("background-color: rgb(0, 85, 0);"));

        verticalLayout_2->addWidget(m_lbOriFild);

        m_btnOriFild = new QPushButton(m_Register);
        m_btnOriFild->setObjectName(QStringLiteral("m_btnOriFild"));

        verticalLayout_2->addWidget(m_btnOriFild);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        m_lbMatude = new QLabel(m_Register);
        m_lbMatude->setObjectName(QStringLiteral("m_lbMatude"));
        m_lbMatude->setStyleSheet(QStringLiteral("background-color: rgb(170, 85, 0);"));

        verticalLayout_3->addWidget(m_lbMatude);

        m_btnMatude = new QPushButton(m_Register);
        m_btnMatude->setObjectName(QStringLiteral("m_btnMatude"));

        verticalLayout_3->addWidget(m_btnMatude);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        m_lbSegment = new QLabel(m_Register);
        m_lbSegment->setObjectName(QStringLiteral("m_lbSegment"));
        m_lbSegment->setStyleSheet(QStringLiteral("background-color: rgb(0, 170, 0);"));

        verticalLayout_4->addWidget(m_lbSegment);

        m_btnSegment = new QPushButton(m_Register);
        m_btnSegment->setObjectName(QStringLiteral("m_btnSegment"));

        verticalLayout_4->addWidget(m_btnSegment);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        m_lbEnhance = new QLabel(m_Register);
        m_lbEnhance->setObjectName(QStringLiteral("m_lbEnhance"));
        m_lbEnhance->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 0);"));

        verticalLayout_5->addWidget(m_lbEnhance);

        m_btnEnhance = new QPushButton(m_Register);
        m_btnEnhance->setObjectName(QStringLiteral("m_btnEnhance"));

        verticalLayout_5->addWidget(m_btnEnhance);


        horizontalLayout->addLayout(verticalLayout_5);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        m_lbTexture = new QLabel(m_Register);
        m_lbTexture->setObjectName(QStringLiteral("m_lbTexture"));
        m_lbTexture->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 255);"));

        verticalLayout_6->addWidget(m_lbTexture);

        m_btnTexture = new QPushButton(m_Register);
        m_btnTexture->setObjectName(QStringLiteral("m_btnTexture"));

        verticalLayout_6->addWidget(m_btnTexture);


        horizontalLayout_2->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        m_lbBinary = new QLabel(m_Register);
        m_lbBinary->setObjectName(QStringLiteral("m_lbBinary"));
        m_lbBinary->setStyleSheet(QStringLiteral("background-color: rgb(85, 85, 255);"));

        verticalLayout_7->addWidget(m_lbBinary);

        m_btnBinary = new QPushButton(m_Register);
        m_btnBinary->setObjectName(QStringLiteral("m_btnBinary"));

        verticalLayout_7->addWidget(m_btnBinary);


        horizontalLayout_2->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        m_lbThin = new QLabel(m_Register);
        m_lbThin->setObjectName(QStringLiteral("m_lbThin"));
        m_lbThin->setStyleSheet(QStringLiteral("background-color: rgb(255, 85, 255);"));

        verticalLayout_8->addWidget(m_lbThin);

        m_btnThin = new QPushButton(m_Register);
        m_btnThin->setObjectName(QStringLiteral("m_btnThin"));

        verticalLayout_8->addWidget(m_btnThin);


        horizontalLayout_2->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        m_lbDebur = new QLabel(m_Register);
        m_lbDebur->setObjectName(QStringLiteral("m_lbDebur"));
        m_lbDebur->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255);"));

        verticalLayout_9->addWidget(m_lbDebur);

        m_btnDebur = new QPushButton(m_Register);
        m_btnDebur->setObjectName(QStringLiteral("m_btnDebur"));

        verticalLayout_9->addWidget(m_btnDebur);


        horizontalLayout_2->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        m_lbMinutiae = new QLabel(m_Register);
        m_lbMinutiae->setObjectName(QStringLiteral("m_lbMinutiae"));
        m_lbMinutiae->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 255);"));

        verticalLayout_10->addWidget(m_lbMinutiae);

        m_btnMinutiae = new QPushButton(m_Register);
        m_btnMinutiae->setObjectName(QStringLiteral("m_btnMinutiae"));

        verticalLayout_10->addWidget(m_btnMinutiae);


        horizontalLayout_2->addLayout(verticalLayout_10);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        gridLayout_2->addWidget(m_Register, 0, 0, 1, 1);

        m_DisWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        gridLayout_3 = new QGridLayout(page_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        m_Recognition = new QWidget(page_2);
        m_Recognition->setObjectName(QStringLiteral("m_Recognition"));
        gridLayout_5 = new QGridLayout(m_Recognition);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        label_12 = new QLabel(m_Recognition);
        label_12->setObjectName(QStringLiteral("label_12"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);
        label_12->setStyleSheet(QStringLiteral("background-color: rgb(85, 0, 127);"));

        verticalLayout_15->addWidget(label_12);

        m_lbInName = new QLabel(m_Recognition);
        m_lbInName->setObjectName(QStringLiteral("m_lbInName"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_lbInName->sizePolicy().hasHeightForWidth());
        m_lbInName->setSizePolicy(sizePolicy1);

        verticalLayout_15->addWidget(m_lbInName);


        horizontalLayout_4->addLayout(verticalLayout_15);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        label_13 = new QLabel(m_Recognition);
        label_13->setObjectName(QStringLiteral("label_13"));
        sizePolicy.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy);
        label_13->setStyleSheet(QStringLiteral("background-color: rgb(85, 0, 255);"));

        verticalLayout_14->addWidget(label_13);

        m_lbOutName = new QLabel(m_Recognition);
        m_lbOutName->setObjectName(QStringLiteral("m_lbOutName"));
        sizePolicy1.setHeightForWidth(m_lbOutName->sizePolicy().hasHeightForWidth());
        m_lbOutName->setSizePolicy(sizePolicy1);

        verticalLayout_14->addWidget(m_lbOutName);


        horizontalLayout_4->addLayout(verticalLayout_14);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        m_lbPercent = new QLabel(m_Recognition);
        m_lbPercent->setObjectName(QStringLiteral("m_lbPercent"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_lbPercent->sizePolicy().hasHeightForWidth());
        m_lbPercent->setSizePolicy(sizePolicy2);

        verticalLayout_13->addWidget(m_lbPercent);

        m_pbPercent = new QProgressBar(m_Recognition);
        m_pbPercent->setObjectName(QStringLiteral("m_pbPercent"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(m_pbPercent->sizePolicy().hasHeightForWidth());
        m_pbPercent->setSizePolicy(sizePolicy3);
        m_pbPercent->setLayoutDirection(Qt::LeftToRight);
        m_pbPercent->setValue(24);
        m_pbPercent->setOrientation(Qt::Vertical);

        verticalLayout_13->addWidget(m_pbPercent);


        horizontalLayout_4->addLayout(verticalLayout_13);


        gridLayout_5->addLayout(horizontalLayout_4, 0, 0, 1, 1);


        gridLayout_3->addWidget(m_Recognition, 0, 0, 1, 1);

        m_DisWidget->addWidget(page_2);

        verticalLayout_11->addWidget(m_DisWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_3->addWidget(label_11);

        m_leResult = new QLineEdit(centralWidget);
        m_leResult->setObjectName(QStringLiteral("m_leResult"));

        horizontalLayout_3->addWidget(m_leResult);


        verticalLayout_11->addLayout(horizontalLayout_3);


        gridLayout_4->addLayout(verticalLayout_11, 0, 0, 1, 1);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalSpacer_2 = new QSpacerItem(20, 130, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer_2);

        m_btnNext = new QPushButton(centralWidget);
        m_btnNext->setObjectName(QStringLiteral("m_btnNext"));

        verticalLayout_12->addWidget(m_btnNext);

        verticalSpacer = new QSpacerItem(20, 298, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer);

        m_btnClose = new QPushButton(centralWidget);
        m_btnClose->setObjectName(QStringLiteral("m_btnClose"));

        verticalLayout_12->addWidget(m_btnClose);


        gridLayout_4->addLayout(verticalLayout_12, 0, 1, 1, 1);

        FingerPrint->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(FingerPrint);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 880, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        FingerPrint->setMenuBar(menuBar);
        mainToolBar = new QToolBar(FingerPrint);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        FingerPrint->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(FingerPrint);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        FingerPrint->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menu->addAction(actionDB1_B);
        menu->addAction(actionDB2_B);
        menu->addAction(actionDB3_B);
        menu->addAction(actionDB4_B);
        menu_2->addAction(actionzhuce);
        menu_2->addAction(actionren);

        retranslateUi(FingerPrint);

        m_DisWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(FingerPrint);
    } // setupUi

    void retranslateUi(QMainWindow *FingerPrint)
    {
        FingerPrint->setWindowTitle(QApplication::translate("FingerPrint", "FingerPrint", Q_NULLPTR));
        actionzhuce->setText(QApplication::translate("FingerPrint", "\346\263\250\345\206\214", Q_NULLPTR));
        actionren->setText(QApplication::translate("FingerPrint", "\350\256\244\350\257\201", Q_NULLPTR));
        actionDB1_B->setText(QApplication::translate("FingerPrint", "DB1_B", Q_NULLPTR));
        actionDB2_B->setText(QApplication::translate("FingerPrint", "DB2_B", Q_NULLPTR));
        actionDB3_B->setText(QApplication::translate("FingerPrint", "DB3_B", Q_NULLPTR));
        actionDB4_B->setText(QApplication::translate("FingerPrint", "DB4_B", Q_NULLPTR));
        m_lbSrcImg->setText(QString());
        m_btnSrcImg->setText(QApplication::translate("FingerPrint", "\345\216\237\345\233\276\345\203\217", Q_NULLPTR));
        m_lbOriFild->setText(QString());
        m_btnOriFild->setText(QApplication::translate("FingerPrint", "\346\226\271\345\220\221\345\233\276", Q_NULLPTR));
        m_lbMatude->setText(QString());
        m_btnMatude->setText(QApplication::translate("FingerPrint", "\346\242\257\345\272\246\345\271\205\345\200\274", Q_NULLPTR));
        m_lbSegment->setText(QString());
        m_btnSegment->setText(QApplication::translate("FingerPrint", "\346\214\207\347\272\271\345\210\206\345\211\262", Q_NULLPTR));
        m_lbEnhance->setText(QString());
        m_btnEnhance->setText(QApplication::translate("FingerPrint", "\345\211\215\346\231\257\345\242\236\345\274\272", Q_NULLPTR));
        m_lbTexture->setText(QString());
        m_btnTexture->setText(QApplication::translate("FingerPrint", "\347\272\271\350\267\257\345\242\236\345\274\272", Q_NULLPTR));
        m_lbBinary->setText(QString());
        m_btnBinary->setText(QApplication::translate("FingerPrint", "\344\272\214\345\200\274\345\214\226", Q_NULLPTR));
        m_lbThin->setText(QString());
        m_btnThin->setText(QApplication::translate("FingerPrint", "\347\273\206\345\214\226", Q_NULLPTR));
        m_lbDebur->setText(QString());
        m_btnDebur->setText(QApplication::translate("FingerPrint", "\345\216\273\347\207\245", Q_NULLPTR));
        m_lbMinutiae->setText(QString());
        m_btnMinutiae->setText(QApplication::translate("FingerPrint", "\347\211\271\345\276\201\347\202\271", Q_NULLPTR));
        label_12->setText(QString());
        m_lbInName->setText(QApplication::translate("FingerPrint", "TextLabel", Q_NULLPTR));
        label_13->setText(QString());
        m_lbOutName->setText(QApplication::translate("FingerPrint", "TextLabel", Q_NULLPTR));
        m_lbPercent->setText(QApplication::translate("FingerPrint", "TextLabel", Q_NULLPTR));
        label_11->setText(QApplication::translate("FingerPrint", "Result:", Q_NULLPTR));
        m_btnNext->setText(QApplication::translate("FingerPrint", "\344\270\213\344\270\200\345\274\240", Q_NULLPTR));
        m_btnClose->setText(QApplication::translate("FingerPrint", "\351\200\200\345\207\272", Q_NULLPTR));
        menu->setTitle(QApplication::translate("FingerPrint", "\346\225\260\346\215\256\345\272\223", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("FingerPrint", "\346\223\215\344\275\234", Q_NULLPTR));
        menu_3->setTitle(QApplication::translate("FingerPrint", "\345\205\263\344\272\216", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FingerPrint: public Ui_FingerPrint {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINGERPRINT_H
