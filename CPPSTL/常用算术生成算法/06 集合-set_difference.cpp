#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


/*
`set_difference(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);  `

// ���������ϵĲ

// **ע��:�������ϱ�������������**

// beg1 ����1��ʼ������
// end1 ����1����������
// beg2 ����2��ʼ������
// end2 ����2����������
// dest Ŀ��������ʼ������
*/

/*

- �����������ϱ������������
- Ŀ���������ٿռ���Ҫ��**��������ȡ�ϴ�ֵ**
- set_difference����ֵ���ǲ�����һ��Ԫ�ص�λ��
*/

class myPrint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void test01()
{
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
		v2.push_back(i + 5);
	}

	vector<int> vTarget;

	vTarget.resize(max(v1.size(), v2.size()));

	cout << "v1 = " << endl;
	for_each(v1.begin(), v1.end(), myPrint());
	cout << endl;

	cout << "v2 = " << endl;
	for_each(v2.begin(), v2.end(), myPrint());
	cout << endl;

	cout << "v1��v2�ĲΪ�� " << endl;  //Ԫ������v1������v2
	vector<int>::iterator itend1 = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	for_each(vTarget.begin(), itend1, myPrint());
	cout << endl;

	cout << "v2��v1�ĲΪ�� " << endl;  //Ԫ������v2������v1
	vector<int>::iterator itend2 = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vTarget.begin());
	for_each(vTarget.begin(), itend2, myPrint());
	cout << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}