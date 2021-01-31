#ifndef CXCOLORMENU_H
#define CXCOLORMENU_H

#include <QWidget>
#include "ui_dlg_color_menu.h"

#define COLORMENUW 227
#define COLORMENUH 87

class CxColorMenu : public QDialog
{
	Q_OBJECT

public:
	CxColorMenu(QWidget *parent=0);
	~CxColorMenu();
	QColor myColor(){ return m_ret ; }
public slots:
	void onColorSelected( int id ) ;
	void onChooseMore() ;
private:
	Ui::Dialog_Color_Menu ui ;
	QStringList m_colorList ;
	QColor m_ret ;
};

#endif // CXCOLORMENU_H
