//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<map>
//#include"printMap.h"
//using namespace std;
//
////map���� ���Һ�ɾ��
//void test01()
//{
//	//����
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(4, 40));
//
//	map<int, int>::iterator pos = m.find(3);
//
//	if (pos != m.end())
//		cout << "�鵽��Ԫ�� key = " << (*pos).first << "	value = " << pos->second << endl;
//	else
//		cout << "δ�ҵ�Ԫ��" << endl;
//
//	//ͳ��
//	//map����������ظ�keyԪ�أ�countͳ�ƶ���map���ԣ�����޷��� 0 �� 1
//	//multimap��countͳ�ƿ��Դ���1
//	int num = m.count(3);
//	cout << "num = " << num << endl;
//}
//
//int main() {
//
//	test01();
//
//	//�ܽ᣺
//	//���ҡ���find(���ص��ǵ�����)
//	//ͳ�ơ���count(����map���ԣ����ؽ��Ϊ0����1)
//
//	system("pause");
//	return 0;
//}