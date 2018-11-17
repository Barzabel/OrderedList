#include "stdafx.h"
#include "CppUnitTest.h"
#include "../source/OrderedList.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace OrderedList
{		
	TEST_CLASS(OrderedList)
	{
	public:
		
		TEST_METHOD(Push)
		{
			int n;
			OrdList<int>a;
			for (int i = 0; i < 20; i++)
			{

				Node2<int>*p = new Node2<int>(rand() % 100);
				a.push(p);
				p = nullptr;
			}
			while (a.size() > 0) {
				n = a.get_tail()->value;
				a.deltail();
				Assert::IsTrue(n > a.get_tail()->value);

			}


		}
		TEST_METHOD(getarr)
		{
			unsigned int i;
			OrdList<int>a;
			for (int i = 0; i < 20; i++)
			{

				Node2<int>*p = new Node2<int>(rand() % 100);
				a.push(p);
				p = nullptr;
			}
			int *arr = a.get_arr(i);
			for (unsigned int _i=i;_i >= 0;_i--) {
				Assert::IsTrue(a.get_tail()->value == arr[i]);
				a.deltail();
			}
			
		}

	};
}