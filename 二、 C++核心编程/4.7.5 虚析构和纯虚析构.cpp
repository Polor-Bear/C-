//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
////�������ʹ�������
//
////�������﷨��
//
////virtual ~����() {}
//
//
////���������﷨��
//
////virtual ~����() = 0;
////����::~����() {}
//
//class Animal
//{
//public:
//
//	Animal()
//	{
//		cout << "Animal���캯������" << endl;
//	}
//
//	//���麯��
//	virtual void Speak() = 0;
//
//	//���������������Խ������ָ���ͷ��������ʱ���ɾ������
//	//virtual ~Animal()
//	//{
//	//	cout << "Animal��������������" << endl;
//	//}
//
//	//��������	��Ҫ����Ҳ��Ҫʵ��
//	//���˴�������֮�������Ҳ���ڳ����࣬�޷�ʵ��������
//	virtual ~Animal() = 0;
//};
//
//Animal::~Animal()
//{
//	cout << "Animal����������������" << endl;
//}
//
//class Cat :public Animal
//{
//public:
//
//	Cat(string name)
//	{
//		cout << "Cat���캯������" << endl;
//		m_Name = new string(name);
//	}
//
//	void Speak()
//	{
//		cout << *m_Name << "Сè��˵��" << endl;
//	}
//
//	~Cat()
//	{
//		cout << "Cat������������" << endl;
//		if (m_Name != NULL)
//		{
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//
//	string* m_Name;
//};
//
//void test01()
//{
//	Animal* animal = new Cat("Tom");
//	animal->Speak();
//	//����ָ��������ʱ�������������������������������������ж������ԣ������ڴ�й©
//	delete animal;
//}
//
//int main() {
//
//	test01();
//
//	//�ܽ᣺
//	//1�����������ߴ������������������ͨ������ָ���ͷ��������
//	//2�����������û�ж������ݣ����Բ�д��������������
//	//3��ӵ�д��������ĺ���Ҳ���ڳ�����
//
//	system("pause");
//	return 0;
//}