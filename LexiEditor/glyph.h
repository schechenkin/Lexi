#pragma once
#ifndef GLYPH_H
#define GLYPH_H
#include <QPainter>
#include "Common/point.h"
#include "Common/rect.h"

class Glyph
{
public:
	Glyph() = default;
	~Glyph() = default;

	// appearance
	virtual void Draw(int x, int y, QPainter& painter) = 0;
	virtual Rect GetBound() = 0;
	/*
	// hit detection
	virtual bool Intersects(const Point&);

	// structure
	virtual void Insert(Glyph*, int);
	virtual void Remove(Glyph*);
	virtual Glyph* Child(int);
	virtual Glyph* Parent();*/
};

#endif // GLYPH_H