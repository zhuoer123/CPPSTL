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
//	cout << "��������Ƚϵ����Ĵ�С��" << endl;
//	cin >> start;
//	vector<int>::iterator pos = find_if(v.begin(), v.end(), not1(bind2nd(greater<int>(), start)));
//	if (pos == v.end())
//	{
//		cout << "δ�ҵ�" << endl;
//	}
//	else
//	{
//		//cout << "�ҵ��˴���5�����֣�" << *pos << endl;
//		cout << "�ҵ���С��" << start << "�����֣�" << *pos << endl;
//	}
//
//	//��Ԫȡ��
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