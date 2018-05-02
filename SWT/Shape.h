#pragma once

#include "Point.h"
#include <iostream>

class Shape
{
protected:
	Point origin;
public:
	Shape(Point origin = Point(0,0));
	~Shape();
	Shape(const Shape& s);

	Point getOrigin() const;

	void move(double x, double y);

	virtual void draw() = 0;
};

std::ostream& operator<<(std::ostream& os, Shape& s);

