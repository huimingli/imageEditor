/********************************************************************************
** Form generated from reading UI file 'ImageEdit.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEEDIT_H
#define UI_IMAGEEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImageEditClass
{
public:
    QLabel *view;
    QPushButton *open;
    QPushButton *deal;
    QSpinBox *bright;
    QLabel *label;
    QSpinBox *thread;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *dealtime;
    QProgressBar *progressBar;

    void setupUi(QWidget *ImageEditClass)
    {
        if (ImageEditClass->objectName().isEmpty())
            ImageEditClass->setObjectName(QStringLiteral("ImageEditClass"));
        ImageEditClass->resize(921, 766);
        QIcon icon;
        icon.addFile(QStringLiteral(":/ImageEdit/Resources/logo.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ImageEditClass->setWindowIcon(icon);
        ImageEditClass->setStyleSheet(QStringLiteral(""));
        view = new QLabel(ImageEditClass);
        view->setObjectName(QStringLiteral("view"));
        view->setGeometry(QRect(0, 0, 651, 761));
        view->setStyleSheet(QStringLiteral("background-color: rgb(93, 255, 85);"));
        open = new QPushButton(ImageEditClass);
        open->setObjectName(QStringLiteral("open"));
        open->setGeometry(QRect(690, 20, 71, 41));
        deal = new QPushButton(ImageEditClass);
        deal->setObjectName(QStringLiteral("deal"));
        deal->setGeometry(QRect(800, 20, 71, 41));
        bright = new QSpinBox(ImageEditClass);
        bright->setObjectName(QStringLiteral("bright"));
        bright->setGeometry(QRect(760, 110, 111, 31));
        bright->setStyleSheet(QString::fromUtf8("font: 18pt \"\351\273\221\344\275\223\";"));
        bright->setMinimum(1);
        bright->setMaximum(200);
        bright->setValue(80);
        label = new QLabel(ImageEditClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(680, 114, 72, 21));
        label->setStyleSheet(QString::fromUtf8("font: 12pt \"\351\273\221\344\275\223\";"));
        thread = new QSpinBox(ImageEditClass);
        thread->setObjectName(QStringLiteral("thread"));
        thread->setGeometry(QRect(760, 176, 111, 31));
        thread->setStyleSheet(QString::fromUtf8("font: 18pt \"\351\273\221\344\275\223\";"));
        thread->setMinimum(1);
        thread->setMaximum(100);
        thread->setValue(1);
        label_2 = new QLabel(ImageEditClass);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(680, 180, 72, 21));
        label_2->setStyleSheet(QString::fromUtf8("font: 12pt \"\351\273\221\344\275\223\";"));
        label_3 = new QLabel(ImageEditClass);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(680, 240, 141, 21));
        label_3->setStyleSheet(QString::fromUtf8("font: 12pt \"\351\273\221\344\275\223\";"));
        dealtime = new QLabel(ImageEditClass);
        dealtime->setObjectName(QStringLiteral("dealtime"));
        dealtime->setGeometry(QRect(680, 280, 141, 21));
        dealtime->setStyleSheet(QString::fromUtf8("font: 12pt \"\351\273\221\344\275\223\";"));
        progressBar = new QProgressBar(ImageEditClass);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(680, 370, 201, 23));
        progressBar->setValue(100);

        retranslateUi(ImageEditClass);
        QObject::connect(open, SIGNAL(clicked()), ImageEditClass, SLOT(Open()));
        QObject::connect(deal, SIGNAL(clicked()), ImageEditClass, SLOT(Deal()));

        QMetaObject::connectSlotsByName(ImageEditClass);
    } // setupUi

    void retranslateUi(QWidget *ImageEditClass)
    {
        ImageEditClass->setWindowTitle(QApplication::translate("ImageEditClass", "ImageEdit", Q_NULLPTR));
        view->setText(QString());
        open->setText(QApplication::translate("ImageEditClass", "\346\211\223\345\274\200", Q_NULLPTR));
        deal->setText(QApplication::translate("ImageEditClass", "\345\244\204\347\220\206", Q_NULLPTR));
        label->setText(QApplication::translate("ImageEditClass", "\344\272\256\345\272\246", Q_NULLPTR));
        label_2->setText(QApplication::translate("ImageEditClass", "\347\272\277\347\250\213", Q_NULLPTR));
        label_3->setText(QApplication::translate("ImageEditClass", "\345\244\204\347\220\206\346\227\266\351\227\264(ms)", Q_NULLPTR));
        dealtime->setText(QApplication::translate("ImageEditClass", "0", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ImageEditClass: public Ui_ImageEditClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEEDIT_H
