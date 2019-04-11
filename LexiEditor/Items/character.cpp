#include "character.h"

#include <QString>
#include <QPainter>

Character::Character(char ch, const QFont& font)
	: m_ch(ch), m_font(font)
{
}

void Character::Draw(int x, int y, QPainter& painter)
{
	painter.setFont(m_font);
	painter.drawText(x, y, QString(m_ch));
}

Rect Character::GetBound()
{
	QFontMetrics fm(m_font);
	
	return Rect(fm.height(), fm.width(m_ch));
}
