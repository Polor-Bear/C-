//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<map>
//#include"printMap.h"
//using namespace std;
//
////map���� ��С�ͽ���
//
////��С
//void test01()
//{
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(4, 40));
//
//	if (m.empty())
//		cout << "mΪ��" << endl;
//	else
//		cout << "m��Ϊ��" << endl << "m�Ĵ�СΪ�� " << m.size() << endl;
//}
//
////����
//void test02()
//{
//	map<int, int>m1;
//	m1.insert(pair<int, int>(1, 10));
//	m1.insert(pair<int, int>(3, 30));
//	m1.insert(pair<int, int>(2, 20));
//	m1.insert(pair<int, int>(4, 40));
//
//	map<int, int>m2;
//	m2.insert(pair<int, int>(5, 100));
//	m2.insert(pair<int, int>(6, 200));
//	m2.insert(pair<int, int>(7, 300));
//	m2.insert(pair<int, int>(8, 400));
//
//	cout << "����ǰ�� " << endl;
//	printMap(m1);
//	printMap(m2);
//
//	cout << "������ " << endl;
//	m1.swap(m2);
//	printMap(m1);
//	printMap(m2);
//}
//
//int main() {
//
//	//test01();
//	test02();
//
//	//�ܽ᣺
//	//ͳ�ƴ�С����size
//	//�ж��Ƿ�Ϊ�ա���empty
//	//������������swap
//
//	system("pause");
//	return 0;
//}