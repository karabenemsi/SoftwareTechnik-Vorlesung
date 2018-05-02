#include "stdafx.h"
#include "Circle.h"


Circle::Circle(Point origin, double radius)
{
	Circle::origin = origin;
	Circle::radius = radius;
}

Circle::~Circle()
{
}

Circle::Circle(const Circle& c)
{
	Circle::origin = c.getOrigin();
	Circle::radius = c.getRadius();
}

double Circle::getRadius() const
{
	return Circle::radius;
}

void Circle::draw()
{
	std::cout << this << std::endl;
}

Circle Circle::operator=(const Circle& c)
{
	Circle::origin = c.getOrigin();
	Circle::radius = c.getRadius();
	return *this;
}

std::ostream & operator<<(std::ostream & os, const Circle& c)
{
	os << "Kreis: M(" << c.getOrigin().getX() << "," << c.getOrigin().getY() << ");" << std::endl
	   << "       Radius: "<< c.getRadius() << std::endl;
	return os;
}
