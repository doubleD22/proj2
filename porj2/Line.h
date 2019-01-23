		#pragma once

#include "Shape.h"


class Line : public Shape 
{
protected:
	Point m_end; //the end point for the line

public:
	Line(const Point& p1, const Point& p2, const Color c); //constructor
	void move(const Point& p);          // add the coordinate of p for m_end and m_org
	void draw() const;
	double length() const;
	string who_am_i() { return "line"; } //yep, im a line
	double area() const { return 0; }
};

