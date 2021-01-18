#include<iostream>
#include<list>
#include<string>

using namespace std;

/*
      ������������Person�Զ����������ͽ�������Person�����������������䡢���
      ������򣺰�����������������������ͬ������߽��н���
*/

class Person
{
public:
	Person(string name, int age, int height)
	{
		this->m_Name = name;
		this->m_Age = age;
		this->m_Height = height;
	}
	string m_Name;
	int m_Age;
	int m_Height;
};

bool myCompare(Person& p1, Person& p2)
{
	if (p1.m_Age != p2.m_Age)
	{
		return p1.m_Age < p2.m_Age;
	}
	else
	{
		return p1.m_Height > p2.m_Height;
	}
}

void showInf(const list<Person>& L)
{
	for (list<Person>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "������" << it->m_Name << " ���䣺" << it->m_Age << " ��ߣ�" << it->m_Height << endl;
	}
}

void test01()
{
	Person p1("����", 18, 160);
	Person p2("����", 19, 178);
	Person p3("����", 20, 180);
	Person p4("����", 23, 169);
	Person p5("Tom", 24, 169);
	Person p6("Jerry", 23, 180);


	list<Person> L;
	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);

	cout << "����ǰ��" << endl;
	showInf(L);

	cout << "---------------------" << endl;
	cout << "�����" << endl;
	L.sort(myCompare);

	showInf(L);
}

int main()
{
	test01();
	system("pause");
	return 0;
}