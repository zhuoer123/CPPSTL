#include<iostream>
#include<vector>
#include<string>
#include<deque>
#include<algorithm>
#include<ctime>

using namespace std;

// ��5��ѡ�֣�ѡ��ABCDE��10����ί�ֱ��ÿһ��ѡ�ִ�֣�ȥ����߷֣�ȥ����ί����ͷ֣�ȡƽ����


/*
   1. ��������ѡ�֣��ŵ�vector��
   2. ����vector������ȡ����ÿһ��ѡ�֣�ִ��forѭ�������԰�10�����ִ�ִ浽deque������
   3. sort�㷨��deque�����з�������ȥ����ߺ���ͷ�
   4. deque��������һ�飬�ۼ��ܷ�
   5. ��ȡƽ����
*/


class Person
{
public:
	Person(string name, int score)
	{
		this->m_Name = name;
		this->m_score = score;
	}
	string m_Name;
	int m_score;
};

void createPerson(vector<Person>& v)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "ѡ��";
		name += nameSeed[i];
		
		int score = 0;
		Person p(name, score);

		v.push_back(p);
	}
}

void setScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//��ί��ַ���deque������
		deque<int> d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;  //60~100
			d.push_back(score);
		}

		//cout << "ѡ�֣�" << it->m_Name << " ������" << endl;
		//for (deque<int>::const_iterator dit = d.begin(); dit != d.end(); dit++)
		//{
		//	cout << *dit << " ";
		//}
		//cout << endl;

		//����
		sort(d.begin(), d.end());

		//ȥ����߷ֺ���ͷ�
		d.pop_back();
		d.pop_front();

		//ȡƽ����
		int sum = 0;
		for (deque<int>::const_iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit;
		}

		int average = sum / d.size();

		//ƽ���ָ�ֵ��ѡ��
		(*it).m_score = average;
	}
}

void showScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "ѡ�֣�" << it->m_Name << " ƽ���֣� " << it->m_score << endl;
	}
}

int main()
{
	//���������
	srand((unsigned int)time(NULL));

	//1. ����5��ѡ��
	vector<Person> v;
	createPerson(v);

	//for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	//{
	//	cout << "������" << (*it).m_Name << " ������ " << (*it).m_score << endl;
	//}

	//2. ���
	setScore(v);

	//3.��ʾ����
	showScore(v);

	system("pause");
	return 0;
}