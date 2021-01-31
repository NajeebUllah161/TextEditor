#ifndef CXPREVIEWLABEL_H
#define CXPREVIEWLABEL_H

#include <QLabel>
#include <QTextEdit>

class CxPreviewLabel : public QLabel
{
	Q_OBJECT

public:
	CxPreviewLabel(QWidget *parent=0);
	~CxPreviewLabel();
	void setMyText(QString str) ;
protected:
	void showEvent(QShowEvent* event) ;
	void resizeEvent(QResizeEvent* event) ;
private:
	void fit() ;
	QTextEdit* m_textEdit ;
};

#endif // CXPREVIEWLABEL_H
