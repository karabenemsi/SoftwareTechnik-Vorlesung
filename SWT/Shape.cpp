#include "stdafx.h"
#include "Shape.h"


Shape::Shape(Point origin)
{
	Shape::origin = origin;
}

Shape::~Shape()
{
}

Shape::Shape(const Shape& s)
{
	Shape::origin = s.getOrigin();
}

Point Shape::getOrigin() const
{
	return Shape::origin;
}

void Shape::move(double x, double y)
{

	Shape::origin.setX(Shape::origin.getX() + x);
	Shape::origin.setY(Shape::origin.getY() + y);

}
