//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//#include<set>
//#include"printSet.h"
//using namespace std;
//
////set��������
//
//class Person
//{
//public:
//	Person(string name, int age) :m_Name(name), m_Age(age) {}
//
//	string m_Name;
//	int m_Age;
//};
//
//class MyCompare
//{
//public:
//	bool operator()(int v1, int v2)const
//	{
//		return v1 > v2;
//	}
//
//	bool operator()(const Person p1, const Person p2)const
//	{
//		return p1.m_Age < p2.m_Age;
//	}
//};
//
////���������������
//void test01()
//{
//	set<int>s1;
//
//	s1.insert(10);
//	s1.insert(40);
//	s1.insert(20);
//	s1.insert(50);
//	s1.insert(30);
//
//	printSet(s1);
//
//	//ָ���������Ϊ�Ӵ�С
//	set<int, MyCompare>s2;
//
//	s2.insert(10);
//	s2.insert(40);
//	s2.insert(20);
//	s2.insert(50);
//	s2.insert(30);
//
//	for (set<int>::iterator it = s2.begin(); it != s2.end(); ++it)
//		cout << *it << " ";
//	cout << endl;
//}
//
////����Զ�����������
//void test02()
//{
//	//�Զ����������ͣ���Ҫָ���������
//	set<Person, MyCompare>s;
//
//	//����Person����
//	Person p1("����", 30);
//	Person p2("����", 28);
//	Person p3("�ŷ�", 25);
//	Person p4("����", 20);
//
//	s.insert(p1);
//	s.insert(p2);
//	s.insert(p3);
//	s.insert(p4);
//
//	for (set<Person>::iterator it = s.begin(); it != s.end(); ++it)
//		cout << "������ " << it->m_Name << "	���䣺 " << it->m_Age << endl;
//}
//
//int main() {
//
//	test01();
//	//test02();
//
//	//�ܽ᣺
//	//���÷º�������ָ��set�������������
//	//�����Զ����������ͣ�set����ָ���������ſ��Բ�������
//
//	system("pause");
//	return 0;
//}