#pragma once
#include "Circle.h"
class Arc : public Circle
{
private:
	double alphaA;
	double alphaB;
public:
	Arc(Point origin = Point(0,0), double radius = 1, double alphaA = 0, double alphaB = 0);
	~Arc();
	Arc(const Arc& a);

	double getAlphaA() const;
	double getAlphaB() const;

	void draw();

	Arc operator=(const Arc& a);



};

std::ostream& operator<<(std::ostream& os, const Arc& a);

