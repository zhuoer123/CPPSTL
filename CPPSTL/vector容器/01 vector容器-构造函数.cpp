#include<iostream>
#include<vector>

using namespace std;

/*
     vector<T> v; //����ģ��ʵ����ʵ�֣�Ĭ�Ϲ��캯��
     vector(v.begin(), v.end()); //��v[begin(), end())�����е�Ԫ�ؿ���������
     vector(n, elem); //���캯����n��elem����������
     vector(const vector &vec); //�������캯����

*/

//void PrintVector(vector<int> &v)
//{
//    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//    {
//        cout << *it << " ";
//    }
//    cout << endl;
//}

//void test01()
//{
//    vector<int> v1;
//    for (int i = 0; i < 10; i++)
//    {
//        v1.push_back(i);
//    }
//
//    PrintVector(v1);
//
//    vector<int> v2(v1.begin(),v1.end());
//    PrintVector(v2);
//
//    vector<int> v3(10, 100);
//    PrintVector(v3);
//
//    vector<int> v4(v3);
//    PrintVector(v4);
//
//}

//int main()
//{
//    test01();
//	system("pause");
//	return 0;
//}