#include<iostream>
#include<vector>

using namespace std;


// swap(vec); // ��vec�뱾���Ԫ�ػ���

//void PrintVector(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}

//void test01()
//{
//	cout << "����ǰ��" << endl;
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	PrintVector(v1);
//
//	vector<int> v2;
//	for (int i = 10; i > 0; i--)
//	{
//		v2.push_back(i);
//	}
//	PrintVector(v2);
//
//	//��������
//	cout << "������" << endl;
//	v1.swap(v2);
//	PrintVector(v1);
//	PrintVector(v2);
//}

//ʵ����;
//void test02()
//{
//	vector<int> v;
//	for (int i = 0; i < 100000; i++)
//	{
//		v.push_back(i);
//	}
//
//	cout << "v������Ϊ��" << v.capacity() << endl;
//	cout << "v�Ĵ�СΪ��" << v.size() << endl;
//
//	v.resize(3);
//	cout << "v������Ϊ��" << v.capacity() << endl;
//	cout << "v�Ĵ�СΪ��" << v.size() << endl;
//
//	//�����ڴ�
//	vector<int>(v).swap(v); //�������������꼴�ͷ�
//	cout << "v������Ϊ��" << v.capacity() << endl;
//	cout << "v�Ĵ�СΪ��" << v.size() << endl;
//
//}


//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}