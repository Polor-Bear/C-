//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
////��ģ���뺯��ģ������
//template<class NameType, class AgeType = int>
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	void showPerson()
//	{
//		cout << "name: " << this->m_Name << "	age: " << this->m_Age << endl;
//	}
//
//	NameType m_Name;
//	AgeType m_Age;
//};
//
////1����ģ��û���Զ������Ƶ�ʹ�÷���
//void test01()
//{
//	//Person p("�����", 1000); �����޷�ʹ���Զ������Ƶ�
//
//	Person<string, int> p("�����", 1000);//��ȷ��ֻ������ʾָ������
//	p.showPerson();
//}
//
////2����ģ����ģ������б��п�����Ĭ�ϲ���
//void test02()
//{
//	Person<string> p("��˽�",999);//��ģ���е�ģ������б�����ָ��Ĭ�ϲ���
//	p.showPerson();
//}
//
//int main() {
//
//	test02();
//
//	//�ܽ᣺
//	//��ģ��ʹ��ֻ������ʾָ�����ͷ�ʽ
//	//��ģ���е�ģ������б������Ĭ�ϲ���
//
//	system("pause");
//	return 0;
//}