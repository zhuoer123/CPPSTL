#include<iostream>
#include<set>

using namespace std;

/*
    ����Ԫ�ض����ڲ���ʱ�Զ�������  �ײ�Ϊ������
���ʣ�
    set/multiset���ڹ���ʽ�������ײ�ṹ���ö�����ʵ�֡�
set��multiset����
    set���������������ظ���Ԫ��
    multiset�������������ظ���Ԫ��
*/

/*
   ���죺
       set<T> st; //Ĭ�Ϲ��캯����
       set(const set &st); //�������캯��
   ��ֵ��
       set& operator=(const set &st); //���صȺŲ�����

    �������ݣ� insert();
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
//    //��������
//    set<int> s2(s);
//    printSet(s2);
//
//    //��ֵ
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