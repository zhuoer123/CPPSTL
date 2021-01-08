#include<iostream>
#include<string>

using namespace std;

//string容器  字符串拼接
/*
   string& operator+=(const char * str); //重载+=操作符
   string& operator+=(const char c);  //重载+=操作符
   string& operator+=(const string& str);  //重载+=操作符
   string& append(const char* s);  //把字符串s连接到当前字符末尾
   string& append(const char* s, int n);  //把字符串s的前n个字符连接到当前字符末尾
   string& append(const string& s);  //同operator+=(const string& str)
   string& append(const string& str, int pos, int n); //字符串s中从pos开始的n个字符连接到字符串末尾
*/

//void test01()
//{
//	string str1 = "我";
//	str1 += "爱玩游戏";
//	cout << "str1 = " << str1 << endl;
//
//	string str2 = ":";
//	str1 += str2;
//	cout << "str1 = " << str1 << endl;
//
//	string str3 = "LOL DNF";
//	str1 += str3;
//	cout << "str1 = " << str1 << endl;
//
//	string str4 = "I";
//	str4.append("love");
//
//	str4.append("game abcd",4);
//	cout << "str4 = " << str4 << endl;
//
//	str4.append(str3);
//	cout << "str4 = " << str4 << endl;
//
//	string str = "我爱玩游戏：";
//	/*str.append(str3,0,3);
//	cout << "str = " << str << endl;*/
//
//	str.append(str3, 4, 3);
//	cout << "str = " << str << endl;
//
//}
//
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}