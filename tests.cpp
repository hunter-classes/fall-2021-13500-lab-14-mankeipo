#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN 
#include "doctest.h" 
#include "MyVector.h"

TEST_CASE("size() + capacity()") {
	MyVector<int> t;
	CHECK(t.size() == 0);
	CHECK(t.capacity() == 1);
	t.push_back(12);
	t.push_back(14);
	t.push_back(16);
	t.push_back(18);
	t.push_back(20);
	CHECK(t.size() == 5);
	CHECK(t.capacity() == 5);	
}

TEST_CASE("empty()") {
	MyVector<int> t;
	CHECK(t.empty() == 1);
	t.push_back(12);
	CHECK(t.empty() == 0);
}

TEST_CASE("push_back(item) + [] operator") {
	MyVector<int> t;
	t.push_back(12);
        t.push_back(14);
        t.push_back(16);
        t.push_back(18);
        t.push_back(20);
	CHECK(t[0] == 12);
	CHECK(t[1] == 14);
	CHECK(t[2] == 16);
	CHECK(t[3] == 18);
	CHECK(t[4] == 20);
}

TEST_CASE("pop_back() + pop_back(n)") {
	MyVector<int> t;
	t.push_back(12);
        t.push_back(14);
        t.push_back(16);
        t.push_back(18);
        t.push_back(20);
	t.pop_back();
	CHECK(t.size() == 4);
	t.pop_back(0);
	CHECK(t[0] == 14);
}

TEST_CASE("clear()") {
	MyVector<int> t;
	t.push_back(12);
        t.push_back(14);
        t.push_back(16);
        t.push_back(18);
        t.push_back(20);
	t.clear();
	CHECK(t.size() == 0);
}

