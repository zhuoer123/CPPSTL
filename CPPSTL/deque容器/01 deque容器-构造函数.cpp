#include<iostream>
#include<deque>

using namespace std;


/*
    deque<T> deqT; //Ĭ�Ϲ�����ʽ
    deque(beg, end); //���캯����[beg, end)�����е�Ԫ�ؿ���������
    deque(n, elem); //���캯����n��elem����������
    deque(const deque &deq); //�������캯��
*/

//void PrintDeque(deque<int> &d)
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
//    //�޲ι���
//    deque<int> d1;
//    for (int i = 0; i < 10; i++)
//    {
//        d1.push_back(i);
//    }
//    PrintDeque(d1);
//
//    deque<int> d2(d1.begin(), d1.end());
//    PrintDeque(d2);
//
//    deque<int> d3(10, 100);
//    PrintDeque(d3);
//
//    deque<int> d4 = d3;
//    PrintDeque(d4);
//
//}

//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}