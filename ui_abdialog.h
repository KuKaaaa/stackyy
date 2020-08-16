/********************************************************************************
** Form generated from reading UI file 'abdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABDIALOG_H
#define UI_ABDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AbDialog
{
public:
    QPushButton *closeButton;
    QLabel *label_Logo;
    QLabel *labelVer;
    QLabel *labelInfo;
    QLabel *labelCreator;

    void setupUi(QDialog *AbDialog)
    {
        if (AbDialog->objectName().isEmpty())
            AbDialog->setObjectName(QString::fromUtf8("AbDialog"));
        AbDialog->resize(480, 360);
        AbDialog->setStyleSheet(QString::fromUtf8("background-color: #252525;\n"
"color: #BFBFBF;"));
        closeButton = new QPushButton(AbDialog);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(390, 320, 75, 23));
        label_Logo = new QLabel(AbDialog);
        label_Logo->setObjectName(QString::fromUtf8("label_Logo"));
        label_Logo->setGeometry(QRect(160, 10, 160, 171));
        label_Logo->setAlignment(Qt::AlignCenter);
        labelVer = new QLabel(AbDialog);
        labelVer->setObjectName(QString::fromUtf8("labelVer"));
        labelVer->setGeometry(QRect(160, 190, 160, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Courier"));
        font.setPointSize(19);
        font.setBold(true);
        font.setWeight(75);
        labelVer->setFont(font);
        labelVer->setAlignment(Qt::AlignCenter);
        labelInfo = new QLabel(AbDialog);
        labelInfo->setObjectName(QString::fromUtf8("labelInfo"));
        labelInfo->setGeometry(QRect(75, 230, 330, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Mongolian Baiti"));
        font1.setPointSize(10);
        labelInfo->setFont(font1);
        labelInfo->setTextFormat(Qt::AutoText);
        labelInfo->setAlignment(Qt::AlignCenter);
        labelInfo->setWordWrap(true);
        labelCreator = new QLabel(AbDialog);
        labelCreator->setObjectName(QString::fromUtf8("labelCreator"));
        labelCreator->setGeometry(QRect(125, 280, 230, 30));
        QFont font2;
        font2.setFamily(QString::fromUtf8("MV Boli"));
        font2.setPointSize(14);
        labelCreator->setFont(font2);
        labelCreator->setStyleSheet(QString::fromUtf8(""));
        labelCreator->setAlignment(Qt::AlignCenter);

        retranslateUi(AbDialog);

        QMetaObject::connectSlotsByName(AbDialog);
    } // setupUi

    void retranslateUi(QDialog *AbDialog)
    {
        AbDialog->setWindowTitle(QApplication::translate("AbDialog", "Dialog", nullptr));
        closeButton->setText(QApplication::translate("AbDialog", "Close", nullptr));
        label_Logo->setText(QApplication::translate("AbDialog", "1", nullptr));
        labelVer->setText(QApplication::translate("AbDialog", "Stackyy", nullptr));
        labelInfo->setText(QApplication::translate("AbDialog", "Stackyy is a free image stacking software, its purpose is to create one enhanced image from many!", nullptr));
        labelCreator->setText(QApplication::translate("AbDialog", "Jakub Kupczyk", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AbDialog: public Ui_AbDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABDIALOG_H
