#include<iostream>
#include<string>

using namespace std;

/*
    函数对象在使用时，可以像普通函数那样调用, 可以有参数，可以有返回值
    函数对象超出普通函数的概念，函数对象可以有自己的状态
    函数对象可以作为参数传递
*/

//1.函数对象在使用时，可以像普通函数那样调用, 可以有参数，可以有返回值
//class myAdd
//{
//public:
//    int operator()(int v1, int v2)
//    {
//        return v1 + v2;
//    }
//};
//
//void test01()
//{
//    myAdd Myadd;
//    cout << Myadd(10,10) << endl;
//}
//
////2.函数对象超出普通函数的概念，函数对象可以有自己的状态
//class Myprint
//{
//public:
//    Myprint()  //构造函数只调用一次
//    {
//        this->count = 0;
//        //cout << "Myprint的构造函数" << endl;
//    }
//    void operator()(string test)
//    {
//        cout << test << endl;
//        count++;
//    }
//    int count; //统计调用次数
//};
//
//void test02()
//{
//    Myprint myprint;
//    myprint("Hello World");
//    myprint("Hello World");
//    myprint("Hello World");
//    myprint("Hello World");
//
//    cout << "Myprint的调用次数为：" << myprint.count << endl;
//}
//
////3.函数对象可以作为参数传递
//void doprint(Myprint& mp, string test)
//{
//    mp(test);
//}
//
//void test03()
//{
//    Myprint myprint;
//    doprint(myprint,"hello C++");
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