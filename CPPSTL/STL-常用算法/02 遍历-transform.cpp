//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
///*
//    ������������һ��������
//
//	transform(iterator beg1, iterator end1, iterator beg2, _func);`
//
//    //beg1 Դ������ʼ������
//    //end1 Դ��������������
//    //beg2 Ŀ��������ʼ������
//   //_func �������ߺ�������
//*/
//
//class Transform
//{
//public:
//	int operator()(int v)
//	{
//		return v;
//	}
//};
//
//class myPrint
//{
//public:
//	void operator()(int v)
//	{
//		cout << v << " ";
//	}
//
//};
//
//void test01()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	vector<int> vTarget; //Ŀ������
//	vTarget.resize(v.size()); //��ǰ���ٿռ�
//
//	transform(v.begin(), v.end(), vTarget.begin(), Transform());
//
//	for_each(vTarget.begin(), vTarget.end(), myPrint());
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