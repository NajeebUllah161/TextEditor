#include "cxallchapterdlg.h"
#include <QDesktopWidget>

CxAllChapterDlg::CxAllChapterDlg(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this) ;
	QDesktopWidget* myWidget = new QDesktopWidget;
	int w = 6.93*myWidget->logicalDpiX() ;
	int h = 9.84*myWidget->logicalDpiY() ;
	ui.textEdit->setFixedWidth(w) ;
}

CxAllChapterDlg::~CxAllChapterDlg()
{

}

void CxAllChapterDlg::setData(QList<QTextDocument*> docList, QStringList chapterList )
{
	ui.textEdit->clear() ;
	int cnt = chapterList.count() ;
	for( int i = 0; i < cnt; i++ )
	{
		if( i )	ui.textEdit->insertPlainText(QString("%1").arg('\n')) ;
 		QTextCharFormat fmt;
 		fmt.setFont(QFont("Impact",13)) ;
 		QTextCursor cursor = ui.textEdit->textCursor();
 		cursor.mergeCharFormat(fmt);
		ui.textEdit->document()->setDefaultFont(QFont("Impact",13)) ;
		cursor.insertText(QString("CHAPTER: %1 -%2").arg(i+1).arg(chapterList[i])) ;
		ui.textEdit->insertPlainText(QString("%1").arg('\n')) ;
		ui.textEdit->insertHtml(docList[i]->toHtml()) ;
	}
}