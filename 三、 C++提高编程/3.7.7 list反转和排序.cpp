//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<list>
//#include"printList.h"
//#include<algorithm>
//using namespace std;
//
////list ������ת������
//
//void test01()
//{
//	list<int>L;
//
//	L.push_back(20);
//	L.push_back(10);
//	L.push_back(50);
//	L.push_back(40);
//	L.push_back(30);
//
//	cout << "��תǰ�� " << endl;
//	printList(L);
//
//	cout << "��ת�� " << endl;
//	L.reverse();
//	printList(L);
//}
//
//bool myCompare(int a, int b)
//{
//	return a > b;
//}
//
////����
//void test02()
//{
//	list<int>L;
//
//	L.push_back(20);
//	L.push_back(10);
//	L.push_back(50);
//	L.push_back(40);
//	L.push_back(30);
//
//	cout << "����ǰ�� " << endl;
//	printList(L);
//
//	//���в�֧��������ʵ�������������������ʹ�ñ�׼�㷨
//	//��֧��������ʵ��������������ڲ����ṩ��Ӧ��һЩ�㷨
//	//sort(L.begin(), L.end());
//
//	L.sort();
//	cout << "����� " << endl;
//	printList(L);
//
//	//L.sort(); L.reverse();
//	L.sort(myCompare);
//	printList(L);
//}
//
//int main() {
//
//	//test01();
//	test02();
//
//	//�ܽ᣺
//	//��ת����reverse
//	//���򡪡�sort (��Ա����)
//
//	system("pause");
//	return 0;
//}