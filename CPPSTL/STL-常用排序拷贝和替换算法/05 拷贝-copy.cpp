//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
///*
//  copy(iterator beg, iterator end, iterator dest);  `
//
//  容器内指定范围的元素拷贝到另一容器中
//
//// beg  开始迭代器
//
//// end  结束迭代器
//
//// dest 目标起始迭代器
//*/
//
//class myprint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//void test01()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i + 1);
//	}
//	vector<int> v2;
//	v2.resize(v.size());
//
//	copy(v.begin(), v.end(), v2.begin());
//
//	for_each(v2.begin(), v2.end(), myprint());
//	cout << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}