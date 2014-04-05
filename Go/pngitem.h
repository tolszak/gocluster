#ifndef PNGITEM_H
#define PNGITEM_H

#include <QQuickItem>
#include <QImage>
#include <QProcess>
#include <QTimer>

class PngItem : public QQuickItem
{
	Q_OBJECT
public:
    explicit PngItem(QQuickItem *parent = 0);

	void paint(QPainter *, const QStyleOptionGraphicsItem *, QWidget *);
	
signals:
	
public slots:
	void startRecording();
	void stopRecording();

private slots:
	void takeSnapshot();
	void widthChangedSlot();
	void heightChangedSlot();

private:
	QImage *image;
	QProcess ffmpeg;
	QTimer recordTimer;
	
};

#endif // PNGITEM_H
