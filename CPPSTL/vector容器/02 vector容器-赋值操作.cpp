#include<iostream>
#include<vector>

using namespace std;

/*
   vector& operator=(const vector &vec); //���صȺŲ�����
   assign(beg, end); //��[beg, end)�����е����ݿ�����ֵ������
   assign(n, elem); //��n��elem������ֵ������
*/

//void PrintVector(vector<int>& v)
//{
//    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//    {
//        cout << *it << " ";
//    }
//    cout << endl;
//}
//
//void test01()
//{
//    vector<int> v1;
//    for (int i = 0; i < 10; i++)
//    {
//        v1.push_back(i);
//    }
//
//    vector<int> v2;
//    v2 = v1;
//
//    PrintVector(v2);
//
//    vector<int> v3;
//    v3.assign(v1.begin(),v1.end());
//    PrintVector(v3);
//
//    vector<int> v4;
//    v4.assign(10, 10);
//    PrintVector(v4);
//}
//
//int main()
//{
//    test01();
//	system("pause");
//	return 0;
//}