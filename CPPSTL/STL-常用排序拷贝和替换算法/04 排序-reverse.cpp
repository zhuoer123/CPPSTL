//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
///*
//  reverse(iterator beg, iterator end);  `
//
//// ��תָ����Χ��Ԫ��
//
//// beg ��ʼ������
//
//// end ����������
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
//	cout << "��תǰ��" << endl;
//	for_each(v.begin(), v.end(), myprint());
//	cout << endl;
//
//	cout << "��ת��" << endl;
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
