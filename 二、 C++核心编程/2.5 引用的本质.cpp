#include"head.h"

//����: ���õı�����C++�ڲ�ʵ������һ��ָ�볣��

//��:
void func1(int & ref) //���������ã�ת��Ϊ int * const ref = &a;
{
	ref = 100; //ref�����ã�ת��Ϊ *ref = 100;
}

int main25() {

	int a = 10;

	int & ref = a; //�Զ�ת��Ϊ int * const ref = a;	ָ�볣��ָ�򲻿ɸ�	Ҳ˵��Ϊʲô����һ����ʼ���㲻�ɸ���

	ref = 20; //�ڲ�������ref�����ã��Զ�������ת��Ϊ *ref = 20;

	cout << "a = " << a << endl;
	cout << "ref = " << ref << endl;

	func1(a);

	cout << "a = " << a << endl;
	cout << "ref = " << ref << endl;

	//����: C++�Ƽ����ü�������Ϊ�﷨���㣬���ñ�����ָ�볣�����������õ�ָ�����������������������

	system("pause");
	return 0;
}