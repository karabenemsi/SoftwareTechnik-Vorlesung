#include "stdafx.h"
#include "Vector.h"
#include <iostream>

Vector::Vector(int x, int y)
{
	this->x = x;
	this->y = y;
}

Vector::~Vector()
{
}

Vector::Vector(const Vector& v){
	x = v.getX();
	y = v.getY();
}

int Vector::getX() const
{
	return x;
}

int Vector::getY() const
{
	return y;
}

void Vector::print()
{
	std::cout << "Vector - X: "<< this->getX() << " Y: " << this->getY() << std::endl;
}

int Vector::mult(int x, int y) {
	return(this->x*x + this->y*y);
}

int Vector::mult(const Vector& v) {
	return(this->x*v.getX() + this->y*v.getY());
}

Vector Vector::operator=(const Vector& v)
{
	Vector::x = v.getX();
	Vector::y = v.getY();
	return *this;
}


Vector operator+(Vector a, Vector b) {
	return Vector(b.getX() + a.getX(), b.getY() + a.getY());
}

std::ostream & operator<<(std::ostream & os, Vector& v)
{
	os << "Vector: X: " << v.getX() << " Y: " << v.getY();
	return os;
}