#include<iostream>
#include<deque>

using namespace std;


/*
    deque<T> deqT; //默认构造形式
    deque(beg, end); //构造函数将[beg, end)区间中的元素拷贝给本身。
    deque(n, elem); //构造函数将n个elem拷贝给本身。
    deque(const deque &deq); //拷贝构造函数
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
//    //无参构造
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