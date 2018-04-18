#pragma once
#include <iostream>
class Vector
{
private:
	int x;
	int y;
public:
	Vector(int x = 1, int y = 1);
	Vector();
	Vector(const Vector& v);
	~Vector();

	int getX() const;
	int getY() const;
	void print();
	int mult(int x, int y);
	int mult(const Vector & v);
};
Vector operator+(Vector a, Vector b);
std::ostream & operator<<(std::ostream & os, Vector & v);

