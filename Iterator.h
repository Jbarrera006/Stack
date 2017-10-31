#pragma once

#include "Link.h"

class Iterator {
public:
	Iterator() {}
	void operator++();
	void operator--();
	int & operator*();

private:
	Iterator(link * link) : link(link){}
	link * link;

	friend class List;

};#pragma once
