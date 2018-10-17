#include "stdafx.h"
#include "Point.h"
#include <iostream>


Point::Point(double x, double y)
{
	Point::x = x;
	Point::y = y;
}

Point::~Point()
{
}

Point::Point(const Point& p)
{
	Point::x = p.getX();
	Point::y = p.getY();
}

double Point::getX() const
{
	return x;
}

double Point::getY() const
{
	return y;
}

void Point::setX(double x)
{
	Point::x = x;
}

void Point::setY(double y)
{
	Point::y = y;
}

Point Point::operator=(const Point& p)
{
	Point::x = p.getX();
	Point::y = p.getY();
	return *this;
}

bool Point::operator<(const Point& p, const Point& b)
{
	if (p.getX() < b.getX()) {
		return true;
	}
	else {
		return false;
	}
}

bool Point::operator>(const Point& p, const Point& b)
{
	if (p.getX() > b.getX()) {
		return true;
	}
	else {
		return false;
	}
}

std::ostream & operator<<(std::ostream & os, Point& r)
{
	os << "Punkt: (" << r.getX() << "," << r.getY() << ");";
	return os;
}
