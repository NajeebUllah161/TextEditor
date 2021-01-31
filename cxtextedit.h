#ifndef CXTEXTEDIT_H
#define CXTEXTEDIT_H

#include <QTextEdit>
#include <QDragEnterEvent>
#include <QDragMoveEvent>
#include <QDropEvent>

class CxTextEdit : public QTextEdit
{
	Q_OBJECT

public:
	CxTextEdit(QWidget *parent);
	~CxTextEdit();

signals:
	void __showTextFormat() ;
protected:
	void dragEnterEvent(QDragEnterEvent *event) ;
	void dragMoveEvent(QDragMoveEvent* event) ;
	void dropEvent(QDropEvent *event) ;
	void keyPressEvent(QKeyEvent *event) ;
private:
	
};

#endif // CXTEXTEDIT_H
