//#include<iostream>
//#include<vector>
//#include<functional>
//#include<algorithm>
//
//using namespace std;
//
////1. not1
////2.public unary_function<int,bool>
////3.const
//
//class GreaterThanFive : public unary_function<int,bool>
//{
//public:
//	bool operator()(int val) const
//	{
//		return val > 5;
//	}
//};
//
//
//void test01()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	//vector<int>::iterator pos = find_if(v.begin(), v.end(), not1(GreaterThanFive()));
//	int start = 0;
//	cout << "请输入待比较的数的大小：" << endl;
//	cin >> start;
//	vector<int>::iterator pos = find_if(v.begin(), v.end(), not1(bind2nd(greater<int>(), start)));
//	if (pos == v.end())
//	{
//		cout << "未找到" << endl;
//	}
//	else
//	{
//		//cout << "找到了大于5的数字：" << *pos << endl;
//		cout << "找到了小于" << start << "的数字：" << *pos << endl;
//	}
//
//	//二元取反
//	//sort(v.begin(), v.end(), greater<int>());
//	sort(v.begin(), v.end(), not2(less<int>()));
//	for_each(v.begin(), v.end(), [](int val) {cout << val << " "; });
//	cout << endl;
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}