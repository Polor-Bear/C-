//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<functional>
//#include"printVector.h"
//using namespace std;
//
////�ڽ��������� _�߼��º���
//void test01()
//{
//	vector<bool>v1;
//
//	v1.push_back(true);
//	v1.push_back(false);
//	v1.push_back(true);
//	v1.push_back(false);
//
//	printVector(v1);
//
//	//�����߼��ǣ�������v1���˵�����v2�У���ִ��ȡ������
//	vector<bool>v2;
//	v2.resize(v1.size()); //һ��Ҫ��ǰ���ٿռ�
//	transform(v1.begin(), v1.end(), v2.begin(), logical_not<bool>());
//	printVector(v2);
//}
//
//int main() {
//
//	test01();
//
//	//�ܽ᣺�߼��º���ʵ��Ӧ�ý��٣��˽⼴��
//
//	system("pause");
//	return 0;
//}