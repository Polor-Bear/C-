#include<iostream>
using namespace std;
#include "swap.h"

//���庯����ʵ���������ݽ��н�������

//�����������Ҫ����ֵ��������ʱ�����дvoid
//void swap(int num1, int num2)
//{
//	cout << "����ǰ�� " << endl;
//	cout << "num1 = " << num1 << endl;
//	cout << "num2 = " << num2 << endl;
//
//	int temp = num1;
//	num1 = num2;
//	num2 = temp;
//
//	cout << "������ " << endl;
//	cout << "num1 = " << num1 << endl;
//	cout << "num2 = " << num2 << endl;
//}

int main64() {
	//ֵ����
	//��νֵ���ݣ����Ǻ�������ʱʵ�ν���ֵ������β�
	//ֵ����ʱ������βη����仯��������Ӱ��ʵ��

	int a = 10; int b = 20;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	swap(a, b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl; //ֵ����ʱ������βη����仯��������Ӱ��ʵ��

	//�ܽ᣺ ֵ����ʱ���β��Ǹı䲻��ʵ�ε�

	system("pause");

	return 0;
}