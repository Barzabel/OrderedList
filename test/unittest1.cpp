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
			OrdList<int>a(false);
			for (int i = 0; i < 20; i++)
			{

				Node2<int>*p = new Node2<int>(i);
				a.push(p);
				p = nullptr;
			}
			for (int i = 0; i < 20; i++) {
				Assert::IsTrue( a.get_tail()->value==i);
				a.del_tail();
			}


		}
		TEST_METHOD(getarr)
		{
			unsigned int i;
			OrdList<int>a(false);
			for (int i = 0; i < 20; i++)
			{

				Node2<int>*p = new Node2<int>(i);
				a.push(p);
				p = nullptr;
			}
			int *arr = a.get_arr(i);
			for (unsigned int _i=i;_i > 0;_i--) {
				Assert::IsTrue(a.get_tail()->value == arr[_i-1]);
				a.del_tail();
			}
			
		}
		TEST_METHOD(find)
		{
			
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
				Assert::IsTrue(p->value == i);
				p = nullptr;
			}
			Node2<int>*p = a.find(100);
			
			Assert::IsTrue( p== nullptr);
				

		}
		TEST_METHOD(chararr)
		{
			
			OrdList<char*>a(false);
			
			

		}

	};
}