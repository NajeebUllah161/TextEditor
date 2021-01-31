#ifndef CXALLCHAPTERDLG_H
#define CXALLCHAPTERDLG_H

#include <QDialog>
#include "ui_dlg_all_chapter.h"

class CxAllChapterDlg : public QDialog
{
	Q_OBJECT

public:
	CxAllChapterDlg(QWidget *parent=0);
	~CxAllChapterDlg();
	void setData(QList<QTextDocument*> docList, QStringList chapterList ) ;
private:
	Ui::Dialog_All_Chapters ui ;	
};

#endif // CXALLCHAPTERDLG_H
