#pragma once

class PrintImplement
{
public:
	PrintImplement();
	virtual ~PrintImplement();

	virtual void print() = 0;
};

class PrintImplementA : public PrintImplement {
public:
	PrintImplementA();
	~PrintImplementA();

	void print();
};

class PrintImplementB : public PrintImplement {
public:
	PrintImplementB();
	~PrintImplementB();

	void print();
};



