#ifndef CXCENTERBUTTON_H
#define CXCENTERBUTTON_H

#include <QToolButton>

class CxCenterButton : public QToolButton
{
	Q_OBJECT

public:
	CxCenterButton(QWidget *parent);
	~CxCenterButton();

protected:
	void resizeEvent(QResizeEvent *event) ;
private:
	
};

#endif // CXCENTERBUTTON_H
