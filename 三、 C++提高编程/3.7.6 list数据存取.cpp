//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<list>
//#include"printList.h"
//using namespace std;
//
////list���� ���ݴ�ȡ
//void test01()
//{
//	list<int>L;
//
//	L.push_back(10);
//	L.push_back(20);
//	L.push_back(30);
//	L.push_back(40);
//
//	//cout << L.at(0) << endl; //���󣬲�֧��at��ʽ����list����
//	//cout << L[0] << endl; //���󣬲�֧��[]��ʽ����list����
//	//ԭ����list�����������������������Կռ�洢���ݣ�������Ҳ�ǲ�֧��������ʵ�
//
//	cout << "��һ��Ԫ��Ϊ�� " << L.front() << endl;
//	cout << "���һ��Ԫ��Ϊ�� " << L.back() << endl;
//
//	//��֤�������ǲ�֧��������ʵ�
//	list<int>::iterator it = L.begin();
//	it++; //֧�ֵ������ݼ�
//	it--;
//	//it = it + 1; //��֧���������
//}
//
//int main() {
//
//	test01();
//
//	//�ܽ᣺
//	//list�����в�����ͨ��[]��at��ʽ��������
//	//���ص�һ��Ԫ�ء���front
//	//�������һ��Ԫ�ء���back
//
//	system("pause");
//	return 0;
//}