//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
///*
//   adjacent_find(iterator beg, iterator end);  `
//
//// 查找相邻重复元素,返回相邻元素的第一个位置的迭代器
//
//// beg 开始迭代器
//
//// end 结束迭代器
//*/
//
//void test01()
//{
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(5);
//	v.push_back(2);
//	v.push_back(4);
//	v.push_back(4);
//	v.push_back(3);
//
//	vector<int>::iterator pos = adjacent_find(v.begin(), v.end());
//	if (pos == v.end())
//	{
//		cout << "未找到！" << endl;
//	}
//	else
//	{
//		cout << "找到相邻的重复元素为：" << *pos << endl;
//	}
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}