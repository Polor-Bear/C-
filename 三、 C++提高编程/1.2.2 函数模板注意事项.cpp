//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
////����ģ���ע������
//
//template<class T> //typename�����滻��class
//
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
////1���Զ������Ƶ��������Ƶ���һ�µ���������T�ſ���ʹ��
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//
//	//mySwap(a, b); //��ȷ��
//	//mySwap(a, c); //�����Ƶ���T���������Ͳ�һ��
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}
//
////2��ģ�����Ҫȷ����T���������ͣ��ſ���ʹ��
//template<class T>
//void func()
//{
//	cout << "func ����" << endl;
//}
//
//void test02()
//{
//	//func(); //����ģ�岻�ܶ���ʹ�ã�����ȷ����T������
//	func<int>(); //������ʾָ�����͵ķ�ʽ����Tһ�����ͣ��ſ���ʹ�ø�ģ��
//}
//
//int main() {
//
//	//test01();
//	test02();
//
//	//�ܽ᣺ʹ��ģ��ʱ����ȷ����ͨ����������T�������ܹ��Ƶ���һ�µ�����
//
//	system("pause");
//	return 0;
//}