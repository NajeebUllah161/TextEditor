#include "cxcolorbutton.h"
#include <QPainter>
#define DELTA 3

CxColorButton::CxColorButton(QWidget *parent) :
    QToolButton(parent)
{
    m_color = QColor(Qt::red) ;
    connect( this, SIGNAL(clicked()), this, SLOT(repaint())) ;
}

void CxColorButton::setColor(QColor col)
{
    m_color = col ;
	repaint() ;
}

void CxColorButton::paintEvent(QPaintEvent *event)
{
    QPainter painter(this) ;
    if( isChecked() )
    {
        painter.setPen(QPen(Qt::black,1));
        painter.setBrush(Qt::NoBrush);
        painter.drawRect(1,1,width()-2,height()-2);
    }
    painter.setBrush(QBrush(m_color)) ;
    painter.drawRect( DELTA, DELTA, width()-DELTA*2, height()-DELTA*2 );
}

void CxColorButton::onClick()
{
    repaint() ;
}
