#include "cxpreviewlabel.h"

CxPreviewLabel::CxPreviewLabel(QWidget *parent)
	: QLabel(parent)
{
	m_textEdit = new QTextEdit(this) ;
	setStyleSheet("QLabel{background:#c3c3c3;}") ;
	m_textEdit->setStyleSheet("QTextEdit{background:white;}") ;
	m_textEdit->setEnabled(false) ;
	m_textEdit->hide() ;
}

CxPreviewLabel::~CxPreviewLabel()
{

}

void CxPreviewLabel::resizeEvent(QResizeEvent* event)
{
	QLabel::resizeEvent(event) ;
	fit() ;
}

void CxPreviewLabel::showEvent(QShowEvent* event)
{
	QLabel::showEvent(event) ;
	fit() ;
}

void CxPreviewLabel::fit()
{
	int delta = 8 ;
	m_textEdit->setGeometry(delta,delta,width()-delta*2,height()-delta*2) ;
}

void CxPreviewLabel::setMyText(QString str)
{
	m_textEdit->setFont(QFont("arial",11)) ;
	m_textEdit->setPlainText(str) ;
}