//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Person
//{
//	friend ostream& operator<<(ostream& cout, const Person& p);
//
//public:
//	Person(int a, int b) :m_A(a), m_B(b)
//	{
//
//	}
//
//private:
//
//	//���ó�Ա�����������������	p.operator(cout)	�򻯰汾 p << cout
//	//�������ó�Ա���������������������Ϊ�޷�ʵ��cout�����
//
//	int m_A;
//	int m_B;
//};
//
////ֻ������ȫ�ֺ���ʵ���������������
////ostream ����ֻ����һ�����Է���ʱҪ�����õ���ʽ
//ostream& operator<<(ostream& cout, const Person& p)
//{
//	cout << "p.m_A = " << p.m_A << "	p.m_B = " << p.m_B;
//
//	return cout;
//}
//
//void test01()
//{
//	Person p(10, 20);
//
//	cout << p << "	Hello World!" << endl; //��ʽ���˼��
//}
//
//
//int main() {
//
//	test01();
//
//	//�ܽ�: ������������������Ԫ����ʵ������Զ�����������
//
//	system("pause");
//	return 0;
//}