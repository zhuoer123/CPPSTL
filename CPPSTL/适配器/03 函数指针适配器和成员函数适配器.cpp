#include<iostream>
#include<vector>
#include<functional>
#include<algorithm>
#include<string>

using namespace std;

//����ָ��������
void myPrint(int val, int start)
{
	cout << val + start << endl;
}

void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	int start = 0;
	cout << "������start��" << endl;
	cin >> start;

	for_each(v.begin(), v.end(), bind2nd(ptr_fun(myPrint),start));
}

//��Ա����������
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson()
	{
		cout << "������" << this->m_Name << " ���䣺" << this->m_Age << endl;
	}

	void Addage()
	{
		this->m_Age++;
	}

	string m_Name;
	int m_Age;
};

//void myPrint02(Person& p)
//{
//	cout << "������" << p.m_Name << " ���䣺" << p.m_Age << endl;
//}

void test02()
{
	vector<Person> v;
	Person p1("aaa", 10);
	Person p2("bbb", 11);
	Person p3("ccc", 12);
	Person p4("ddd", 13);
	Person p5("eee", 14);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	//for_each(v.begin(), v.end(), myPrint02);
	for_each(v.begin(), v.end(), mem_fun_ref(&Person::showPerson));

	cout << "----------------" << endl;
	for_each(v.begin(), v.end(), mem_fun_ref(&Person::Addage));
	for_each(v.begin(), v.end(), mem_fun_ref(&Person::showPerson));

}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}