#include<iostream>
#include<list>

using namespace std;

/*
    ��list���������ݽ��д�ȡ

	front(); //���ص�һ��Ԫ�ء�
    back(); //�������һ��Ԫ�ء�
*/

//void test01()
//{
//	list<int> L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	//��֧�� [] at��������
//	cout << "��һ��Ԫ��Ϊ��" << L1.front() << endl;
//	cout << "���һ��Ԫ��Ϊ��" << L1.back() << endl;
//
//	//list�����ĵ�������˫����������֧���������
//	list<int>::iterator it = L1.begin();
//	it++; //��ȷ ֧��˫��
//	it--;
//	//it = it + 1;//���󣬲�������Ծ���ʣ���ʹ��+1
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}