#pragma once
#include "Shape.h"


class Circle : public Shape
{
protected:
	Point m_center;
public:
	Circle(const Point& center, unsigned radius, const Color c);
	void move(const Point& p);
	void draw() const;
	double length() const;
	string who_am_i();
};