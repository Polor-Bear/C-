//#include"head.h"
//
//class Person
//{
//public:
//	//���캯��
//	Person(int age =10,int height = 160) {
//		m_Age = age;
//		m_Height = new int(height);
//		cout << "�вι��캯����" << endl;
//	}
//	//�Լ�ʵ�ֿ������캯�������ǳ��������������
//	Person(const Person &p) {
//		m_Age = p.m_Age;
//		//m_Height = p.m_Height; //������Ĭ��ʵ�־������д���	����ǳ����
//		//�������	�ڶ������¿���һ���ڴ���տ���������
//		m_Height = new int(*p.m_Height);
//		cout << "�������캯����" << endl;
//	}
//
//	//��������
//	~Person() {
//		//�������룬���������ٵ��������ͷŲ���
//		if (m_Height != NULL) {
//			delete m_Height;
//			m_Height = NULL;
//		}
//		cout << "����������" << endl;
//	}
//public:
//	int m_Age;
//	int * m_Height;
//};
//
//void test01() {
//	Person p1(18,180);
//	cout << "p1������Ϊ: " << p1.m_Age << "  ���Ϊ: " << *p1.m_Height << endl;
//	Person p2(p1);
//	cout << "p2������Ϊ: " << p2.m_Age << "  ���Ϊ: " << *p2.m_Height << endl;
//}
//
//int main() {
//
//	test01();
//
//	//�ܽ᣺����������ڶ������ٵģ�һ��Ҫ�Լ��ṩ�������캯������ֹǳ��������������
//
//	system("pause");
//	return 0;
//}