//#define _CRTSECURE_NO_WARINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
////��ӡ�����
//class MyPrint
//{
//public:
//	//���غ������������
//	void operator()(string test)
//	{
//		cout << test << endl;
//	}
//
//	//������������Է�����������
//	void operator()(int test)
//	{
//		cout << test << endl;
//	}
//};
//
//void MyPrint02(string test)
//{
//	cout << test << endl;
//}
//
////�º����ǳ�����û��һ���̶���д��
////�ӷ���
//class MyAdd
//{
//public:
//	int operator()(int a, int b)
//	{
//		return a + b;
//	}
//};
//
//void test01()
//{
//	MyPrint myprint;
//
//	myprint("Hello Bug!"); //��Ϊʹ�������ǳ������ں������ã���˱���Ϊ�º���
//
//	MyPrint02("Hello Bug!");
//
//	myprint(100);
//}
//
//void test02()
//{
//	MyAdd myadd;
//
//	int ret = myadd(100, 50);
//
//	cout << "ret = " << ret << endl;
//
//	//������������
//	//MyAdd()	������������
//	cout << "MyAdd()(30,40) = " << MyAdd()(30, 40) << endl;
//}
//
//int main()
//{
//
//	test01();
//
//	system("pause");
//	return 0;
//}