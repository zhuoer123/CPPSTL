#include<iostream>
#include<deque>

using namespace std;

/*
    ���˲��������
      push_back(elem); //������β�����һ������
      push_front(elem); //������ͷ������һ������
      pop_back(); //ɾ���������һ������
      pop_front(); //ɾ��������һ������

    ָ��λ�ò�����
      insert(pos,elem); //��posλ�ò���һ��elemԪ�صĿ��������������ݵ�λ�á�
      insert(pos,n,elem); //��posλ�ò���n��elem���ݣ��޷���ֵ��
      insert(pos,beg,end); //��posλ�ò���[beg,end)��������ݣ��޷���ֵ��
      clear(); //�����������������
      erase(beg,end); //ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ�á�
      erase(pos); //ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�
*/


//void printDeque(deque<int>& d)
//{
//    for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//    {
//        cout << *it << " ";
//    }
//    cout << endl;
//}

//���˲���
//void test01()
//{
//    //ͷ��
//    deque<int> d1;
//    d1.push_back(10);
//    d1.push_back(20);
//
//    //β��
//    d1.push_front(100);
//    d1.push_front(200);
//
//    printDeque(d1);
//
//    //βɾ
//    d1.pop_back();
//    //ͷɾ
//    d1.pop_front();
//    printDeque(d1);
//}

//����
//void test02()
//{
//    deque<int> d2;
//    d2.push_back(10);
//    d2.push_back(20);
//    d2.push_front(100);
//    d2.push_front(200);
//    printDeque(d2);
//
//    d2.insert(d2.begin(), 1000);
//    printDeque(d2);
//
//    d2.insert(d2.begin(), 2, 1000);
//    printDeque(d2);
//
//    deque<int> d3;
//    d3.push_back(1);
//    d3.push_back(2);
//    d3.push_back(3);
//
//    d2.insert(d2.begin(), d3.begin(), d3.end());
//    printDeque(d2);
//}

//ɾ��
//void test03()
//{
//    deque<int> d;
//    d.push_back(10);
//    d.push_back(20);
//    d.push_front(100);
//    d.push_front(200);
//    printDeque(d);
//
//    d.erase(d.begin());
//    printDeque(d);
//
//    //d.erase(d.begin(), d.end());
//    d.clear();
//    printDeque(d);
//}

//int main()
//{
//    //test01();
//    //test02();
//    test03();
//	system("pause");
//	return 0;
//}