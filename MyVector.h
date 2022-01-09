#pragma once

template <class T>
class MyVector {
	public:
		MyVector();
		int size();
		int capacity();
		bool empty();
		void push_back(T item);
		void pop_back(int n);
		void pop_back();
		void clear();
		T &operator[] (int i);
		void resize();
		void print();

	private:
		T *array;
		int array_size;
		int array_capacity;
};

#include "MyVector.cxx"
