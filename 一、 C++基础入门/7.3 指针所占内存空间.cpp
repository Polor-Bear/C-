#include<iostream>
using namespace std;

int main73() {
	//ָ����ռ�ڴ�ռ�
	int a = 0;
	int * p = &a;

	//��32λ����ϵͳ�£�ָ����ռ4���ֽڿռ��С��������ʲô�������͡�
	//��64λ����ϵͳ�£�ָ����ռ8���ֽڿռ��С��
	cout << "sizeof (int *) = " << sizeof(int *) << endl;
	cout << "sizeof (float *) = " << sizeof(float *) << endl;
	cout << "sizeof (double *) = " << sizeof(double *) << endl;
	cout << "sizeof (char *) = " << sizeof(char *) << endl;

	system("pause");

	return 0;
}