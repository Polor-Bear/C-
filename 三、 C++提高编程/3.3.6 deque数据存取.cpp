//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<deque>
//#include"printDeque.h"
//using namespace std;
//
////deque�������ݴ�ȡ
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
//	//ͨ��[]��ʽ����Ԫ��
//	// 300 200 100 10 20 30
//	for (int i = 0; i < d.size(); i++)
//	{
//		cout << d[i] << " ";
//	}
//	cout << endl;
//
//	//ͨ��at��ʽ����Ԫ��
//	for (int i = 0; i < d.size(); i++)
//	{
//		cout << d.at(i) << " ";
//	}
//	cout << endl;
//
//	cout << "��һ��Ԫ��Ϊ�� " << d.front() << endl;
//	cout << "���һ��Ԫ��Ϊ�� " << d.back() << endl;
//}
//
//int main() {
//
//	test01();
//
//	//�ܽ᣺
//	//�����õ�������ȡdeque������Ԫ�أ�[]��atҲ����
//	//front���������е�һ��Ԫ��
//	//back�������������һ��Ԫ��
//
//	system("pause");
//	return 0;
//}