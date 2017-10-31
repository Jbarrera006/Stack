#pragma once

class Link {
private:
	Link() {
		int data;
		next = 0;
	}
	Link* next;
	int data;
	friend class List;
	friend class Iterator;

};#pragma once