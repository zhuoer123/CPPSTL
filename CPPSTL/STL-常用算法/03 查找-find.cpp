//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<string>
//
//using namespace std;
//
///*
//   find(iterator beg, iterator end, value);  `
//
//  // ��ֵ����Ԫ�أ��ҵ�����ָ��λ�õ��������Ҳ������ؽ���������λ��
//
//  // beg ��ʼ������
//
//  // end ����������
//
//  // value ���ҵ�Ԫ��
//*/
//
////void test01()
////{
////	vector<int> v;
////	for (int i = 0; i < 10; i++)
////	{
////		v.push_back(i + 1);
////	}
////
////	vector<int>::iterator pos = find(v.begin(), v.end(), 5);
////
////	if (pos == v.end())
////	{
////		cout << "δ�ҵ���" << endl;
////	}
////	else
////	{
////		cout << "5��λ���ǣ�" << *pos << endl;
////	}
////}
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	//����==
//	bool operator==(const Person& p)  //���ܱ��޸ģ�����Ҳ������ÿ������캯����
//	{
//		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
//		{
//			return true;
//		}
//	    return false;
//	}
//
//	string m_Name;
//	int m_Age;
//};
//
//void test02()
//{
//	vector<Person> v;
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//
//	vector<Person>::iterator it = find(v.begin(), v.end(), p2);
//	if (it == v.end()) //��Ҫ����==
//	{
//		cout << "δ�ҵ���" << endl;
//	}
//	else
//	{
//		cout << "�ҵ�������" << it->m_Name << " ���䣺" << it->m_Age << endl;
//	}
//}
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}