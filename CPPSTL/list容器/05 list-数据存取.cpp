#include<iostream>
#include<list>

using namespace std;

/*
    对list容器中数据进行存取

	front(); //返回第一个元素。
    back(); //返回最后一个元素。
*/

//void test01()
//{
//	list<int> L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	//不支持 [] at访问数据
//	cout << "第一个元素为：" << L1.front() << endl;
//	cout << "最后一个元素为：" << L1.back() << endl;
//
//	//list容器的迭代器是双向容器，不支持随机访问
//	list<int>::iterator it = L1.begin();
//	it++; //正确 支持双向
//	it--;
//	//it = it + 1;//错误，不可以跳跃访问，即使是+1
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}