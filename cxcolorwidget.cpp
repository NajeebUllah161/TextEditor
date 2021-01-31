#include "cxcolorwidget.h"

CxColorWidget::CxColorWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this) ;
	setStyleSheet("QWidget{background:white;}") ;
	connect( ui.tb_action, SIGNAL(clicked()), this, SLOT(onClick())) ;
	connect( ui.tb_menu, SIGNAL(clicked()), this, SLOT(onMenu())) ;
	m_index = TEXTCOLOR ;
}

CxColorWidget::~CxColorWidget()
{

}

void CxColorWidget::setColor(QColor col)
{
	m_color = col ;
	ui.lbl_color->setStyleSheet(QString("QLabel{background:%1;}").arg(col.name())) ;
}

void CxColorWidget::onMenu()
{
	emit __requireMenu(this) ;
}

void CxColorWidget::onClick()
{
	emit __colorChanged(m_color) ;
}

void CxColorWidget::setIndex( int id )
{
	m_index = id ;
	if( id == TEXTCOLOR ) setColor(Qt::black) , ui.tb_action->setIcon(QIcon(":res/icon/font.png")) ;
	if( id == HIGHLIGHTCOLOR ) setColor(QColor("#fff200")) ,ui.tb_action->setIcon(QIcon(":res/icon/text_highlight.png")) ;
	if( id == FOREGROUNDCOLOR ) setColor(QColor("#cfcfe1")) ,ui.tb_action->setIcon(QIcon(":res/icon/fill.png")) ;
	ui.tb_action->setIconSize(QSize(20,20)) ;
}