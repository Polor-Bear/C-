//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include"printVector.h"
//using namespace std;
//
////vector �����ʹ�С����
//void test01()
//{
//	vector<int> v1;
//
//	for (int i = 0; i < 10; ++i)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//	if (v1.empty()) //Ϊ�� ��������Ϊ��
//	{
//		cout << "v1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "v1��Ϊ��" << endl;
//		cout << "v1������Ϊ��" << v1.capacity() << endl;
//		cout << "v2�Ĵ�СΪ��" << v1.size() << endl;
//	}
//
//	//����ָ����С
//	v1.resize(15, 100); //�������ذ汾������ָ��Ĭ�����ֵ������2
//	printVector(v1); //�������ָ���ı�ԭ�����ˣ�Ĭ����0����µ�λ��
//	cout << v1.size() << endl;
//	cout << v1.capacity() << endl; //19
//
//	v1.resize(5);
//	printVector(v1); //�������ָ���ı�ԭ�����ˣ��������ֻᱻɾ����
//	cout << v1.size() << endl;
//	cout << v1.capacity() << endl; //����19�������������С
//}
//
//int main() {
//
//	test01();
//
//	//�ܽ᣺
//	//�ж��Ƿ�Ϊ�ա���empty
//	//����Ԫ�ظ�������size
//	//����������������capacity
//	//����ָ����С����resize
//
//	system("pause");
//	return 0;
//}