//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<list>
//#include"printList.h"
//using namespace std;
//
////list������ֵ�ͽ���
//
////��ֵ
//void test01()
//{
//	list<int>L1;
//
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//	printList(L1);
//
//	list<int>L2;
//	L2 = L1; //operator= ��ֵ
//	printList(L2);
//
//	list<int>L3;
//	L3.assign(L2.begin(), L2.end());
//	printList(L3);
//
//	list<int>L4;
//	L4.assign(10, 100);
//	printList(L4);
//}
//
////����
//void test02()
//{
//	list<int>L1;
//
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	list<int>L2(10, 100);
//
//	cout << "����ǰ�� " << endl;
//	printList(L1);
//	printList(L2);
//
//	L1.swap(L2);
//	cout << "������ " << endl;
//	printList(L1);
//	printList(L2);
//}
//
//int main() {
//
//	//test01();
//	test02();
//
//	//�ܽ᣺list��ֵ�ͽ��������ܹ����ټ���
//
//	system("pause");
//	return 0;
//}