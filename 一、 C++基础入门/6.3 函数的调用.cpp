#include<iostream>
using namespace std;

//����ӷ�����
//���������ʱ��num1��num2��û����ʵ�����ݣ���ֻ��һ����ʽ�ϵĲ���������β�
int add(int num1, int num2)//���β��б�
{
	int sum = num1 + num2;
	return sum;
}

int main63() {
	//�����ĵ��ã� ʹ�ö���õĺ���
	//�﷨�� ��������������
	//a��b��֮Ϊ ʵ�ʲ��������ʵ��
	//�����ú���ʱ��ʵ�ε�ֵ�ᴫ�ݸ��β�
	//main�����е���add����

	int a = 10;
	int b = 20;
	int c = add(a, b);

	cout << "a + b = " << c << endl;

	a = 100;
	b = 500;
	c = add(a, b);

	cout << "a + b = " << c << endl;

	system("pause");

	return 0;
}