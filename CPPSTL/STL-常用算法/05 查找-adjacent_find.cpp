//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
///*
//   adjacent_find(iterator beg, iterator end);  `
//
//// ���������ظ�Ԫ��,��������Ԫ�صĵ�һ��λ�õĵ�����
//
//// beg ��ʼ������
//
//// end ����������
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
//		cout << "δ�ҵ���" << endl;
//	}
//	else
//	{
//		cout << "�ҵ����ڵ��ظ�Ԫ��Ϊ��" << *pos << endl;
//	}
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}