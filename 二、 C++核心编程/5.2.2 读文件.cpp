//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//#include<fstream>
//using namespace std;
//
//class Person
//{
//public:
//
//	char m_Name[64];
//	int m_Age;
//};
//
//void test01()
//{
//	//1������ͷ�ļ�
//	//2������������
//	ifstream ifs("person.txt", ios::binary | ios::in);
//
//	//3�����ļ��������
//	if (!ifs.is_open())
//	{
//		cout << "�ļ���ʧ��" << endl;
//		return;
//	}
//
//	//4�����ļ�
//	Person p;
//	ifs.read((char*)&p, sizeof(Person));
//
//	cout << "����: " << p.m_Name << "  ����: " << p.m_Age << endl;
//
//	//5���ر��ļ�
//	ifs.close();
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}