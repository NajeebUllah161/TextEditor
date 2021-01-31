#ifndef CXCHAPTERLIST_H
#define CXCHAPTERLIST_H

#include <QListWidget>
#include <QLabel>

class CxChapterList : public QListWidget
{
	Q_OBJECT

public:
	CxChapterList(QWidget *parent);
	~CxChapterList();
	void addChapter( QString txt ) ;
	QLabel* getLabel(QListWidgetItem* item){ return (QLabel*)(itemWidget(item)); }
	QStringList chapterList(){ return m_chapterList ; }
	void resizeItem( QListWidgetItem* item ) ;
public slots:
	void onNext() ;
	void onPrevious() ;
	void onSelectionChanged() ;
	void onChanged() ;
signals:
	void __preChanged(int id, bool isAdd) ;
	void __selectChapter(int) ;
	void __changed() ;
	void __swap( int st, int en ) ;
protected:
	void contextMenuEvent(QContextMenuEvent *event) ;
	void dropEvent(QDropEvent* event) ;

private:
	QStringList m_chapterList ;
	bool m_isRemoteSelection ;
};

#endif // CXCHAPTERLIST_H
