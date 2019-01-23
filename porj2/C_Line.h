#pragma once
#include "Line.h"


class C_Line : public Line { //colored line
	color m_color;
public:
	C_Line(const Point& a, const Point& b, color c) : Line(a, b), m_color(c) {}
	void draw() const;
};