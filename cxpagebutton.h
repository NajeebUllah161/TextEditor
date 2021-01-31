#ifndef CXPAGEBUTTON_H
#define CXPAGEBUTTON_H

#include <QToolButton>

class CxPageButton : public QToolButton
{
	Q_OBJECT

public:
	CxPageButton(QWidget *parent);
	~CxPageButton();

signals:
	void __showPageMenu( bool on ) ;
protected:
	void enterEvent(QEvent* event) ;
	void leaveEvent(QEvent* event) ;
private:
	
};

#endif // CXPAGEBUTTON_H
