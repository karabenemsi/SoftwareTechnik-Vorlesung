#include "stdafx.h"
#include "Picture.h"
#include "Point.h"


Picture::Picture()
{
}


Picture::~Picture()
{
}

Picture::Picture(const Picture& p)
{
	Picture::shapes = p.getShapes();
}

void Picture::addShape(Shape* s)
{
	Picture::shapes.push_back(s);
}

void Picture::draw()
{
}

Shape* Picture::getShape(int index) const
{
	return Picture::shapes.at(index);
}

std::vector<Shape*> Picture::getShapes() const
{
	return Picture::shapes;
}

int Picture::countShapes() const
{
	return Picture::shapes.size();
}

Picture Picture::operator=(const Picture& p)
{
	Picture::shapes = p.getShapes();
	return *this;
}

std::ostream & operator<<(std::ostream & os, const Picture& p)
{	
	os << "-- Picture -----" << std::endl;
	for (auto const shape : p.getShapes()){
		shape->draw();
		os << "Shape:  " ;
		os << shape << std::endl;
	}
	os << "----------------" << std::endl;
	return os;
}
