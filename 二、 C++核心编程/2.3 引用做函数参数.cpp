#include"head.h"

//����: ��������ʱ�������������õļ������β�����ʵ��
//�ŵ�: ���Լ�ָ���޸�ʵ��

//��������

//1��ֵ����
void mySwap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "swap01 a = " << a << endl;
	cout << "swap01 b = " << b << endl;
}

//2����ַ����
void mySwap02(int * a, int * b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//3�����ô���
void mySwap03(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main23() {

	int a = 10;
	int b = 20;

	//mySwap01(a, b); //ֵ���ݣ��ββ�������ʵ��
	//mySwap02(&a, &b); //��ַ���ݣ��βο�������ʵ��
	mySwap03(a, b); //���ô��ݣ��β�Ҳ��������ʵ��

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	//�ܽ�: ͨ�����ò���������Ч��ͬ����ַ������һ���ģ����õ��﷨�������

	system("pause");
	return 0;
}