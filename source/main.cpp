#include<iostream>
#include"OrderedList.h"

using namespace std;



int main() {





	



	//char v[] = "12";
	//Node2<char*>*p1 = new Node2<char*>(v);
	//a.push(p1);


	OrdList<int>a(true);
	for (int i = 0; i < 20; i++)
	{

		Node2<int>*p = new Node2<int>(i);
		a.push(p);
		p = nullptr;
	}
	for (int i = 0; i < 20; i++)
	{

		Node2<int>*p = a.find(i);
	
		p = nullptr;
	}
	Node2<int>*p = a.find(100);

	cout << p;

	return 0;
}