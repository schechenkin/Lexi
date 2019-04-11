#pragma once
#include "glyph.h"
#include <QFont>

class Character : public Glyph
{
public:
	Character(char ch, const QFont&	font);
	void Draw(int x, int y, QPainter& painter) override;
	Rect GetBound() override;
private:
	char m_ch;
	QFont m_font;
};