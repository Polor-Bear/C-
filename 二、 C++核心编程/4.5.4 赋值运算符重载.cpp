//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Person
//{
//public:
//	Person(int age)
//	{
//		m_Age = new int(age);
//	}
//
//	~Person()
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//	}
//
//	//���ظ�ֵ�����
//	Person& operator=(Person &p)
//	{
//		//�������ṩǳ����
//		//this->m_Age = p.m_Age;
//
//		//Ӧ�����ж��Ƿ��������ڶ�������������ͷŸɾ���Ȼ�������
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//
//		//���
//		this->m_Age = new int(*p.m_Age);
//
//		//���ض�����
//		return *this;
//	}
//
//	int getAge()
//	{
//		
//		return *this->m_Age;
//	}
//
//private:
//	int* m_Age;
//};
//
//void test01()
//{
//	Person p1(18);
//	Person p2(20);
//	Person p3(10);
//
//	p3 = p2 = p1; //��ֵ����
//
//	cout << "p1������Ϊ: " << p1.getAge() << endl;
//	cout << "p2������Ϊ: " << p2.getAge() << endl;
//	cout << "p3������Ϊ: " << p3.getAge() << endl;
//}
//
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}