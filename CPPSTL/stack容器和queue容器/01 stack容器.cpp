#include<iostream>
#include<stack>

using namespace std;

/*     stack����
   ���캯����
       stack<T> stk; //stack����ģ����ʵ�֣� stack�����Ĭ�Ϲ�����ʽ
       stack(const stack &stk); //�������캯��
   ��ֵ������
       stack& operator=(const stack &stk); //���صȺŲ�����
   ���ݴ�ȡ��
       push(elem); //��ջ�����Ԫ��
       pop(); //��ջ���Ƴ���һ��Ԫ��
       top(); //����ջ��Ԫ��
   ��С������
       empty(); //�ж϶�ջ�Ƿ�Ϊ��
       size(); //����ջ�Ĵ�С
*/

//void test01()
//{
//    stack<int> s;
//
//    s.push(10);
//    s.push(20);
//    s.push(30);
//
//    while (!s.empty())
//    {
//        cout << "ջ��Ԫ��Ϊ��" << s.top() << endl;
//        s.pop();
//    }
//    cout << "ջ�Ĵ�СΪ��" << s.size() << endl;
//}
//
//int main()
//{
//    test01();
//	system("pause");
//	return 0;
//}