#ifndef CXCONTENTLABEL_H
#define CXCONTENTLABEL_H

#include <QLabel>
#include <QListWidgetItem>
#include <QCursor>
#include <QPoint>

class CxContentLabel : public QLabel
{
	Q_OBJECT

public:
	CxContentLabel(QListWidgetItem* parentItem = 0, QWidget *parent=0);
	~CxContentLabel();
signals:
	void __showPreview(QListWidgetItem* item, bool on, QPoint pnt=QPoint(0,0) ) ;
protected:
	void enterEvent(QEvent *event) ;
	void leaveEvent(QEvent *event) ;
private:
	QListWidgetItem* m_parentItem ;
};

#endif // CXCONTENTLABEL_H
