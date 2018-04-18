#include "stdafx.h"
#include "Rectangle.h"
#include "Point.h"
#include <iostream>


Rectangle::Rectangle(double originX, double originY, double width, double height)
{
	//Validate width and height
	if (width <= 0 || height <= 0) {
		//Erorr
		throw 1;
	}
	// Set Width
	Rectangle::height = height;
	Rectangle::width = width;
	//set Point
	Rectangle::origin = Point(originX, originY);
}


Rectangle::~Rectangle()
{
}

Rectangle::Rectangle(const Rectangle & r)
{
	Rectangle::origin = r.getOrigin();
	Rectangle::height = r.getHeight();
	Rectangle::width = r.getWidth();
}

Point Rectangle::getOrigin() const
{
	return origin;
}

double Rectangle::getHeight() const
{
	return Rectangle::height;
}

double Rectangle::getWidth() const
{
	return Rectangle::width;
}

Rectangle Rectangle::operator=(const Rectangle& a) {
	Rectangle::origin = a.getOrigin();
	Rectangle::height = a.getHeight();
	Rectangle::width = a.getWidth();
	return *this;
}

std::ostream& operator<<(std::ostream& os, Rectangle& r) {
	os << "Rechteck: A(" << r.getOrigin().getX() << "," << r.getOrigin().getY() << ");" << std::endl
		<< "          B(" << r.getOrigin().getX() + r.getWidth() << "," << r.getOrigin().getY() << ");" << std::endl
		<< "          C(" << r.getOrigin().getX() + r.getWidth() << "," << r.getOrigin().getY() + r.getHeight() << ");" << std::endl
		<< "          D(" << r.getOrigin().getX() << "," << r.getOrigin().getY() + r.getHeight() << ");";
	return os;
}