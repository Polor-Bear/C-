//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//
////���ò����㷨 count
//
////1��ͳ��������������
//void test01()
//{
//	vector<int>v;
//
//	v.push_back(10);
//	v.push_back(40);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(20);
//	v.push_back(40);
//
//	int num = count(v.begin(), v.end(), 40);
//
//	cout << "40��Ԫ�ظ���Ϊ�� " << num << endl;
//}
//
////2��ͳ���Զ�����������
//class Person
//{
//public:
//	Person() {}
//	Person(string name, int age) :m_Name(name), m_Age(age) {}
//
//	bool operator==(const Person& p)
//	{
//		return this->m_Age == p.m_Age;
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
//	Person p1("����", 35);
//	Person p2("����", 35);
//	Person p3("�ŷ�", 35);
//	Person p4("����", 30);
//	Person p5("�ܲ�", 40);
//
//	//����Ա���뵽������
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	Person p("�����", 35);
//
//	int num = count(v.begin(), v.end(), p);
//
//	cout << "�������ͬ�������Ϊ�� " << num << endl;
//}
//
//int main() {
//
//	//test01();
//	test02();
//
//	//�ܽ᣺ͳ���Զ����������͵�ʱ����Ҫ������� ==
//
//	system("pause");
//	return 0;
//}