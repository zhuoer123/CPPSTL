#include<iostream>
#include<string>

using namespace std;

//字符串查找和替换
/*
   1.find查找是从左往后，rfind从右往左
   2.find找到字符串后返回查找的第一个字符位置，找不到返回-1
   3.replace在替换时，要指定从哪个位置起，多少个字符，替换成什么样的字符串
*/

//查找
//void test01()
//{
//	string str1 = "abcdefgde";
//
//	int pos = str1.find("de");
//
//	if (pos != -1)
//	{
//		cout << "pos = " << pos << endl;
//	}
//	else
//	{
//		cout << "未找到" << endl;
//	}
//
//	//尾查找
//	int pos2 = str1.rfind("de");
//
//	if (pos2 != -1)
//	{
//		cout << "pos2 = " << pos2 << endl;
//	}
//	else
//	{
//		cout << "未找到" << endl;
//	}
//}


//替换
//void test02()
//{
//	string str1 = "abcdefg";
//	str1.replace(1,3,"1111");
//	cout << str1 << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}