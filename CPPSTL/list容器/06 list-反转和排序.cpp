#include<iostream>
#include<list>

using namespace std;

/*
   reverse(); //��ת����
   sort(); //��������
*/

//void printList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}

//������򣺴Ӵ�С
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
//	//��ת�����е�Ԫ��
//	L.reverse();
//	printList(L);
//
//	//����
//	L.sort(); //Ĭ�Ϲ��򣺴�С����
//	printList(L);
//
//	//ָ���������
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