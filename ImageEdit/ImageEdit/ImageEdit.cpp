#include "ImageEdit.h"
#include <QFileDialog>
#include"ImageThread.h"
#include<QTime>
ImageEdit::ImageEdit(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

void ImageEdit::Open() {
	QString fileName = QFileDialog::getOpenFileName(this, QString::fromLocal8Bit("Ñ¡ÔñÍ¼Æ¬ÎÄ¼þ"));

	if (fileName.isEmpty()) return;
	if (!img) {
		delete img;
		img = NULL;
	}
	img = new QImage(fileName);
	if (!img)return;
	ViewImage(img);
	 
}
void ImageEdit::ViewImage(QImage*img) {
	QImage simg;
	if (img->width() > img->height()) {
		simg = img->scaledToWidth(ui.view->width());
	}
	else {
		simg = img->scaledToHeight(ui.view->height());
	}
	ui.view->setPixmap(QPixmap::fromImage(simg));
}


void ImageEdit::Deal() {
	float b = (float)ui.bright->value() / 100;
	int thread = ui.thread->value();
	if (!img) return;
	imgDeal = img->copy();
	unsigned char *data = imgDeal.bits();
	int pixCount = img->width() * img->height();
	QTime t;
	t.start();
	ImageThread::DealImage(data, pixCount, b, thread);
	while (true) {
		int percent = ImageThread::DealPercent();
		ui.progressBar->setValue(percent);
		if (percent >= 100) {
			break;
		}
	}
	ImageThread::Wait();
	int ms = t.elapsed();
	char buf[128] = { 0 };
	sprintf(buf, "%dºÁÃë", ms);
	ui.dealtime->setText(QString::fromLocal8Bit(buf));
	ViewImage(&imgDeal);

}
