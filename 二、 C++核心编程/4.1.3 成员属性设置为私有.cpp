//#include"head.h"
//
////��Ա��������Ϊ˽��
//
////�ŵ�1: �����г�Ա��������Ϊ˽�У������Լ����ƶ�дȨ��
////�ŵ�2: ����дȨ�ޣ����ǿ��Լ�����ݵ���Ч��
//
////�������
//class Person
//{
//private:
//	string m_Name; //����	�ɶ���д
//	int m_Age; //����	ֻ��
//	string m_Lover; //����	ֻд
//public:
//	//�������ÿɶ���д
//	void setName(string name) {
//		m_Name = name;
//	}
//	string getName() {
//		return m_Name;
//	}
//
//	//��������
//	void setAge(int age) {
//		if (age < 1 || age > 150) {
//			age = 1;
//			cout << "���������" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//
//	//��ȡ����
//	int getAge() {
//		return m_Age;
//	}
//
//	//��������Ϊֻд
//	void setLover(string lover) {
//		m_Lover = lover;
//	}
//};
//
//int main() {
//
//	Person p;
//	//��������
//	p.setName("������");
//	cout << "����: " << p.getName() << endl;
//
//	//��������
//	p.setAge(50);
//	cout << "����: " << p.getAge() << endl;
//
//	//��������
//	p.setLover("��а");
//	//cout << "���ˣ� " << p.m_Lover << endl;  //ֻд���ԣ������Զ�ȡ6
//
//	system("pause");
//	return 0;
//}