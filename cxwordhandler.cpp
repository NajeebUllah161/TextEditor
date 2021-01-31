#include "cxwordhandler.h"
#include <QFile>

CxWordHandler::CxWordHandler(QWidget *parent)
	: QWidget(parent)
{

}

CxWordHandler::~CxWordHandler()
{

}

QString CxWordHandler::readDoc(QString fileName)
{
	if( !QFile(fileName).exists() )
	{
		return "" ;
	}
	QAxWidget *word = new QAxWidget("Word.Application", this, Qt::MSWindowsOwnDC);
	word->setProperty("DisplayAlerts", false);
	word->setProperty("Visible", false);

	QAxObject *documents = new QAxObject;
	documents = word->querySubObject("Documents");

	documents->dynamicCall("Open(const QString&)", fileName);

	QAxObject *document = word->querySubObject("ActiveDocument");

	QAxObject *pRange = document->querySubObject("Range()");
	pRange->dynamicCall("WholeStory()");

	QString text = pRange->property("Text").toString();

	document->dynamicCall("Close (boolean)", false);
	word->dynamicCall("Quit(void)");
	return text ;
}
