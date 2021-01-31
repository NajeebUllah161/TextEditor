#include "cxcontentlabel.h"

CxContentLabel::CxContentLabel(QListWidgetItem* parentItem, QWidget *parent)
	: QLabel(parent)
{
	m_parentItem = parentItem ;
	setStyleSheet("QLabel{background:#E7F3FF;border-radius:8px;border:1px solid #fff200;}") ;
	setFont(QFont("arial",10)) ;
	setTextFormat(Qt::RichText) ;
}

CxContentLabel::~CxContentLabel()
{

}

void CxContentLabel::enterEvent(QEvent *event)
{
	QString tooltip = QString("<p style='white-space:pre'>%1</p>").arg(text()); 
//	setToolTip(tooltip) ;
	QString txt = text() ;
	if( txt.length() ) setToolTip("<h4>"+text()+"</h4>") ;
	QLabel::enterEvent(event) ;
//	emit __showPreview(m_parentItem, true, QCursor::pos() ) ;
}

void CxContentLabel::leaveEvent(QEvent *event)
{
	QLabel::leaveEvent(event) ;
//	emit __showPreview(m_parentItem, false, QCursor::pos() ) ;
}