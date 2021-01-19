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
//  // 按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
//
//  // beg 开始迭代器
//
//  // end 结束迭代器
//
//  // value 查找的元素
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
////		cout << "未找到！" << endl;
////	}
////	else
////	{
////		cout << "5的位置是：" << *pos << endl;
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
//	//重载==
//	bool operator==(const Person& p)  //不能被修改，而且也不会调用拷贝构造函数。
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
//	if (it == v.end()) //需要重载==
//	{
//		cout << "未找到！" << endl;
//	}
//	else
//	{
//		cout << "找到姓名：" << it->m_Name << " 年龄：" << it->m_Age << endl;
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