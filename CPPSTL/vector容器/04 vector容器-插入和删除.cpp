#include<iostream>
#include<vector>

using namespace std;

/*
    push_back(ele); //β������Ԫ��ele
    pop_back(); //ɾ�����һ��Ԫ��
    insert(const_iterator pos, ele); //������ָ��λ��pos����Ԫ��ele
    insert(const_iterator pos, int count, ele); //������ָ��λ��pos����count��Ԫ��ele
    erase(const_iterator pos); //ɾ��������ָ���Ԫ��
    erase(const_iterator start, const_iterator end); //ɾ����������start��end֮���Ԫ��
    clear(); //ɾ������������Ԫ��
*/

//void PrintVector(vector<int>& v)
//{
//    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//    {
//        cout << *it << " ";
//    }
//    cout << endl;
//}

//void test01()
//{
//    vector<int> v1;
//
//    //β��
//    v1.push_back(10);
//    v1.push_back(20);
//    v1.push_back(30);
//    v1.push_back(40);
//    v1.push_back(50);
//    PrintVector(v1);
//
//    //βɾ
//    v1.pop_back();
//    PrintVector(v1);
//
//    //����
//    v1.insert(v1.begin(), 100);
//    PrintVector(v1);
//
//    v1.insert(v1.begin(), 2, 1000);
//    PrintVector(v1);
//
//    //ɾ��
//    v1.erase(v1.begin());
//    PrintVector(v1);
//
//    //���
//    //v1.erase(v1.begin(), v1.end());
//    v1.clear();
//    PrintVector(v1);
//}
//
//
//int main()
//{
//    test01();
//	system("pause");
//	return 0;
//}