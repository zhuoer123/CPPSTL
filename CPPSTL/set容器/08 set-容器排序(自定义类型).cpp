#include<iostream>
#include<set>
#include<string>

using namespace std;

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	
	string m_Name;
	int m_Age;
};

class MyCompare
{
public:
	bool operator()(const Person& p1, const Person& p2) const
	{
		return p1.m_Age > p2.m_Age;
	}
};

void test01()
{
	set<Person, MyCompare> s1;

	Person p1("����", 23);
	Person p2("����", 27);
	Person p3("�ŷ�", 25);
	Person p4("����", 21);

	s1.insert(p1);
	s1.insert(p2);
	s1.insert(p3);
	s1.insert(p4);

	for (set<Person, MyCompare>::iterator it = s1.begin(); it != s1.end(); it++)
	{
		cout << "������" << it->m_Name << " ���䣺" << it->m_Age << endl;
	}
}

int main()
{
	test01();
	system("pause");
	return 0;
}