#include<iostream>
#include<vector>

using namespace std;

/*
   ��vector�е����ݵĴ�ȡ����
   reserve(int len); //����Ԥ��len��Ԫ�س��ȣ�Ԥ��λ�ò���ʼ����Ԫ�ز��ɷ���
*/

void test01()
{
	vector<int> v1;

	//Ԥ���ռ�
	v1.reserve(100000);

	int num = 0; //ͳ�ƿ��ٴ���
	int* p = NULL;

	for (int i = 0; i < 100000; i++)
	{
		v1.push_back(i);
		if (p != &v1[0])
		{
			p = &v1[0];  //���¿����ڴ棬�׵�ַ��仯�� 
			num++;    // ͳ���׵�ַ�仯�Ĵ���
		}
	}
	cout << "num = " << num << endl;  //�����ڴ�Ĵ���

}

int main()
{
	test01();
	system("pause");
	return 0;
}