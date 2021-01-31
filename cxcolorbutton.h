#ifndef CXCOLORBUTTON_H
#define CXCOLORBUTTON_H

#include <QToolButton>

class CxColorButton : public QToolButton
{
    Q_OBJECT
public:
    explicit CxColorButton(QWidget *parent = 0);
    QColor color(){ return m_color ; }
    void setColor(QColor col) ;
signals:
    
public slots:
    void onClick() ;
protected:
    void paintEvent(QPaintEvent *event) ;
    QColor m_color ;
    
};

#endif // CXCOLORBUTTON_H
