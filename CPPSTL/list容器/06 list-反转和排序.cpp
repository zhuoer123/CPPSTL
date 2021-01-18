#include<iostream>
#include<list>

using namespace std;

/*
   reverse(); //反转链表
   sort(); //链表排序
*/

//void printList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}

//排序规则：从大到小
//bool myCompare(int val1, int val2)
//{
//	return val1 > val2;
//}
//
//void test01()
//{
//	list<int> L;
//	L.push_back(90);
//	L.push_back(30);
//	L.push_back(20);
//	L.push_back(70);
//	printList(L);
//
//	//反转容器中的元素
//	L.reverse();
//	printList(L);
//
//	//排序
//	L.sort(); //默认规则：从小到大
//	printList(L);
//
//	//指定排序规则
//	L.sort(myCompare);
//	printList(L);
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}