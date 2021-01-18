#include<iostream>
#include<vector>
#include<functional>
#include<algorithm>

using namespace std;

//��������������
//1. bind2nd()
//2. �̳� public binary_function<int, int, void>
//3. const


class myPrint : public binary_function<int, int, void>
{
public:
	void operator()(int val, int start) const
	{
		cout << "start = " << start << " val = " << val << " sum = " <<  val + start << endl;
	}
};

void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	cout << "�������ʼ�ۼӵ�ֵ��" << endl;
	int start = 0;
	cin >> start;

	for_each(v.begin(), v.end(), bind2nd(myPrint(),start));
	//for_each(v.begin(), v.end(), bind1st(myPrint(), start)); ����
}


int main()
{
	test01();
	system("pause");
	return 0;
}