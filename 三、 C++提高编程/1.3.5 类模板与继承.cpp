//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
////��ģ����̳�
//template<class T>
//class Base
//{
//	T m;
//};
//
////class Son :public Base //���󣬱���Ҫ֪��������T�����ͣ����ܼ̳и�����
//class Son :public Base<int>
//{
//
//};
//
//void test01()
//{
//	Son s1;
//}
//
////��������ָ��������T�����ͣ�����Ҳ��Ҫ��Ϊ��ģ��
//template<class T1, class T2>
//class Son2 :public Base<T1>
//{
//public:
//
//	Son2()
//	{
//		cout << "T1������Ϊ�� " << typeid(T1).name() << endl;
//		cout << "T2������Ϊ�� " << typeid(T2).name() << endl;
//	}
//
//	T2 obj;
//};
//
//void test02()
//{
//	Son2<int, char>s2;
//}
//
//int main() {
//
//	//test01();
//	test02();
//
//	//�ܽ᣺�����������ģ�壬������Ҫָ����������T����������
//
//	system("pause");
//	return 0;
//}