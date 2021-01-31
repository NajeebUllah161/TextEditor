#include "centeredtoolbuttonstyle.h"

CenteredToolButtonStyle::CenteredToolButtonStyle(QToolButton* b, const QSize& sIcon)
	: QProxyStyle(), B(b), SICON(sIcon), m_nf(0), m_bEnabled(true), m_ny(0)
{
	b->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
	setParent(b);
}

void CenteredToolButtonStyle::drawItemText(QPainter *painter, const QRect &rect, int flags, const QPalette &pal,
										   bool enabled, const QString &text, QPalette::ColorRole textRole/* = QPalette::NoRole*/) const
{
	m_s = text;
	m_r = rect;
	m_nf = flags | Qt::AlignCenter;
	m_bEnabled = enabled;
	m_pal = pal;
	m_textRole = textRole;
	Draw(painter);
}

void CenteredToolButtonStyle::Draw(QPainter *painter) const
{
	if (m_ny) {
		if (m_r.y() != m_ny) return;
		auto r = m_r;
		r.adjust(SICON.width() + 8, m_ny = 0, itemTextRect(B->fontMetrics(), m_r, m_nf, m_bEnabled, m_s).width(), 0);
		QProxyStyle::drawItemPixmap(painter, r, Qt::AlignCenter, m_pic);
	}
	QProxyStyle::drawItemText(painter, m_r, m_nf, m_pal, m_bEnabled, m_s, m_textRole);
}