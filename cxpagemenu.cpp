#include "cxpagemenu.h"
#define BTNSZ 30
#define COLCNT 15
#define PAGEN 200

CxPageMenu::CxPageMenu(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this) ;
//	setFixedWidth(BTNSZ*COLCNT) ;
	m_mapper = new QSignalMapper(this) ;
	m_cnt = 1 ;
	for( int i = 0; i < PAGEN; i++ )
	{
		QToolButton* bt = new QToolButton(this) ;
		bt->setGeometry((i%COLCNT)*BTNSZ,(i/COLCNT)*BTNSZ,BTNSZ,BTNSZ) ;
		bt->show() ;
		bt->setText(QString("%1").arg(i+6)) ;
		bt->setStyleSheet("QToolButton{background:none;color:blue;}") ;
		bt->setFont(QFont("impact",11)) ;
		connect( bt, SIGNAL(clicked()), m_mapper, SLOT(map())) ;
		m_mapper->setMapping(bt,i+6) ;
		m_btnList << bt ;
	}
	connect( m_mapper, SIGNAL(mapped(int)),this, SIGNAL(__selectPage(int))) ;
}

CxPageMenu::~CxPageMenu()
{
}

void CxPageMenu::setCount( int cnt )
{
	for( int i = 6; i < 6+PAGEN; i++ )
	{
		m_btnList[i-6]->setVisible(i<=cnt) ;
	}
	m_cnt = cnt ;
//	setFixedHeight() ;
}

void CxPageMenu::setCurrentPage( int id )
{
	for( int i = 0; i < PAGEN; i++ )
	{
		m_btnList[i]->setStyleSheet(QString("QToolButton{background:none;color:%1;}").arg(id==i+6?"green":"blue")) ;
	}
}

int CxPageMenu::prefHeight()
{
	int r = (m_cnt-5+COLCNT-1)/COLCNT ;
	return r*BTNSZ ;
}

int CxPageMenu::prefWidth()
{
	return BTNSZ*((m_cnt-5<COLCNT)?(m_cnt-5):COLCNT) ;
}