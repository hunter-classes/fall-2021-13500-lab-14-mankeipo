#include <iostream>
using namespace std;
#include "MyVector.h"

int main() {
	MyVector<int> t;
	cout << "The size is " << t.size() << endl;
	cout << "The capacity is " << t.capacity() << endl;
	t.push_back(12);
	t.push_back(14);
	t.push_back(16);
	t.push_back(18);
	t.push_back(20);
	t.print();
	cout << "The capacity is " << t.capacity() << endl;
	/*
	t.pop_back();
	t.print();
	cout << "The size is " << t.size() << endl;
	cout << endl;
	t.pop_back(0);
	t.print();
        cout << "The size is " << t.size() << endl;
	t.clear();
	if(t.empty()) {
		cout << "true!" << endl;
	} else {
		cout << "false" << endl;
	}
	*/
}
