#include "Iterator.h"

bool Iterator::operator== (const Iterator & rhs) {
	return link == rhs.link;
}

int & Iterator ::operator*() const {
	return link->value;
}

void Iterator::operator++() {
	link = link->next;
}