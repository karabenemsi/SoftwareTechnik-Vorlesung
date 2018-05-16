#pragma once
#include "Shape.h"
#include <iostream>
#include <vector>
#include "Bridge.h"

class Picture: public Shape
{
private:
		std::vector<Shape*> shapes;

		PrintImplement* printi;

public:
	Picture();
	~Picture();
	Picture(const Picture& p);
	void addShape(Shape* s);
	void draw();
	Shape* getShape(int index) const;
	std::vector<Shape*> getShapes() const;
	int countShapes() const;

	Picture operator=(const Picture& p);
};

std::ostream & operator<<(std::ostream & os, const Picture& p);

