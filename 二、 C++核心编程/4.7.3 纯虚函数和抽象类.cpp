//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
////���麯���ͳ�����
//class Base
//{
//public:
//	//���麯��
//	//ֻҪ��һ�����麯��������౻��Ϊ������
//	//�������ص㣺
//	//1���޷�ʵ��������
//	//2�������������,Ҳ������д�����еĴ��麯��������Ҳ���ڴ��麯��
//	virtual void func() = 0;
//};
//
//class Son :public Base
//{
//public:
//	void func()
//	{
//		cout << "func����" << endl;
//	}
//};
//
//void test01()
//{
//	//Base b;  //�������޷�ʵ��������
//	//new Base;//�������޷�ʵ��������
//
//	Son a; //���������д�����еĴ��麯���������޷�ʵ��������
//
//	Base* base = new Son;
//
//	base->func();
//	delete base; //�������ݼǵ��ֶ�����
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}