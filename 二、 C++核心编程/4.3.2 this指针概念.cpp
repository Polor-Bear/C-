//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
////thisָ�����;
//
//class Person
//{
//public:
//	//1��������Ƴ�ͻ
//	Person(int age)
//	{
//		//thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
//		this->age = age;
//	}
//
//	//2�����ض�������*this
//	Person & PersonAddAge(const Person &p)
//	{
//		this->age += p.age;
//
//		//this��ָ������ָ�룬��ô*thisָ��ľ����������ı���
//		return *this;
//	}
//
//	int age;
//};
//
//void test01()
//{
//	Person p1(10);
//	cout << "p1������Ϊ: " << p1.age << endl;
//
//	Person p2(18);
//
//	//��ʽ���˼��
//	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
//	cout << "p2������Ϊ: " << p2.age << endl;
//}
//
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}