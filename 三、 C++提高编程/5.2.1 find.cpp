//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//
////���ò����㷨 find
//
////���� ������������
//void test01()
//{
//	vector<int>v;
//
//	for (int i = 0; i < 10; ++i)
//		v.push_back(i);
//
//	//�����������Ƿ���5���Ԫ��
//	vector<int>::iterator it = find(v.begin(), v.end(), 5);
//
//	if (it == v.end())
//		cout << "û���ҵ���" << endl;
//	else
//		cout << "�ҵ��� " << *it << endl;
//}
//
////���� �Զ�����������
//class Person
//{
//public:
//	Person(string name, int age) :m_Name(name), m_Age(age) {}
//
//	//����== �õײ�find֪����ζԱ�Person��������
//	bool operator==(const Person& p)const
//	{
//		return this->m_Name == p.m_Name && this->m_Age == p.m_Age;
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
//	//����������
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4); 
//
//	Person pp("bbb", 20);
//
//	vector<Person>::iterator it = find(v.begin(), v.end(), pp);
//
//	if (it == v.end())
//		cout << "û���ҵ���" << endl;
//	else
//		cout << "�ҵ�Ԫ�� ������ " << it->m_Name << "	���䣺 " << it->m_Age << endl;
//}
//
//int main() {
//
//	//test01();
//	test02();
//
//	//�ܽ᣺ ����find��������������ָ����Ԫ�أ�����ֵ�ǵ�����
//
//	system("pause");
//	return 0;
//}