#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

/*
   ����bool���͵ķº�����Ϊν��
   ���operator()����һ����������ô����һԪν��
   ���operator()����������������ô������Ԫν��
*/

//class GreaterFive
//{
//public:
//	bool operator()(int v)
//	{
//		return v > 5;
//	}
//};
//
//void test01()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	//�������������޴���5������
//	//GreaterFive() ������������
//	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
//	if (it == v.end())
//	{
//		cout << "δ�ҵ�" << endl;
//	}
//	else
//	{
//		cout << "�ҵ��˴���5�����֣�" << *it << endl;
//	}
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}