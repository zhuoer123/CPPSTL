#include<iostream>
#include<vector>

using namespace std;

/*
    empty(); //�ж������Ƿ�Ϊ��
    capacity(); //����������
    size(); //����������Ԫ�صĸ���
    resize(int num); //����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ�á�
    
    //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
    resize(int num, elem); //����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ�á�
    //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��

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
//    for (int i = 0; i < 10; i++)
//    {
//        v1.push_back(i);
//    }
//    PrintVector(v1);
//
//    if (v1.empty())
//    {
//        cout << "v1Ϊ��" << endl;
//    }
//    else
//    {
//        cout << "v1��Ϊ��" << endl;
//        cout << "v1������Ϊ" << v1.capacity() << endl;  //�ײ���ɷ���
//        cout << "v1�Ĵ�СΪ" << v1.size() << endl;
//
//    }
//
//    //����ָ����С
//
//    v1.resize(15);
//    PrintVector(v1);
//
//    v1.resize(5);
//    PrintVector(v1);
//}

//int main()
//{
//    test01();
//	system("pause");
//	return 0;
//}