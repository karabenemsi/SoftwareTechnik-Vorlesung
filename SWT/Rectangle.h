#pragma once
#include "Point.h"
#include <iostream>

class Rectangle
{
private:
	double height;
	double width;
	Point origin;
public:
	Rectangle(double originX = 0, double originY = 0, double width = 1, double height = 1);
	~Rectangle();
	Rectangle(const Rectangle& r);

	Point getOrigin() const;
	double getHeight() const;
	double getWidth() const;
	Rectangle operator=(const Rectangle& a);
};

std::ostream& operator<<(std::ostream& os, Rectangle& r);


