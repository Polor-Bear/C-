#include<iostream>
using namespace std;

//ֵ����
void swap01(int num1, int num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

//��ַ����
void swap02(int * p1, int * p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main77() {

	int a = 10;
	int b = 20;

	swap01(a, b); //ֵ���ݲ���ı�ʵ��

	cout << "swap01a = " << a << endl;
	cout << "swap01b = " << b << endl;

	swap02(&a, &b); //��ַ���ݿ��Ըı�ʵ��

	cout << "swap02a = " << a << endl;
	cout << "swap02b = " << b << endl;

	//�ܽ�:��������޸�ʵ�Σ�����ֵ���ݣ�������޸�ʵ�Σ����õ�ַ���ݡ�

	system("pause");

	return 0;
}