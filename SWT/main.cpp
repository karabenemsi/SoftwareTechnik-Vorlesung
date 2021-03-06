// main.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include "Vector.h"
#include "Komplex.h"
#include "Rectangle.h"
#include "Point.h"
#include "Line.h"
#include "Circle.h"
#include "Arc.h"
#include "Picture.h"
#include <iostream>
#include <fstream>
#include <stack>
#include <list>
#include <set>
#include "StackBase.h"

using namespace std;


int main()
{

	ofstream file;
	file.open("file.txt", ios::app);

	std::cout << "Write to File: " << std::endl;


	std::cout << "======= " << "Vektor Start" << " ========" << std::endl;
	file << "======= " << "Vektor Start" << " ========" << std::endl;
	Vector a(3, 4);
	Vector *b = new Vector(4, 2);
	Vector c = a + *b;
	Vector v1 = c;

	std::cout << a << std::endl;
	file << a << std::endl;
	std::cout << c << std::endl;
	file << c << std::endl;
	std::cout << v1 << std::endl;
	file << v1 << std::endl;


	std::cout << c.mult(a) << std::endl;
	file << c.mult(a) << std::endl;
	std::cout << c.mult(3,4) << std::endl;
	file << c.mult(3,4) << std::endl;

	delete b;

	std::cout << "======= " << "Vektor Ende" << " ========" << std::endl << std::endl << std::endl;
	file << "======= " << "Vektor Ende" << " ========" << std::endl << std::endl << std::endl;


	std::cout << "======= " << "Zeiger Start" << " ========" << std::endl;
	file << "======= " << "Zeiger Start" << " ========" << std::endl;


	int x = 2;
	int *y;
	int &z = x;

	x = 3;
	y = &x;
	// x,y,z = 3
	z = 5;
	x = *y + z;
	*y = x + z;
	z = x + *y;

	std::cout << x << " " << *y << " " << z << " " << std::endl;
	file << x << " " << *y << " " << z << " " << std::endl;

	std::cout << "======= " << "Zeiger Ende" << " ========" << std::endl << std::endl << std::endl;
	file << "======= " << "Zeiger Ende" << " ========" << std::endl << std::endl << std::endl;



	std::cout << "======= " << "Komplex Start" << " ========" << std::endl;
	file << "======= " << "Komplex Start" << " ========" << std::endl;

	Komplex ka = Komplex(3, 2);
	Komplex kb = Komplex(1, 4);

	Komplex kc = ka * kb;
	Komplex kd = ka / kb;

	ka += kb;

	std::cout << kc << std::endl;
	file << kc << std::endl;
	std::cout << ka << std::endl;
	file << ka << std::endl;
	std::cout << kd << std::endl;
	file << kd << std::endl;

	std::cout << "======= " << "Komplex Ende" << " ========" << std::endl << std::endl << std::endl;
	file << "======= " << "Komplex Ende" << " ========" << std::endl << std::endl << std::endl;
	std::cout << "======= " << "Rechteck Start" << " ========" << std::endl;
	file << "======= " << "Rechteck Start" << " ========" << std::endl;

	Rectangle ra = Rectangle(Point(2, 3), 4, 6);

	Rectangle rb = Rectangle(Point(2, 4), 5, 7);

	ra = rb;

	std::cout << ra << std::endl;
	file << ra << std::endl;
	std::cout << rb << std::endl;
	file << rb << std::endl;


	std::cout << "======= " << "Rechteck Ende" << " ========" << std::endl << std::endl << std::endl;
	file << "======= " << "Rechteck Ende" << " ========" << std::endl << std::endl << std::endl;
	std::cout << "======= " << "Stack Start" << " ========" << std::endl;
	file << "======= " << "Stack Start" << " ========" << std::endl;

	Vector vec1 = Vector(3, 6);
	Vector vec2 = Vector(5, 1);
	Vector vec3 = Vector(2, 2);

	std::stack<Vector> vectorStack;
	
	vectorStack.push(vec1);
	vectorStack.push(vec2);
	vectorStack.push(vec3);

	std::cout << "Groesse Stack: " << vectorStack.size() << std::endl;
	file << "Groesse Stack: " << vectorStack.size() << std::endl;

	std::cout << "Oberstes Element: " << vectorStack.top() << std::endl;
	file << "Oberstes Element: " << vectorStack.top() << std::endl;


	vectorStack.pop();
	vectorStack.pop();
	vectorStack.pop();


	std::cout << "======= " << "Stack Ende" << " ========" << std::endl << std::endl << std::endl;
	file << "======= " << "Stack Ende" << " ========" << std::endl << std::endl << std::endl;

	std::cout << "======= " << "Vererbung Start" << " ========" << std::endl;
	file << "======= " << "Vererbung Start" << " ========" << std::endl;


	Point point1 = Point(5, 7);
	Point point2 = Point(3, 5);

	Line line1 = Line(point1, Vector(3,4));

	Circle circle1 = Circle(point2, 3.5);

	std::cout << line1;
	file << line1;

	std::cout << circle1;
	file << circle1;

	circle1.move(3, 5);

	line1.move(2, 2);

	std::cout << line1;
	file << line1;

	std::cout << circle1;
	file << circle1;

	Arc arc1 = Arc(point2, 4, 39, 20);

	std::cout << arc1;
	file << arc1;

	Picture pic1 = Picture();
	Picture pic2 = Picture();
	pic1.addShape(&arc1);
	pic1.addShape(&circle1);
	pic2.addShape(&line1);
	pic1.addShape(&pic2);

	std::cout << pic1 << std::endl;
	file << pic1 << std::endl;

	std::cout << "======= " << "Vererbung Ende" << " ========" << std::endl << std::endl << std::endl;
	file << "======= " << "Vererbung Ende" << " ========" << std::endl << std::endl << std::endl;

	std::cout << "======= " << "Template Start" << " ========" << std::endl;
	file << "======= " << "Template Start" << " ========" << std::endl;

	StackBase<int> stack;
	stack.push(2);
	stack.push(3);

	std::cout << stack.pop() << "   " << stack.pop() << std::endl;
	file << stack.pop() << "   " << stack.pop() << std::endl;

	StackBase<Point> pStack;
	pStack.push(Point(2, 4));
	
	std::cout << "======= " << "Template Ende" << " ========" << std::endl << std::endl << std::endl;
	file << "======= " << "Template Ende" << " ========" << std::endl << std::endl << std::endl;



	std::cout << "======= " << "STL Start" << " ========" << std::endl;
	file << "======= " << "STL Start" << " ========" << std::endl;

	std::list<int> list;
	list.push_back(1);
	list.push_back(2);
	list.push_back(3);
	list.push_back(4);
	list.push_back(5);
	list.push_back(6);


	for (std::list<int>::reverse_iterator it = list.rbegin(); it != list.rend(); ++it) {
		std::cout << *it  << std::endl;
		file << *it << std::endl;
	}

	std::list<Point> plist;
	plist.push_back(Point(0, 0));
	plist.push_back(Point(1, 1));
	plist.push_back(Point(2, 2));
	plist.push_back(Point(3, 3));


	for (std::list<Point>::reverse_iterator it = plist.rbegin(); it != plist.rend(); ++it) {
		std::cout << *it << std::endl;
		file << *it << std::endl;
	}

	std::set<Point> pset;
	pset.insert(Point(0, 0));
	pset.insert(Point(1, 1));
	pset.insert(Point(2, 2));
	pset.insert(Point(3, 3));


	for (std::set<Point>::iterator it = pset.begin(); it != pset.end(); ++it) {
		std::cout << it->getX() << std::endl;
		file << it->getX() << std::endl;
	}




	std::cout << "======= " << "STL Ende" << " ========" << std::endl << std::endl << std::endl;
	file << "======= " << "STL Ende" << " ========" << std::endl << std::endl << std::endl;


	file.close();
	system("pause");


	

    return 0;
}