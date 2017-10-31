#include "List.h"

List::~List() {
}

bool List::empty() const {
	return head = 0;
}

void List::push_back(int x) {
	Link * temp = new Link(0, x);

	if (head == 0)
	{
		head = temp;
		tail = temp;
	}
	else
	{
		tail->next = temp;
		tail = temp;
	}
}

void List::push_front(int x) {
	link * temp = Link(0, x);
	temp -> next = 0:

	if (head == 0)
	{
		head = temp;
	}
	else
	{
		teemp->next = head;
		head = temp;
	}
}

void List::pop_front() {
	Link * temp = new Link(0, 0);
	temp = head->next;
	delete head;
	head = temp;
}

void List::pop_back() {

	assert(head != 0);
	if (head->next == 0) {
		delete head;
		head = 0;
		return;
	}
	Link* temp = head;
	while (temp->next != tail) {
		temp = temp->next;
	}
	tail = temp;
	tail->next = 0;
	delete temp->next;
}

int List::size() {
	int count = 0;
	Link * temp = head;
	while (temp != 0) {
		++count;
		temp - temp->next;
	}
	return count;
}

Iterator List::insert(int x, Iterator i) {

	if (i.link == 0)
	{
		push_back(x);
		return Iterator(tail);
	}

	Link * temp = new Link(0, x);//stores the new data
	Link * temp3 = i.link->next;//holds current position of head next
	temp = i.link->next;//connecting head to new data
	temp3 = temp->next;//conectes new to old data
	int plAc = i.link->x;
	i.link->x = temp->x;
	temp->x = plAc;

	return i;
}

Iterator List::erase(Iterator i) {
	if (i.link == 0)
	{
		return i;//if there is nothing to erase
	}

	if (i.link->next == 0)
	{
		pop_front();//gets rid of the ONLY data
		return Iterator(head);
	}

	Link * temp = i.link->next;//temp locatuion of the deleted data
	int plAc = i.link->x;//stores head
	i.link->x = temp->x;//swiches head with temp
	temp->x = plAc;//vise versa

	Link * temp2 = i.link->next->next;//temp locatino of data AFTER data deleted
	i.link->next = temp2;//sets temp location = to location of data AFTER data deleted
	delete temp;

	return i;
}

Interator List::begin() {
	return Iterator (head);

}

Iterator List::end() {
	return Iterator(0);

}