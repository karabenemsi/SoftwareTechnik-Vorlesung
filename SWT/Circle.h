#pragma once
#include "Shape.h"

class Circle : public Shape
{
protected:
	double radius;
public:
	Circle(Point origin = Point(0, 0), double radius = 1);
	~Circle();
	Circle(const Circle& c);

	double getRadius() const;

	void draw();

	Circle operator=(const Circle& c);
};

std::ostream& operator<<(std::ostream& os, const Circle& c);

