#include"head.h"

//��������ע������
//1��������Ϊ��������
void func(int & a) {
	cout << "func1(int & a)�ĵ���" << endl;
}

void func(const int & a) {
	cout << "func1(const int & a)�ĵ���" << endl;
}

//2������������������Ĭ�ϲ���
void func2(int a,int b =10) {
	cout << "func2(int a, int b = 10)�ĵ���" << endl;
}

void func2(int a) {
	cout << "func2(int a)�ĵ���" << endl;
}

int main332() {

	int a = 10;
	func(a); //������const
	func(10); //������const

	//func2(10); //����Ĭ�ϲ����������壬��������(���ú������ؼ���ʱ��������Ҫʹ��Ĭ�ϲ���)

	system("pause");
	return 0;
}