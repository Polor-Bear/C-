#include<iostream>
using namespace std;

int main22() {

//���ͣ�	short	(2)		int		(4)		long	(4)		long long	(8)
//���ã�	��������sizeof�ؼ��ֿ���ͳ������������ռ�ڴ��С
//�﷨��	sizeof(�������� / ������

short num1 = 10;
cout << " short ռ���ڴ�ռ�Ϊ�� " << sizeof(short) << endl;

int num2 = 10;
cout << " int ռ���ڴ�ռ�Ϊ�� " << sizeof(num2) << endl;

long num3 = 10;
cout << " long ռ���ڴ�ռ�Ϊ�� " << sizeof(num3) << endl;

long long num4 = 10;
cout << " long long ռ���ڴ�ռ�Ϊ�� " << sizeof(num4) << endl;

//���ʹ�С�Ƚ�
// short < int <= long <= long long

system("pause");

return 0;
}