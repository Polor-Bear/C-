//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<deque>
//#include<algorithm>
//#include"printDeque.h"
//using namespace std;
//
////deque��������
//void test01()
//{
//	deque<int>d;
//
//	d.push_back(10);
//	d.push_back(20);
//	d.push_back(30);
//	d.push_front(100);
//	d.push_front(200);
//	d.push_front(300);
//
//	// 300 200 100 10 20 30
//	printDeque(d);
//
//	//���� Ĭ��������� ��С���� ����
//	//����֧��������ʵ�����������������������sort�㷨ֱ�Ӷ����������
//	//vector����Ҳ��������sort��������
//	sort(d.begin(), d.end());
//	cout << "����� " << endl;
//	printDeque(d);
//}
//
//int main() {
//
//	test01();
//
//	//�ܽ᣺sort�㷨�ǳ�ʵ�ã�ʹ��ʱ����ͷ�ļ� algorithm����
//
//	system("pause");
//	return 0;
//}