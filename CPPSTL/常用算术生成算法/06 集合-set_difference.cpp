#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


/*
`set_difference(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);  `

// 求两个集合的差集

// **注意:两个集合必须是有序序列**

// beg1 容器1开始迭代器
// end1 容器1结束迭代器
// beg2 容器2开始迭代器
// end2 容器2结束迭代器
// dest 目标容器开始迭代器
*/

/*

- 求差集的两个集合必须的有序序列
- 目标容器开辟空间需要从**两个容器取较大值**
- set_difference返回值既是差集中最后一个元素的位置
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

	cout << "v1与v2的差集为： " << endl;  //元素属于v1不属于v2
	vector<int>::iterator itend1 = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	for_each(vTarget.begin(), itend1, myPrint());
	cout << endl;

	cout << "v2与v1的差集为： " << endl;  //元素属于v2不属于v1
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