#include<iostream>
#include"OrderedList.h"

using namespace std;



int main() {

	Node2<int> *p1 = new Node2<int>(12);
	Node2<int> *p2 = new Node2<int>(110);
	Node2<int> *p3 = new Node2<int>(10);
	Node2<int> *p4 = new Node2<int>(91);
	Node2<int> *p6 = new Node2<int>(1);
	Node2<int> *p7 = new Node2<int>(1);
	Node2<int> *p8 = new Node2<int>(12);
	Node2<int> *p9 = new Node2<int>(1);

	OrdList<int> a;
	a.push(p1);
	a.push(p2);
	a.push(p3);
	a.push(p4);
	a.push(p6);	
	a.push(p7);
	a.push(p8);	
	a.push(p9);

	unsigned int i;

	int *pa = a.get_list(i);
	for(unsigned int ia=0;ia<i;ia++)
	{
		cout<<pa[ia]<<endl;
	}
	return 0;
}