//#include"head.h"
//
////C++�п������캯������ʱ��ͨ�����������
//
//class Person
//{
//public:
//	//���캯��
//	Person() {
//		m_Age = 0;
//		cout << "�޲ι��캯����" << endl;
//	}
//	Person(int age) {
//		m_Age = age;
//		cout << "�вι��캯����" << endl;
//	}
//	Person(const Person &t) {
//		cout << "�������캯����" << endl;
//		m_Age = t.m_Age;
//	}
//	//��������
//	~Person() {
//		cout << "����������" << endl;
//	}
//private:
//	int m_Age;
//};
//
////1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//void test01() {
//	Person p1(20);
//	Person p2(p1); //���ÿ������캯��
//	Person p3 = p1; //���ÿ������캯��
//
//	Person p4;
//	p4 = p1; //���ǵ��ÿ������캯��������һ����ֵ����
//}
//
////2��ֵ���ݵķ�ʽ������������ֵ
//void doWork1(Person p1){ } //�൱��	t423 t1 = t;
//void test02() {
//	Person p;
//	doWork1(p);
//}
//
////3����ֵ��ʽ���ؾֲ�����
//Person doWork2() {
//	Person p1;
//	cout << (int*)&p1 << endl;
//	return p1;
//}
//void test03() {
//	Person p(doWork2());
//	cout << (int*)&p << endl;
//}
//
//int main() {
//
//	//test01();
//	//test02();
//	test03();
//
//	system("pause");
//	return 0;
//}