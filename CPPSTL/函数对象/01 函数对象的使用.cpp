#include<iostream>
#include<string>

using namespace std;

/*
    ����������ʹ��ʱ����������ͨ������������, �����в����������з���ֵ
    �������󳬳���ͨ�����ĸ����������������Լ���״̬
    �������������Ϊ��������
*/

//1.����������ʹ��ʱ����������ͨ������������, �����в����������з���ֵ
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
////2.�������󳬳���ͨ�����ĸ����������������Լ���״̬
//class Myprint
//{
//public:
//    Myprint()  //���캯��ֻ����һ��
//    {
//        this->count = 0;
//        //cout << "Myprint�Ĺ��캯��" << endl;
//    }
//    void operator()(string test)
//    {
//        cout << test << endl;
//        count++;
//    }
//    int count; //ͳ�Ƶ��ô���
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
//    cout << "Myprint�ĵ��ô���Ϊ��" << myprint.count << endl;
//}
//
////3.�������������Ϊ��������
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