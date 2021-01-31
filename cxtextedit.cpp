#include "cxtextedit.h"
#include <QMimeData>
#include <QMessageBox>
#include <QDropEvent>
#include <QKeyEvent>
#include <QImageReader>
#include <QUrl>

CxTextEdit::CxTextEdit(QWidget *parent)
	: QTextEdit(parent)
{
	setAcceptDrops(true) ;
}

CxTextEdit::~CxTextEdit()
{

}



void CxTextEdit::dragEnterEvent(QDragEnterEvent *event)
{
//	event->accept() ;
	QTextEdit::dragEnterEvent(event) ;
	return ;
	QString str = event->mimeData()->data("tom_content") ;
	if( !str.length() ) event->ignore() ;
	else {
		event->acceptProposedAction() ;
		event->accept() ;
	}
}

void CxTextEdit::dragMoveEvent(QDragMoveEvent* event)
{
/*
event->acceptProposedAction();
	QDragMoveEvent move(event->pos(),event->dropAction(), event->mimeData(), event->mouseButtons(), event->keyboardModifiers(), event->type());
	QTextEdit::dragMoveEvent(&move); // Call the parent function (show cursor and keep selection)

	QTextCursor t = cursorForPosition(event->pos()) ;
	setTextCursor(t) ;

	event->accept() ;
	*/
	QTextEdit::dragMoveEvent(event) ;
	return ;
	QString str = event->mimeData()->data("tom_content") ;
	if( !str.length() ) event->ignore() ;
	else {
		QTextCursor t = cursorForPosition(event->pos());
		setTextCursor(t) ;
		event->acceptProposedAction() ;
		event->accept() ;
	}
}



void CxTextEdit::dropEvent(QDropEvent *event)
{
	if( event->source() == viewport() )
	{
		QTextEdit::dropEvent(event) ;
		return ;
	}
	QString str = event->mimeData()->data("tom_content") ;
	int contentType = event->mimeData()->data("tom_content_type").toInt() ;
	QTextCursor t = cursorForPosition(event->pos()) ;
	setTextCursor(t) ;

	if( contentType == 0 ) {//Text 
		insertPlainText(str) ;
	}
	if( contentType == 1 )//Image
	{
//		t.insertImage(QImage(str)) ;
		QUrl Uri = QUrl(str);
//		QUrl Uri = QUrl::fromLocalFile(str);
		QImage image = QImageReader(str).read();
		QTextDocument * textDocument = document();
		textDocument->addResource( QTextDocument::ImageResource, Uri, QVariant (image) );
		QTextImageFormat imageFormat;
		imageFormat.setWidth( image.width() );
		imageFormat.setHeight( image.height() );
		imageFormat.setName( Uri.toString() );
		textCursor().insertImage(imageFormat);
	}

	QMimeData* mimeData = new QMimeData ;
	mimeData->setText("") ;
	event->setDropAction(Qt::MoveAction) ;
	event->accept() ;
	QDropEvent* dummy = new QDropEvent(event->posF(), Qt::MoveAction,mimeData, event->mouseButtons(), event->keyboardModifiers()) ;
	QTextEdit::dropEvent(dummy) ;
}

void CxTextEdit::keyPressEvent(QKeyEvent *event)
{
	QTextEdit::keyPressEvent(event) ;
	emit __showTextFormat() ;
}