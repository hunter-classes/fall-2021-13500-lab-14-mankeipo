#include <iostream>
#include "MyVector.h"
using namespace std;

template <class T>
MyVector<T>::MyVector() {
	array_size = 0;
	array_capacity = 1;
	array = new T[array_capacity];
}

template <class T>
T &MyVector<T>::operator[] (int i) {
	return array[i];	
}

template <class T>
void MyVector<T>::push_back(T item) {
	if(array_size == array_capacity) {
		array_capacity++;
		T *replace = new T [array_capacity];
		for(int i = 0; i < array_size; i++) {
                	replace[i] = array[i];
        	}
		delete[] array;
		array = replace;
	}
	array[array_size] = item;
	array_size++;
}

template <class T>
int MyVector<T>::size() {
	return array_size;
}

template <class T>
int MyVector<T>::capacity() {
	return array_capacity;
}

template <class T>
void MyVector<T>::pop_back() {
	T *replace = new T[array_capacity];
	for(int i = 0; i < array_size-1; i++) {
		replace[i] = array[i];
	}
	delete[] array;
	array = replace;
	array_size--;
}

template <class T>
void MyVector<T>::print() {
	for(int i = 0; i < array_size; i++) {
		cout << array[i]<< endl;
	}
}

template <class T>
void MyVector<T>::pop_back(int n) {
	for(int i = n; i < array_size - n - 1; i++) {
		array[i] = array[i+1];
	}
	T *replace = new T [array_capacity];
	for(int i = 0; i < array_size-1; i++) {
		replace[i] = array[i];
	}
	delete[] array;
	array = replace;
	array_size--;
}

template <class T>
bool MyVector<T>::empty() {
	if(array_size == 0) {
		return true;
	} else { 
		return false;
	}
}

template <class T>
void MyVector<T>::clear() {
	T *replace = new T[array_capacity];
	delete[] array;
	array = replace;
	array_size = 0;
}
