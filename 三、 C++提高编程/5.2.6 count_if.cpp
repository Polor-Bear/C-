//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//
////���ò����㷨 count_if
//
////ͳ��������������
//class Greater20
//{
//public:
//	bool operator()(const int& val)const
//	{
//		return val > 20;
//	}
//};
//
//void test01()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(40);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(40);
//	v.push_back(20);
//
//	int num = count_if(v.begin(), v.end(), Greater20());
//
//	cout << "����20��Ԫ�ظ���Ϊ�� " << num << endl;
//}
//
////ͳ���Զ�����������
//class Person
//{
//public:
//	Person() {}
//	Person(string name, int age) :m_Name(name), m_Age(age) {}
//
//	string m_Name;
//	int m_Age;
//};
//
//class AgeGreater20
//{
//public:
//	bool operator()(const Person& p)const
//	{
//		return p.m_Age > 20;
//	}
//};
//
//void test02()
//{
//	vector<Person>v;
//
//	Person p1("����", 35);
//	Person p2("����", 35);
//	Person p3("�ŷ�", 35);
//	Person p4("����", 20);
//	Person p5("�ܲ�", 40);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	int num = count_if(v.begin(), v.end(), AgeGreater20());
//
//	cout << "���䳬��20�������Ϊ�� " << num << endl;
//}
//
//int main() {
//
//	//test01();
//	test02();
//
//	//�ܽ᣺��ֵͳ����count��������ͳ����count_if
//
//	system("pause");
//	return 0;
//}