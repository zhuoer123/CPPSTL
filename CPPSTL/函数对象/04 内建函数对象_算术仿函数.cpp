#include<iostream>
#include<functional>

using namespace std;

/*  实现四则运算
        其中negate是一元运算，其他都是二元运算
    仿函数原型：
        template<class T> T plus<T> //加法仿函数
        template<class T> T minus<T> //减法仿函数
        template<class T> T multiplies<T> //乘法仿函数
        template<class T> T divides<T> //除法仿函数
        template<class T> T modulus<T> //取模仿函数
        template<class T> T negate<T> //取反仿函数*/

//void test01()
//{
//    negate<int> n;
//    cout << n(50) << endl;
//}
//
//void test02()
//{
//    plus<int> p;
//    cout << p(10, 10) << endl;
//}
//
//void test03()
//{
//    modulus<int> m;
//    cout << m(5, 3) << endl;
//}
//
//int main()
//{
//    //test01();
//    //test02();
//    test03();
//	system("pause");
//	return 0;
//}
