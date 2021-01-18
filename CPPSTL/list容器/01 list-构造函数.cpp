#include<iostream>
#include<list>

using namespace std;

/*  list构造函数
   list<T> lst; //list采用采用模板类实现,对象的默认构造形式：
   list(beg,end); //构造函数将[beg, end)区间中的元素拷贝给本身。
   list(n,elem); //构造函数将n个elem拷贝给本身。
   list(const list &lst); //拷贝构造函数。
*/

//void PrintList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	list<int> L;
//	L.push_back(10);
//	L.push_back(20);
//	L.push_back(30);
//	L.push_back(40);
//
//	PrintList(L);
//
//	list<int> L2(L.begin(), L.end());
//	PrintList(L2);
//
//	list<int> L3(L2);
//	PrintList(L3);
//
//	list<int> L4(10, 100);
//	PrintList(L4);
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}