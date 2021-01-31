#ifndef CXCOLORWIDGET_H
#define CXCOLORWIDGET_H

#include <QWidget>
#include "ui_w_color_button.h"
#include "cxcolormenu.h"

#define TEXTCOLOR 0
#define HIGHLIGHTCOLOR 1
#define FOREGROUNDCOLOR 2

class CxColorWidget : public QWidget
{
	Q_OBJECT

public:
	CxColorWidget(QWidget *parent);
	~CxColorWidget();
	void setColor(QColor col) ;
	void setIndex( int id ) ;
signals:
	void __colorChanged(QColor col) ;
	void __requireMenu(CxColorWidget*) ;
private slots:
	void onMenu() ;
	void onClick() ;
private:
	Ui::Form_Color_Widget ui ;
	int m_index ;
	QColor m_color ;
};

#endif // CXCOLORWIDGET_H
