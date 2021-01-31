#include "cxsmalltext.h"

CxSmallText::CxSmallText(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this) ;
	connect( ui.tb_save, SIGNAL(clicked()), this, SLOT(onSave())) ;
}

CxSmallText::~CxSmallText()
{

}

void CxSmallText::onSave()
{
	accept() ;
}