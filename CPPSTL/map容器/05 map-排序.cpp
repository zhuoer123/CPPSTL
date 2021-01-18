#include<iostream>
#include<map>

using namespace std;

/*
   map容器默认排序规则为 按照key值进行 从小到大排序，掌握如何改变排序规则
*/

class MyCompare
{
public:
	bool operator()(int v1, int v2) const
	{
		return v1 > v2;
	}
};

void test01()
{
	map<int, int, MyCompare> m;
	m.insert(make_pair(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(3, 30));
	m.insert(make_pair(4, 40));
	m.insert(make_pair(5, 50));

	for (map<int, int, MyCompare>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << " value = " << it->second << endl;
	}
}

int main()
{
	test01();
	system("pause");
	return 0;
}