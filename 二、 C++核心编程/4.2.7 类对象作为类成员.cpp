//#include"head.h"
//
////C++���еĳ�Ա��������һ����Ķ������ǳƸó�ԱΪ	�����Ա
//
////�ֻ���
//class Phone
//{
//public:
//	Phone(string name) :m_PName(name) {
//		cout << "Phone���캯����" << endl;
//	}
//	~Phone() {
//		cout << "Phone����������" << endl;
//	}
//	//�ֻ�Ʒ������
//	string m_PName;
//};
//
////����
//class Person
//{
//public:
//	//Phone m_Phone = pName	(��ʽת����)
//	Person(string name, string pName) :m_Name(name), m_Phone(pName) {
//		cout << "Person���캯����" << endl;
//	}
//	~Person() {
//		cout << "Person����������" << endl;
//	}
//	void playGame() {
//		cout << m_Name << "ʹ��" << m_Phone.m_PName << "���ֻ�" << endl;
//	}
//	string m_Name; //����
//	Phone m_Phone; //�ֻ�
//};
//
////�������������Ϊ�����Ա�������ʱ���ȹ�������Ա���ٹ�������������˳���빹���෴	(�Ƚ�������ٵ�����)
//
//void test01() {
//	Person p("����", "ƻ��MAX");
//	p.playGame();
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}