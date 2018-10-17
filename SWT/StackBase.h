#pragma once
#include <array>

template <class T> class StackBase
{
private:
	T array[100];
	int size;
public:
	StackBase(){
		size = 0;
}
	~StackBase() {
	}

	T pop() {
		T ret = this->array[size - 1];
		size--;
		return ret;
	}

	void push(T e) {
		this->array[size] = e;
		size++;
	}
};

