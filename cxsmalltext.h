#ifndef CXSMALLTEXT_H
#define CXSMALLTEXT_H

#include <QDialog>
#include "ui_dlg_small_text.h"

class CxSmallText : public QDialog
{
	Q_OBJECT

public:
	CxSmallText(QWidget *parent=0);
	~CxSmallText();
	Ui::Dialog_Small_Text form(){ return ui ; }
	QString content(){ return ui.textEdit->toPlainText() ; }
	void setText(QString txt){ ui.textEdit->setPlainText(txt) ; }
public slots:
	void onSave() ;
private:
	Ui::Dialog_Small_Text ui ;	
};

#endif // CXSMALLTEXT_H
