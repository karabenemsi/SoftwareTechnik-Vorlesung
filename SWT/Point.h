#pragma once
#include <iostream>
class Point
{
private:
	double x;
	double y;
public:
	Point(double x = 0, double y = 0);
	~Point();
	Point(const Point& p);
	
	double getX() const;
	double getY() const;
	void setX(double x);
	void setY(double y);
	Point operator=(const Point& p);

};

std::ostream& operator<<(std::ostream& os, Point& r);


