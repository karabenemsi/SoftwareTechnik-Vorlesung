#include "stdafx.h"
#include "Line.h"
#include "Point.h"
#include "Vector.h"



Line::Line(Point origin, Vector toVec){
	Line::origin = origin;
	Line::toVec = toVec;
}

Line::~Line()
{
}

Line::Line(const Line& l)
{
	Line::origin = l.getOrigin();
	Line::toVec = l.getToVec();
}

Vector Line::getToVec() const
{
	return Line::toVec;
}

void Line::draw()
{
	std::cout << this << std::endl;
}

Line Line::operator=(const Line& l)
{
	Line::origin = l.getOrigin();
	Line::toVec = l.getToVec();
	return *this;
}


std::ostream& operator<<(std::ostream& os, Line& l) {
	os << "Linie: A(" << l.getOrigin().getX() << "," << l.getOrigin().getY() << ");" << std::endl
		<< "       B(" << l.getOrigin().getX() + l.getToVec().getX() << "," << l.getOrigin().getY() + l.getToVec().getY() << ");" << std::endl;
	return os;
}