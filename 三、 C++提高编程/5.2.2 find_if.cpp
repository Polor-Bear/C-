//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//
////���ò����㷨 find_if
//
////1������������������
//class GreaterFive
//{
//public:
//	bool operator()(const int& val)const
//	{
//		return val > 5;
//	}
//};
//
//void test01()
//{
//	vector<int>v;
//
//	for (int i = 0; i < 10; ++i)
//		v.push_back(i);
//
//	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
//
//	if (it == v.end())
//		cout << "û���ҵ���" << endl;
//	else
//		cout << "�ҵ�Ԫ�أ� " << *it << endl;
//}
//
////2�������Զ�����������
//class Person
//{
//public:
//	Person() {}
//	Person(string name, int age) :m_Name(name), m_Age(age) {}
//
//	bool operator()(const Person& p)const
//	{
//		return p.m_Age > 20;
//	}
//
//	string m_Name;
//	int m_Age;
//};
//
//void test02()
//{
//	vector<Person>v;
//
//	//��������
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//
//	//�����������20����
//	vector<Person>::iterator it = find_if(v.begin(), v.end(), Person());
//
//	if (it == v.end())
//		cout << "û���ҵ���" << endl;
//	else
//		cout << "�ҵ������� " << it->m_Name << "	���䣺 " << it->m_Age << endl;
//}
//
//int main() {
//
//	//test01();
//	test02();
//
//	//�ܽ᣺find_if����������ʹ���Ҹ������ṩ�ķº������Ըı䲻ͬ�Ĳ���
//
//	system("pause");
//	return 0;
//}