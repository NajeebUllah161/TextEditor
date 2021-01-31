#ifndef CENTEREDTOOLBUTTONSTYLE_H
#define CENTEREDTOOLBUTTONSTYLE_H

#include <QProxyStyle>
#include <QToolButton>

class CenteredToolButtonStyle : public QProxyStyle
{
	Q_OBJECT

public:
	CenteredToolButtonStyle(QToolButton* b, const QSize& sIcon);

	virtual void drawItemPixmap(QPainter *painter, const QRect &rect, int, const QPixmap &pixmap) const
		override { m_pic = pixmap; m_ny = rect.y(); Draw(painter); }
	virtual void drawItemText(QPainter *painter, const QRect &rect, int flags, const QPalette &pal, bool enabled,
		const QString &text, QPalette::ColorRole textRole = QPalette::NoRole) const override;
	void Draw(QPainter *painter) const;

	const QToolButton* B;
	const QSize SICON;
	mutable QString m_s;
	mutable QPixmap m_pic;
	mutable QRect m_r;
	mutable int m_nf, m_ny;
	mutable bool m_bEnabled;
	mutable QPalette m_pal;
	mutable QPalette::ColorRole m_textRole;
};

#endif // CENTEREDTOOLBUTTONSTYLE_H
