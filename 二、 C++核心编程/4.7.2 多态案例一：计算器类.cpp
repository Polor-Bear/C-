//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
////������ͨʵ�ּ�����
//class Calculator
//{
//public:
//
//	int getResult(string oper)
//	{
//		if (oper == "+")
//		{
//			return num1 + num2;
//		}
//		else if (oper == "-")
//		{
//			return num1 - num2;
//		}
//		else if (oper == "*")
//		{
//			return num1 * num2;
//		}
//
//		//�������չ�µĹ��ܣ���Ҫ�޸�Դ��
//		//����ʵ�����У��ᳫ ����ԭ��
//		//����ԭ�򣺶���չ���п��ţ����޸Ľ��йر�
//	}
//
//	int num1;
//	int num2;
//};
//
////���ö�̬ʵ�ּ�����
////��̬�ô���
////1����֯�ṹ����
////2���ɶ���ǿ
////3������ǰ�ںͺ��ڵ���չ�Լ�ά���Ը�
//
////ʵ�ּ�����������
//class AbstractCalculator
//{
//public:
//
//	virtual int getResult()
//	{
//		return 0;
//	}
//
//	int num1;
//	int num2;
//};
//
////�ӷ��������
//class AddCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return num1 + num2;
//	}
//};
//
////�����������
//class SubCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return num1 - num2;
//	}
//};
//
////�˷��������
//class MulCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return num1 * num2;
//	}
//};
//
//void test01()
//{
//	Calculator c;
//	
//	c.num1 = 10;
//	c.num2 = 20;
//
//	cout << c.num1 << " + " << c.num2 << " = " << c.getResult("+") << endl;
//	cout << c.num1 << " - " << c.num2 << " = " << c.getResult("-") << endl;
//	cout << c.num1 << " * " << c.num2 << " = " << c.getResult("*") << endl;
//}
//
//void test02()
//{
//	//��̬ʹ������
//	//����ָ���������ָ���������
//
//	//�ӷ�����
//	AbstractCalculator* abs = new AddCalculator;
//	abs->num1 = 50;
//	abs->num2 = 30;
//
//	cout << abs->num1 << " + " << abs->num2 << " = " << abs->getResult() << endl;
//	//�����ǵ�����
//	delete abs;
//
//	//��������
//	abs = new SubCalculator;
//	abs->num1 = 50;
//	abs->num2 = 30;
//
//	cout << abs->num1 << " - " << abs->num2 << " = " << abs->getResult() << endl;
//	delete abs;
//
//	//�˷�����
//	abs = new MulCalculator;
//	abs->num1 = 50;
//	abs->num2 = 30;
//
//	cout << abs->num1 << " * " << abs->num2 << " = " << abs->getResult() << endl;
//	delete abs;
//}
//
//int main() {
//
//	//test01();
//
//	test02();
//
//	//�ܽ᣺C++�����ᳫ���ö�̬��Ƴ���ܹ�����Ϊ��̬�ŵ�ܶ�
//
//	system("pause");
//	return 0;
//}