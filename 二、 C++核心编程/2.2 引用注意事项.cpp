#include"head.h"

int main22() {

	int a = 10;
	int b = 20;
	//int &c; //�������ñ����ʼ��
	int &c = a; //һ����ʼ���󣬾Ͳ��������޸�
	c = b; //���Ǹ�ֵ���������Ǹ�������

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	system("pause");
	return 0;
}