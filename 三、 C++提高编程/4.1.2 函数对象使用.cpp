//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
////��������ʹ�� (�º���)
//class MyAdd
//{
//public:
//	int operator()(int v1, int v2)
//	{
//		return v1 + v2;
//	}
//};
//
////1������������ʹ��ʱ����������ͨ�����������ã������в����������з���ֵ
//void test01()
//{
//	MyAdd myAdd;
//	cout << myAdd(10, 20) << endl;
//}
//
////2���������󳬳���ͨ�����ĸ����������������Լ���״̬
//class MyPrint
//{
//public:
//	MyPrint() :count(0) {}
//
//	void operator()(const string& test)
//	{
//		cout << test << endl;
//
//		++this->count;
//	}
//
//	int count; //�ڲ��Լ���״̬
//};
//
//void test02()
//{
//	MyPrint myPrint;
//
//	myPrint("Hello World");
//	myPrint("Hello World");
//	myPrint("Hello World");
//	myPrint("Hello World");
//
//	cout << "myPrint���ô���Ϊ�� " << myPrint.count << endl;
//}
//
////3���������������Ϊ��������
//void doPrint(MyPrint& mp, string test)
//{
//	mp(test);
//}
//
//void test03()
//{
//	MyPrint myPrint;
//
//	doPrint(myPrint, "Hello c++");
//}
//
//int main() {
//
//	//test01();
//	//test02();
//	test03();
//
//	//�ܽ᣺�º���д���ǳ���������Ϊ�������д���
//
//	system("pause");
//	return 0;
//}