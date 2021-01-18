#include<iostream>
#include<set>

using namespace std;

/*
    所有元素都会在插入时自动被排序  底层为二叉树
本质：
    set/multiset属于关联式容器，底层结构是用二叉树实现。
set和multiset区别：
    set不允许容器中有重复的元素
    multiset允许容器中有重复的元素
*/

/*
   构造：
       set<T> st; //默认构造函数：
       set(const set &st); //拷贝构造函数
   赋值：
       set& operator=(const set &st); //重载等号操作符

    插入数据： insert();
*/

//void printSet(set<int>& s)
//{
//    for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//    {
//        cout << *it << " ";
//    }
//    cout << endl;
//}
//
//void test01()
//{
//    set<int> s;
//    s.insert(10);
//    s.insert(30);
//    s.insert(5);
//    s.insert(100);
//
//    printSet(s);
//
//    //拷贝构造
//    set<int> s2(s);
//    printSet(s2);
//
//    //赋值
//    set<int> s3;
//    s3 = s;
//    printSet(s3);
//}
//
//int main()
//{
//    test01();
//	system("pause");
//	return 0;
//}