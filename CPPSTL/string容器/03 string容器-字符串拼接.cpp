#include<iostream>
#include<string>

using namespace std;

//string����  �ַ���ƴ��
/*
   string& operator+=(const char * str); //����+=������
   string& operator+=(const char c);  //����+=������
   string& operator+=(const string& str);  //����+=������
   string& append(const char* s);  //���ַ���s���ӵ���ǰ�ַ�ĩβ
   string& append(const char* s, int n);  //���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�ĩβ
   string& append(const string& s);  //ͬoperator+=(const string& str)
   string& append(const string& str, int pos, int n); //�ַ���s�д�pos��ʼ��n���ַ����ӵ��ַ���ĩβ
*/

//void test01()
//{
//	string str1 = "��";
//	str1 += "������Ϸ";
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
//	string str = "�Ұ�����Ϸ��";
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