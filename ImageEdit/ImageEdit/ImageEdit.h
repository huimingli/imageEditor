#pragma once

#include <QtWidgets/QWidget>
#include "ui_ImageEdit.h"

class ImageEdit : public QWidget
{
	Q_OBJECT

public:
	ImageEdit(QWidget *parent = Q_NULLPTR);
	QImage*img = NULL;
	QImage imgDeal;
	void ViewImage(QImage*img);
public slots:
    void Open();
	void Deal();

private:
	Ui::ImageEditClass ui;
};
