#include<iostream>
#include<deque>

using namespace std;

/*
    at(int idx); //��������idx��ָ������
    operator[]; //��������idx��ָ������
    front(); //���������е�һ������Ԫ��
    back(); //�������������һ������Ԫ��
*/

//void printDeque(const deque<int>& d)
//{
//    for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) 
//    {
//        cout << *it << " ";
//    } 
//    cout << endl;
//}
//
//void test01()
//{
//    deque<int> d;
//    d.push_back(10);
//    d.push_back(20);
//    d.push_front(100);
//    d.push_front(200);
//
//    for (int i = 0; i < d.size(); i++)
//    {
//        cout << d[i] << " ";
//    }
//    cout << endl;
//
//    for (int i = 0; i < d.size(); i++)
//    {
//        cout << d.at(i) << " ";
//    }
//    cout << endl;
//
//    cout << "d����Ԫ��Ϊ��" << d.front() << endl;
//    cout << "d��ĩԪ��Ϊ��" << d.back() << endl;
//}
//
//int main()
//{
//    test01();
//	system("pause");
//	return 0;
//}