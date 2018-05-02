#include "stdafx.h"
#include "Rectangle.h"
#include "Point.h"
#include <iostream>


Rectangle::Rectangle(Point origin, double width, double height)
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
	Rectangle::origin = origin;
}


Rectangle::~Rectangle()
{
}

Rectangle::Rectangle(const Rectangle& r)
{
	Rectangle::origin = r.getOrigin();
	Rectangle::height = r.getHeight();
	Rectangle::width = r.getWidth();
}

double Rectangle::getHeight() const
{
	return Rectangle::height;
}

double Rectangle::getWidth() const
{
	return Rectangle::width;
}

void Rectangle::draw()
{
	std::cout << this << std::endl;
}

Rectangle Rectangle::operator=(const Rectangle& a) {
	Rectangle::origin = a.getOrigin();
	Rectangle::height = a.getHeight();
	Rectangle::width = a.getWidth();
	return *this;
}

std::ostream& operator<<(std::ostream& os, Rectangle& r) {
	int height = r.getHeight() / 3;
os << " (" << r.getOrigin().getX() << "," << r.getOrigin().getY() + r.getHeight() << ")" << std::endl
<< "  +---------+ C(" << r.getOrigin().getX() + r.getWidth() << "," << r.getOrigin().getY() + r.getHeight() << ")" << std::endl
<< "  |         |  " << std::endl
<< "  |         |  " << std::endl
<< "  +---------+ (" << r.getOrigin().getX() + r.getWidth() << "," << r.getOrigin().getY() << ") " << std::endl
<< " (" << r.getOrigin().getX() << "," << r.getOrigin().getY() << ")" << std::endl;
	return os;
}