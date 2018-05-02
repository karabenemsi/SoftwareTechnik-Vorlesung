#include "stdafx.h"
#include "Arc.h"


Arc::Arc(Point origin, double radius, double alphaA, double alphaB): Circle(origin, radius)
{
	Arc::alphaA = alphaA;
	Arc::alphaB = alphaB;
}

Arc::~Arc()
{
}

Arc::Arc(const Arc& a)
{
	Arc::origin = a.getOrigin();
	Arc::radius = a.getRadius();
	Arc::alphaA = a.getAlphaA();
	Arc::alphaB = a.getAlphaB();
}

double Arc::getAlphaA() const
{
	return Arc::alphaB;
}

double Arc::getAlphaB() const
{
	return Arc::alphaA;
}

void Arc::draw()
{
	std::cout << this << std::endl;
}

Arc Arc::operator=(const Arc& a)
{
	Arc::origin = a.getOrigin();
	Arc::radius = a.getRadius();
	Arc::alphaA = a.getAlphaA();
	Arc::alphaB = a.getAlphaB();
	return *this;
}

std::ostream & operator<<(std::ostream & os, const Arc& a)
{
	os << "Bogen: M(" << a.getOrigin().getX() << "," << a.getOrigin().getY() << ");" << std::endl
		<< "       Radius: " << a.getRadius() << std::endl
		<< "       Winkel 1: "<< a.getAlphaA() << " Grad" << std::endl
		<< "       Winkel 2: " << a.getAlphaB() << " Grad" << std::endl;
	return os;
}
