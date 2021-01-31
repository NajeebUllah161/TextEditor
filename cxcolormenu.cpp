#include "cxcolormenu.h"
#include <QColorDialog>
#include <QMessageBox>

CxColorMenu::CxColorMenu(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this) ;
	m_colorList<<"#000000"<<"#7f7f7f"<<"#880015"<<"#ED1C24"<<"#ff7f27"
		<<"#fff200"<<"#22b14c"<<"#00a2e8"<<"#3f48cc"<<"#a349a4"<<"#fffff"
		<<"#c3c3c3"<<"#897a57"<<"#ffaec9"<<"#ffc90e"<<"#efe480"
		<<"#b5e61d"<<"#99d9ea"<<"#7092be"<<"#c8bfe7";
	for( int i = 0; i < 20; i++ )
	{
		CxColorButton* tb = (CxColorButton*)(findChild<QToolButton*>(QString("tb_col_%1").arg(i+1)));
		ui.buttonGroup->setId(tb,i) ;
		tb->setColor(QColor(m_colorList[i])) ;
	}
	setStyleSheet("QWidget{background:white;}") ;
	setWindowFlags(Qt::Dialog|Qt::FramelessWindowHint) ;
	connect( ui.buttonGroup, SIGNAL(buttonClicked(int)), this, SLOT(onColorSelected(int))) ;
	connect( ui.tb_choose_more, SIGNAL(clicked()), this, SLOT(onChooseMore())) ;
	setFixedSize(COLORMENUW,COLORMENUH) ;
}

CxColorMenu::~CxColorMenu()
{

}

void CxColorMenu::onChooseMore()
{
	QColor col = QColorDialog::getColor(Qt::white, NULL, "Choose color") ;
	if( col.isValid() )
	{
		m_ret = col ;
		accept() ;
		return ;
	}
	reject() ;
}

void CxColorMenu::onColorSelected( int id )
{
	CxColorButton* tb = (CxColorButton*)(findChild<QToolButton*>(QString("tb_col_%1").arg(id+1)));
	m_ret = tb->color() ;
	accept() ;
}