//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<set>
//#include"printSet.h"
//using namespace std;
//
////set���� ���Һ�ͳ��
//
////����
//void test01()
//{
//	set<int>s;
//
//	//��������
//	s.insert(10);
//	s.insert(30);
//	s.insert(20);
//	s.insert(40);
//
//	set<int>::iterator pos = s.find(30);
//
//	if (pos != s.end())
//		cout << "�ҵ�Ԫ�أ� " << *pos << endl;
//	else
//		cout << "δ�ҵ�Ԫ��" << endl;
//}
//
////ͳ��
//void test02()
//{
//	set<int>s;
//
//	//��������
//	s.insert(10);
//	s.insert(30);
//	s.insert(20);
//	s.insert(40);
//	s.insert(30);
//	s.insert(30);
//	s.insert(30);
//	s.insert(30);
//
//	//ͳ��30�ĸ���
//	int num = s.count(30);
//	//����set���ԣ�ͳ�ƽ���޷��� 0 �� 1
//	cout << "num = " << num << endl;
//}
//
//int main() {
//
//	//test01();
//	test02();
//
//	//�ܽ᣺
//	//���ҡ���find
//	//ͳ�ơ���count
//
//	system("pause");
//	return 0;
//}