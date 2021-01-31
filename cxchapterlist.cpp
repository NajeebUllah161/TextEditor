#include "cxchapterlist.h"
#include <QMessageBox>
#include <QLabel>
#include <QContextMenuEvent>
#include <QMenu>
#include <QAction>
#include <QCursor>
#include <QInputDialog>
#include <QDir>
#include <QScrollBar>
#include <QFontMetrics>

#define ITEMW 100
#define ITEMH 42
CxChapterList::CxChapterList(QWidget *parent)
	: QListWidget(parent)
{
	setViewMode(QListView::ListMode) ;
	setLayoutDirection(Qt::LeftToRight) ;
	setSpacing(3) ;
	setFlow(QListView::LeftToRight) ;
	setWrapping(false);
	setIconSize(QSize(ITEMW,ITEMH)) ;
	setDragDropMode(QAbstractItemView::DragDrop) ;
	setDragEnabled(true) ;
	setDefaultDropAction(Qt::MoveAction) ;
	setSelectionMode(QAbstractItemView::SingleSelection) ;


	connect( this, SIGNAL(itemSelectionChanged()), this, SLOT(onSelectionChanged())) ;
	m_isRemoteSelection = false ;
}

CxChapterList::~CxChapterList()
{

}

void CxChapterList::addChapter( QString txt )
{
	m_chapterList << txt ;
	QListWidgetItem* item = new QListWidgetItem(QString("%1-%2").arg(m_chapterList.count()).arg(txt)) ;
	int cnt = count() ;
	emit __preChanged(cnt,true) ;
	addItem(item) ;
	QLabel* lb = new QLabel ;
	int w = ITEMW ;
	item->setSizeHint(QSize(w,ITEMH)) ;
	lb->resize(w,ITEMH) ;
	lb->setFont(QFont("Impact",16)) ;
	lb->setAlignment(Qt::AlignCenter) ;
	lb->setText(QString("%1-%2").arg(m_chapterList.count()).arg(txt)) ;
	item->setData(Qt::EditRole,txt) ;
	setItemWidget(item,lb) ;
	clearSelection() ;
	item->setSelected(true) ;
	onChanged() ;
	resizeItem(item) ;
}

void CxChapterList::onSelectionChanged()
{
	if( m_isRemoteSelection ) return ;
//	QMessageBox::information(NULL,"","A") ;
	for( int i = count()-1; i >= 0; i-- )
	{
		QListWidgetItem* var = item(i) ;
		bool sel = var->isSelected() ;
		QLabel* lb = (QLabel*)itemWidget(var) ;
		if(!lb) continue ;
		if( sel ) emit __selectChapter(i) ;
		if( sel )
		{
			lb->setStyleSheet("QLabel{background:#fff758;}QLabel::hover{background:#e5de51;}") ;
		}
		else
		{
			lb->setStyleSheet("QLabel{background:#a2a2a2;}QLabel::hover{background:#919191;}") ;
		}
//		var->setBackground(QBrush(QColor(sel?"#fff200":"#919191"))) ;
	}
}

void CxChapterList::dropEvent(QDropEvent* event)
{
	QListWidget::dropEvent(event) ;
	int dif = -1 ;
	for( int i = 0; i < count(); i++ )
	{
		int id = item(i)->data(Qt::EditRole+1).toInt() ;
		if( id != i )
		{
			if( dif != -1 ) emit __swap(dif,id) ;
			else dif = id ;
		}
	}
	if( dif != -1 ) onChanged() ;
}

void CxChapterList::contextMenuEvent(QContextMenuEvent *event)
{
	QListWidgetItem*cur = itemAt(event->pos()) ;
	if(cur)
	{
		QMenu menu ;
		menu.setFont(QFont("Impact",16)) ;
		QAction* changeAction = menu.addAction("Change") ;
		QAction* deleteAction = menu.addAction("Delete") ;
		QAction* ret = menu.exec(QCursor::pos()) ;
		if( ret == changeAction )
		{
			bool ok;
			QString text = QInputDialog::getText(NULL, tr("Change Chapter"),
				tr("Chapter Name:"), QLineEdit::Normal, cur->data(Qt::EditRole).toString(), &ok);
			if( !ok || text.isEmpty() ) return ;
			QLabel* lb = getLabel(cur) ;
			cur->setData(Qt::EditRole,text) ;
			lb->setText(QString("%1-%2").arg(row(cur)+1).arg(text)) ;
			resizeItem(cur) ;
			onChanged() ;
		}
		if( ret == deleteAction )
		{
			int r = row(cur) ;
			m_isRemoteSelection = true ;
			emit __preChanged(r,false) ;
			takeItem(r) ;
			m_isRemoteSelection = false ;
			onSelectionChanged() ;
			onChanged() ;
		}
	}
}

void CxChapterList::onChanged()
{
	m_chapterList.clear() ;
	for( int i = 0; i < count(); i++ )
	{
		QListWidgetItem* var = item(i) ;
		var->setData(Qt::EditRole+1,i) ;
		getLabel(var)->setText(QString("%1-%2").arg(i+1).arg(var->data(Qt::EditRole).toString())) ;
		m_chapterList << var->data(Qt::EditRole).toString() ;
	}
	emit __changed() ;
}

void CxChapterList::onNext()
{
	int cnt = count() ;
	int cur = currentRow() ;
	if( !cnt || cur + 1 >= count() ) return ;
//	scrollToItem(item(cur+1)) ;
//	scrollContentsBy(30,0) ;
//	QMessageBox::information(NULL,"",QString("%1").arg(horizontalScrollBar()->maximum())) ;
	setCurrentRow(cur+1) ;
//	horizontalScrollBar()->setValue(horizontalScrollBar()->value()+1) ;
//	QMessageBox::information(NULL,"",QString("%1").arg(horizontalScrollBar()->value())) ;
}

void CxChapterList::onPrevious()
{
	int cnt = count() ;
	int cur = currentRow() ;
	if( !cnt || !cur ) return ;
//	scrollContentsBy(-30,0) ;
//	scrollToItem(item(cur-1)) ;
//	horizontalScrollBar()->setValue(horizontalScrollBar()->value()-1) ;
	setCurrentRow(cur-1) ;
}

void CxChapterList::resizeItem(QListWidgetItem* item)
{
	QFontMetrics metrics(QFont("Impact",16)) ;
	QLabel* lb = getLabel(item) ;
	if( !lb ) return ;
	int w = qMax( metrics.width(lb->text())+20, ITEMW ) ;
	item->setSizeHint(QSize(w,ITEMH)); 
	lb->resize(w,ITEMH) ;
}