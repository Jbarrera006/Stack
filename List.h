#pragma once

#include "Iterator.h"

class List {
public:
	List() {}
	~List() {}
	bool empty() const;
	void push_front(int x);
	void push_back(int x);
	void pop_front(int x);
	void pop_back();
	int size();
	void insert(int x, Iterator i);
	Iterator begin();
	Iterator end();
	Iterator erase();

private:
	link * head;
	link * tail;

};#pragma once
