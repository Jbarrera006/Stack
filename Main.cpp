#include <iostream>
#include <cassert>
#include "List.h"

using namespace std;

void Default() {

	List a;
	assert(a.empty() == true);

	a.push_back(17);
	assert(a.empty() == false);

	a.push_front(3);
	a.push_back(10);
	assert(a.size() == 3);

	Iterator i = a.begin();
	assert(*i == 3);

	++i;
	assert(*i == 17);

	++i;
	assert(*i == 10);

	++i;
	assert(i == a.end());

	i = a.begin();
	assert(*i == 3);

}

void test_1() {

	List a;
	assert(a.empty() == true);
	assert(a.size() == 0);

	a.push_back(1);
	assert(a.empty() == false);
	assert(a.size() == 1);

	Iterator i = a.begin();
	assert(*i == 1);
	++i;
	assert(i == a.end());

	i = a.begin();
	a.insert(i, 0);
	i = a.begin();

	assert(*i == 0);
	++i;
	assert(*i == 1);
	++i;
	assert(i == a.end();
}

void test2() {

	List a;

	a.push_back(1);
	a.push_back(2);
	a.push_back(4);

	Iterator i = a.begin();
	++i;
	++i;

	assert(*i == 4);

	a.insert(i, 3);
	i = a.begin();

	assert(*i == 1);
	++i;
	assert(*i == 2);
	++i;
	assert(*i == 3);
	++i;
	assert(*i == 4);
	++i;
	assert(i == a.end());

}

void test_3() {
	List a;

	a.push_back(2);
	a.push_back(1);
	a.push_back(3);

	Iterator i = 1;
	assert(*i == 1);
	a.erase(i);

	assert(*i == 3);

	insert(0, 1);

	i = a.begin();

	assert(*i == 1);
	++i;
	assert(*i == 2);
	++i;
	assert(*i == 3);
	++i;
	assert(*i == a.end());

	--i;
	a.erase(i);
	--i;
	a.erase(i);
	--i;
	a.erase(i);
	assert(a.size() == 0);

}

int main(int argc, char * args[]) {

	Default();
	test_1();
	test_2();
	test_3();
	
	cout << "All tests passed." << endl;
}
