//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<ctime>
//
//using namespace std;
//
///*
//  random_shuffle(iterator beg, iterator end);  `
//
//// ָ����Χ�ڵ�Ԫ�������������
//
//// beg ��ʼ������
//
//// end ����������
//*/
//
//class myPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//void test01()
//{
//	//Ҫ�����������
//	srand((unsigned int)time(NULL));
//
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	for_each(v.begin(), v.end(), myPrint());
//	cout << endl;
//
//	//����˳��
//	random_shuffle(v.begin(), v.end());
//	for_each(v.begin(), v.end(), myPrint());
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