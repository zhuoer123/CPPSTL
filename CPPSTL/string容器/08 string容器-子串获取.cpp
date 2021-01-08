#include<iostream>
#include<string>

using namespace std;

void test01()
{
	string str1 = "abcdef";
	
	string substr = str1.substr(1, 3);
	cout << substr << endl;
}

void test02()
{
	string email = "lisi@sina.com";

	int pos = email.find("@");

	string usersname = email.substr(0,pos);
	cout << usersname << endl;
}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}