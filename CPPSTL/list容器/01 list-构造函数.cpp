#include<iostream>
#include<list>

using namespace std;

/*  list���캯��
   list<T> lst; //list���ò���ģ����ʵ��,�����Ĭ�Ϲ�����ʽ��
   list(beg,end); //���캯����[beg, end)�����е�Ԫ�ؿ���������
   list(n,elem); //���캯����n��elem����������
   list(const list &lst); //�������캯����
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