//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
///*
//    ��������:
//        ʵ�ֱ�������
//    ����ԭ�ͣ�
//         for_each(iterator beg, iterator end, _func);  `
//  // �����㷨 ��������Ԫ��
//  // beg ��ʼ������
//  // end ����������
//  // _func �������ߺ�������
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