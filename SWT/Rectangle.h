#pragma once
#include "Point.h"
#include <iostream>
#include "Shape.h"

class Rectangle : public Shape
{
private:
	double height;
	double width;
public:
	Rectangle(Point origin = Point(0, 0), double width = 1, double height = 1);
	~Rectangle();
	Rectangle(const Rectangle& r);

	double getHeight() const;
	double getWidth() const;

	void draw();
	Rectangle operator=(const Rectangle& a);
};

std::ostream& operator<<(std::ostream& os, Rectangle& r);


