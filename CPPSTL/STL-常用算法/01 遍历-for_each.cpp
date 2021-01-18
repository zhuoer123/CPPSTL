//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
///*
//    功能描述:
//        实现遍历容器
//    函数原型：
//         for_each(iterator beg, iterator end, _func);  `
//  // 遍历算法 遍历容器元素
//  // beg 开始迭代器
//  // end 结束迭代器
//  // _func 函数或者函数对象
//*/
//
//class myPrint01
//{
//public:
//	void operator()(int v)
//	{
//		cout << v << " ";
//	}
//};
//
//void myPrint02(int v)
//{
//	cout << v << " ";
//}
//
//void test01()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	//for_each(v.begin(), v.end(), myPrint01());
//	//cout << endl;
//	
//	for_each(v.begin(), v.end(), myPrint02);
//	cout << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}