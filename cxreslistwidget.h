#ifndef CXRESLISTWIDGET_H
#define CXRESLISTWIDGET_H

#include <QListWidget>
#include <QLabel>
#include <QMimeData>
#include "cxcontentlabel.h"
#include "cxpreviewlabel.h"

#define TEXTTYPE 0
#define IMAGETYPE 1

class CxResListWidget : public QListWidget
{
	Q_OBJECT

public:
	CxResListWidget(QWidget *parent);
	~CxResListWidget();
	void addText(QString txt) ;
	void addImage(QString fileName) ;
	void addImage( int pos, QString fileName ) ;
	void addText( int pos, QString txt ) ;
	void refresh() ;
	CxContentLabel* getLabel(QListWidgetItem* item) ;
	void setIndex( int id ) { m_index = id ; }
	int index(){ return m_index ;}
	void setData( QStringList contentList, QList<int> typeList ) ;
	QStringList contentList(){ return m_contentList ; }
	QList<int> contentTypeList() { return m_typeList ; }
	QString getStyleSheet( bool isSelected, int row ) ;
private slots:
	void onChangeItem( QListWidgetItem* item ) ;
	void onSelectionChanged() ;
	void onShowPreview( QListWidgetItem* item, bool on, QPoint pnt ) ;
signals:
	void __changed(int) ;
	void __moveContent( int id, QListWidgetItem* item ) ;
protected:
	void dragMoveEvent(QDragMoveEvent* e) ;
	void dragEnterEvent(QDragEnterEvent* event) ;
	Qt::DropAction supportedDropActions() ;
	void dropEvent(QDropEvent* event) ;
	void contextMenuEvent(QContextMenuEvent *event) ;
	void startDrag(Qt::DropActions supportedActions) ;
	void showEvent(QShowEvent* event) ;
	void resizeEvent(QResizeEvent* event) ;
	QMimeData *mimeData(const QList<QListWidgetItem *> items) const ;
private:
	void refit() ;
	QStringList m_contentList ;
	QList<int> m_typeList ;
	int m_index ;
	bool m_isRemoteMode ;
	CxPreviewLabel* m_preView ;
	int m_dragIndex ;
};

#endif // CXRESLISTWIDGET_H
