#include "cxpagebutton.h"

CxPageButton::CxPageButton(QWidget *parent)
	: QToolButton(parent)
{

}

CxPageButton::~CxPageButton()
{

}

void CxPageButton::enterEvent(QEvent* event)
{
	QToolButton::enterEvent(event) ;
	emit __showPageMenu(true) ;
}

void CxPageButton::leaveEvent(QEvent* event)
{
	QToolButton::leaveEvent(event) ;
	emit __showPageMenu(false) ;
}