//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<deque>
//#include<algorithm>
//#include<ctime>
//using namespace std;
//
///*
//	����������
//	������ѡ�֣�ѡ��ABCDE��10����ί�ֱ��ÿһ��ѡ�ִ�֣�ȥ����߷֣�ȥ����ί����ͷ֣�ȡƽ����
//
//	ʵ�ֲ��裺
//	1����������ѡ�֣��ŵ�vector������
//	2������vector������ȡ����ÿһ��ѡ�֣�ִ��forѭ�������԰�10�����ִ�ִ浽deque������
//	3��sort�㷨��deque�����з�������ȥ����ߺ���ͷ�
//	4��deque��������һ�飬�ۼ��ܷ�
//	5����ȡƽ����
//*/
//
////ѡ����
//class Person
//{
//public:
//
//	Person(char name, int score)
//	{
//		this->m_Name = name;
//		this->m_Score = score;
//	}
//
//	char m_Name; //����
//	int m_Score; //ƽ����
//};
//
//void creatPerson(vector<Person>& v)
//{
//	string nameSeed = "ABCDE";
//
//	for (int i = 0; i < 5; i++)
//	{
//		char name = nameSeed[i];
//
//		int score = 0;
//
//		Person p(name, score);
//
//		//��������Person���� ���뵽������
//		v.push_back(p);
//	}
//}
//
////���
//void setScore(vector<Person>& v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); ++it)
//	{
//		//����ί�ķ��������뵽deque������
//		deque<int>d;
//
//		for (int i = 0; i < 10; i++)
//		{
//			d.push_back(rand() % 41 + 60); //60 ~ 100
//		}
//
//		//����
//		sort(d.begin(), d.end());
//
//		//for (deque<int>::iterator dit = d.begin(); dit != d.end(); ++dit)
//		//{
//		//	cout << *dit << " ";
//		//}
//		//cout << endl;
//
//		//ȥ����߷ֺ���ͷ�
//		d.pop_front();
//		d.pop_back();
//
//		//ȡƽ����
//		int sum = 0;
//		for (deque<int>::iterator dit = d.begin(); dit != d.end(); ++dit)
//		{
//			sum += *dit; //�ۼ�ÿ����ί�ķ���
//		}
//
//		int avg = sum / d.size();
//
//		//��ƽ���֣���ֵ��ѡ������
//		it->m_Score = avg;
//	}
//}
//
//void showScore(const vector<Person>& v)
//{
//	for (vector<Person>::const_iterator it = v.begin(); it != v.end(); ++it)
//	{
//		cout << "ѡ��" << it->m_Name << " ƽ���֣� " << it->m_Score << endl;
//	}
//}
//
//int main()
//{
//	//���������
//	srand((unsigned int)time(NULL));
//
//	//1������5��ѡ��
//	vector<Person>v; //���ѡ������
//	creatPerson(v);
//
//	//for (vector<Person>::iterator it = v.begin(); it != v.end(); ++it)
//	//{
//	//	cout << "������ " << (*it).m_Name << " ������ " << (*it).m_Score << endl;
//	//}
//
//	//2����5��ѡ�ִ��
//	setScore(v);
//
//	//3����ʾ���յ÷�
//	showScore(v);
//
//	//�ܽ᣺ѡȡ��ͬ�������������ݣ��������������Ч��
//
//	system("pause");
//	return 0;
//}