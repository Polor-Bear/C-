//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<list>
//#include"printList.h"
//using namespace std;
//
////list������С����
//void test01()
//{
//	list<int>L;
//
//	L.push_back(10);
//	L.push_back(20);
//	L.push_back(30);
//	L.push_back(40);
//
//	printList(L);
//
//	//�ж������Ƿ�Ϊ��
//	if (L.empty())
//		cout << "LΪ��" << endl;
//	else
//		cout << "L��Ϊ��" << endl << "L��Ԫ�ظ���Ϊ�� " << L.size() << endl;
//
//	//����ָ����С
//	L.resize(10, 10000);
//	printList(L);
//
//	L.resize(2);
//	printList(L);
//}
//
//int main() {
//
//	test01();
//
//	//�ܽ᣺
//	//�ж��Ƿ�Ϊ�ա���empty
//	//����Ԫ�ظ�������size
//	//����ָ����С����resize
//
//	system("pause");
//	return 0;
//}