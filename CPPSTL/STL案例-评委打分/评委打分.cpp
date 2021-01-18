#include<iostream>
#include<vector>
#include<string>
#include<deque>
#include<algorithm>
#include<ctime>

using namespace std;

// 有5名选手：选手ABCDE，10个评委分别对每一名选手打分，去除最高分，去除评委中最低分，取平均分


/*
   1. 创建五名选手，放到vector中
   2. 遍历vector容器，取出来每一个选手，执行for循环，可以把10个评分打分存到deque容器中
   3. sort算法对deque容器中分数排序，去除最高和最低分
   4. deque容器遍历一遍，累加总分
   5. 获取平均分
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
		string name = "选手";
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
		//评委打分放入deque容器中
		deque<int> d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;  //60~100
			d.push_back(score);
		}

		//cout << "选手：" << it->m_Name << " 分数：" << endl;
		//for (deque<int>::const_iterator dit = d.begin(); dit != d.end(); dit++)
		//{
		//	cout << *dit << " ";
		//}
		//cout << endl;

		//排序
		sort(d.begin(), d.end());

		//去除最高分和最低分
		d.pop_back();
		d.pop_front();

		//取平均分
		int sum = 0;
		for (deque<int>::const_iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit;
		}

		int average = sum / d.size();

		//平均分赋值给选手
		(*it).m_score = average;
	}
}

void showScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "选手：" << it->m_Name << " 平均分： " << it->m_score << endl;
	}
}

int main()
{
	//随机数种子
	srand((unsigned int)time(NULL));

	//1. 创建5名选手
	vector<Person> v;
	createPerson(v);

	//for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	//{
	//	cout << "姓名：" << (*it).m_Name << " 分数： " << (*it).m_score << endl;
	//}

	//2. 打分
	setScore(v);

	//3.显示分数
	showScore(v);

	system("pause");
	return 0;
}