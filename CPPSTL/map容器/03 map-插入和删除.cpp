#include<iostream>
#include<map>

using namespace std;

/*
    insert(elem); //�������в���Ԫ�ء�
    clear(); //�������Ԫ��
    erase(pos); //ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�������
    erase(beg, end); //ɾ������[beg,end)������Ԫ�� ��������һ��Ԫ�صĵ�������
    erase(key); //ɾ��������ֵΪkey��Ԫ�ء�
*/

//void printMap(map<int, int>& m)
//{
//    for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//    {
//        cout << "key = " << it->first << " value = " << it->second << endl;
//    }
//    cout << endl;
//}
//
//void test01()
//{
//    //����
//    map<int, int> m;
//    //��һ�ֲ��뷽ʽ��
//    m.insert(pair<int, int>(1,10));
//    //�ڶ��ֲ��뷽ʽ��
//    m.insert(make_pair(2, 20));
//    //�����ֲ��뷽ʽ��
//    m.insert(map<int,int>::value_type(3,30));
//    //�����ֲ��뷽ʽ��
//    m[4] = 40;
//    printMap(m);
//
//    //ɾ��
//    m.erase(m.begin());
//    printMap(m);
//
//    m.erase(3);
//    printMap(m);
//
//    //���
//    m.erase(m.begin(), m.end());
//    m.clear();
//    printMap(m);
//}
//
//int main()
//{
//    test01();
//	system("pause");
//	return 0;
//}