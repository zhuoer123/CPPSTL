//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
///*
//  reverse(iterator beg, iterator end);  `
//
//// 反转指定范围的元素
//
//// beg 开始迭代器
//
//// end 结束迭代器
//*/
//class myprint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//void test01()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(20);
//	v.push_back(40);
//
//	cout << "反转前：" << endl;
//	for_each(v.begin(), v.end(), myprint());
//	cout << endl;
//
//	cout << "反转后：" << endl;
//	reverse(v.begin(), v.end());
//	for_each(v.begin(), v.end(), myprint());
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
