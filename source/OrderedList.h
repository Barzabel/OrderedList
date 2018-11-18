#pragma once
#ifndef _ORDER_
#define _ORDER_
#include"Linkedlist/LinkedList2.h"
#include"Linkedlist/Node2/Node2.h"



template <class T>
class OrdList:private LinkedList2<T> {
public:
	OrdList(bool is_leftsort);
	void push(Node2<T> *p);

	Node2<T>* get_tail();

	Node2<T>* get_head();
	void del_tail() {
		this->deltail();
	}

	void del_head() {
		this->delhead();
	}

	

	unsigned int size() {

		
		return this->getsize();
	}

	Node2<T>* find(T val);

	void del(T val);
	void print() {
		this->printn();
	 }

	T* get_arr(unsigned int &size);



	

	



private:

bool is_big(T val1, T val2);
bool isLeft;

char * funclir(char * val)
{
	char * n = val;
	while ((*val) == ' ')
	{

		val = val + 1;
	}

	while (*n != '\0')
	{

		if ((*n == ' ') && (*(n + 1) == '\0'))
		{
			*n = '\0';
			n--;
		}
		else { ++n; }

	}
	return val;
}




};





















#include "OrderedList.ipp"
#endif // !_ORDER_

