#pragma once
#ifndef _ORDER_
#define _ORDER_
#include"Linkedlist/LinkedList2.h"
#include"Linkedlist/Node2/Node2.h"



template <class T>
class OrdList:private LinkedList2<T> {
public:
	OrdList();
	void push(Node2<T> *p);




	

	unsigned int size() {

		
		return this->getsize();
	}

	Node2<T>* find(T val);

	void del(T val);
	void print() {
		this->printn();
	 }

	T* get_list(unsigned int &size);



	

	



private:

bool is_big(Node2<T>* val1, Node2<T>* val2);
bool is_big(Node2<char*>* val1, Node2<char*>* val2);

};






















#include "OrderedList.ipp"
#endif // !_ORDER_

