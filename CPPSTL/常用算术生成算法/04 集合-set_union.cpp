//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
///*
//`set_union(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);  `
//
//// ���������ϵĲ���
//
//// **ע��:�������ϱ�������������**
//
//// beg1 ����1��ʼ������
//// end1 ����1����������
//// beg2 ����2��ʼ������
//// end2 ����2����������
//// dest Ŀ��������ʼ������
//*/
//
///*
//-�󲢼����������ϱ������������
//- Ŀ���������ٿռ���Ҫ * *����������� * *
//-set_union����ֵ���ǲ��������һ��Ԫ�ص�λ��
//*/
//class myPrint
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
//	vector<int> v1;
//	vector<int> v2;
//	for (int i = 0; i < 10; i++) {
//		v1.push_back(i);
//		v2.push_back(i + 5);
//	}
//
//	vector<int> vTarget;
//	vTarget.resize(v1.size() + v2.size());
//
//	vector<int>::iterator itend = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//
//	for_each(vTarget.begin(), itend, myPrint());
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