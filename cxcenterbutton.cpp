#include "cxcenterbutton.h"
#include "centeredtoolbuttonstyle.h"

CxCenterButton::CxCenterButton(QWidget *parent)
	: QToolButton(parent)
{
	setStyle(new CenteredToolButtonStyle(this, this->iconSize()));
}

CxCenterButton::~CxCenterButton()
{
}

void CxCenterButton::resizeEvent(QResizeEvent *event)
{
	QToolButton::resizeEvent(event) ;
	repaint() ;
	update() ;
}