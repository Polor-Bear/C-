//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
////������
//class Animal
//{
//public:
//	int m_Age;
//};
//
////������̳У�������μ̳е�����
////�̳�֮ǰ���Ϲؼ��� virtual ��Ϊ��̳�
////��̳к� Animal���Ϊ�����
////����
//class Sheep :virtual public Animal {};
//
////����
//class Tuo :virtual public Animal {};
//
////������
//class SheepTuo :public Sheep, public Tuo {};
//
//void test01()
//{
//	SheepTuo st;
//
//	st.Sheep::m_Age = 18;
//	st.Tuo::m_Age = 28;
//
//	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
//	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
//	cout << "st.m_Age = " << st.m_Age << endl;
//}
//
//int main() {
//
//	test01();
//
//	//�ܽ᣺
//	//���μ̳д�������Ҫ����������̳�������ͬ�����ݣ�������Դ�˷��Լ���������
//	//������̳п��Խ�����μ̳�����
//
//	system("pause");
//	return 0;
//}