//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<set>
//#include"printSet.h"
//using namespace std;
//
////set���� �� multiset����������
//void test01()
//{
//	set<int>s;
//
//	pair<set<int>::iterator, bool> ret = s.insert(10);
//
//	if (ret.second)
//		cout << "��һ�β���ɹ�" << endl;
//	else
//		cout << "��һ�β���ʧ��" << endl;
//
//	ret = s.insert(10);
//
//	if (ret.second)
//		cout << "�ڶ��β���ɹ�" << endl;
//	else
//		cout << "�ڶ��β���ʧ��" << endl;
//
//	multiset<int>ms;
//	//��������ظ�ֵ
//	ms.insert(10);
//	ms.insert(30);
//	ms.insert(20);
//	ms.insert(40);
//	ms.insert(10);
//	ms.insert(10);
//
//	printMultiset(ms);
//}
//
//int main() {
//
//	test01();
//
//	//�ܽ᣺
//	//�������������ظ����ݿ�������set
//	//�����Ҫ�����ظ���������multiset
//
//	system("pause");
//	return 0;
//}