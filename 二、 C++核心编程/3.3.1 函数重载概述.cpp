#include"head.h"

//�������ص�����: ������������ͬ����ߺ���������

//�������ص���������:
//1��ͬһ����������
//2������������ͬ
//3�������������Ͳ�ͬ�����߸�����ͬ������˳��ͬ (������ֻҪ�������֣�û�ж����ԾͿ���)
void func() {
	cout << "func()�ĵ���" << endl;
}

void func(int a) {
	cout << "func(int a)�ĵ���" << endl;
}

void func(int a, int b) {
	cout << "func(int a, int b)�ĵ���" << endl;
}

void func(double a) {
	cout << "func(double a)�ĵ���" << endl;
}

void func(int, double) {
	cout << "func(int, double)�ĵ���" << endl;
}

void func(double, int) {
	cout << "func(double, int)�ĵ���" << endl;
}

//ע������: ��������ֵ��������Ϊ�������ص�����
//int func(double, int) { //����: �޷����ؽ�������ֵ�������ֵĺ���
//	cout << "func(double, int)�ĵ���" << endl;
//}

//����44��45��48��50�д��붼���Ե��øú������ں�������ʱ�������壬���Ժ���������ռλ������Ĭ��ֵʱ����������Ϊ�������ص�����
//void func(int a = 10, double = 3.14, int =20) {
//	cout << "func(int a = 10, double = 3.14, int =20)�ĵ���" << endl; 
//}

int main331() {

	func();
	func(10);
	func(10, 20);
	func(3.14);
	func(10, 3.14);
	func(3.14,10);
	//func(1, 1.5, 2);

	system("pause");
	return 0;
}