//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
////��̬��������������Ʒ
//class AbstractDrinking
//{
//public:
//
//	//��ˮ
//	virtual void boil() = 0;
//
//	//����
//	virtual void brew() = 0;
//
//	//���뱭��
//	virtual void PourInCup() = 0;
//
//	//���븨��
//	virtual void PutSomething() = 0;
//
//	void MakeDrink()
//	{
//		boil();
//		brew();
//		PourInCup();
//		PutSomething();
//	}
//};
//
////��������
//class Coffee :public AbstractDrinking
//{
//public:
//
//	//��ˮ
//	virtual void boil()
//	{
//		cout << "��ũ��ɽȪ" << endl;
//	}
//
//	//����
//	virtual void brew()
//	{
//		cout << "���ݿ���" << endl;
//	}
//
//	//���뱭��
//	virtual void PourInCup()
//	{
//		cout << "���뱭��" << endl;
//	}
//
//	//���븨��
//	virtual void PutSomething()
//	{
//		cout << "�����Ǻ�ţ��" << endl;
//	}
//};
//
////������Ҷ
//class Tea :public AbstractDrinking
//{
//public:
//
//	//��ˮ
//	virtual void boil()
//	{
//		cout << "���Ȫˮ" << endl;
//	}
//
//	//����
//	virtual void brew()
//	{
//		cout << "���ݲ�Ҷ" << endl;
//	}
//
//	//���뱭��
//	virtual void PourInCup()
//	{
//		cout << "���뱭��" << endl;
//	}
//
//	//���븨��
//	virtual void PutSomething()
//	{
//		cout << "��������" << endl;
//	}
//};
//
//void DoWork(AbstractDrinking* abs)
//{
//	abs->MakeDrink();
//	delete abs;
//}
//
//void test01()
//{
//	cout << "��������: " << endl;
//	DoWork(new Coffee);
//
//	cout << "----------------------" << endl;
//	cout << "������Ҷ: " << endl;
//	DoWork(new Tea);
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}