#include<iostream>
#include<vector>

using namespace std;

/*
   对vector中的数据的存取操作
   reserve(int len); //容器预留len个元素长度，预留位置不初始化，元素不可访问
*/

void test01()
{
	vector<int> v1;

	//预留空间
	v1.reserve(100000);

	int num = 0; //统计开辟次数
	int* p = NULL;

	for (int i = 0; i < 100000; i++)
	{
		v1.push_back(i);
		if (p != &v1[0])
		{
			p = &v1[0];  //重新开辟内存，首地址会变化！ 
			num++;    // 统计首地址变化的次数
		}
	}
	cout << "num = " << num << endl;  //开辟内存的次数

}

int main()
{
	test01();
	system("pause");
	return 0;
}