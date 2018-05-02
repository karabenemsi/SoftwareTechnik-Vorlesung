#pragma once
#include "Shape.h"
#include "Point.h"
#include "Vector.h"
class Line :
	public Shape
{
private:
	Vector toVec;
public:
	Line(Point origin = Point(0,0), Vector toVec = Vector(0,1));
	~Line();
	Line(const Line& l);

	Vector getToVec() const;

	void draw();
	
	Line operator=(const Line& l);
};

std::ostream& operator<<(std::ostream& os, Line& l);

