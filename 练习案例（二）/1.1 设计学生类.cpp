#include"heah.h"

//��������: ���һ��ѧ���࣬������������ѧ��
//���Ը�������ѧ�Ÿ�ֵ��������ʾ������ѧ��

//���ѧ����
class Student
{
public:	//����Ȩ��

	//���е����Ժ���Ϊ ����ͳһ��Ϊ ��Ա
	//���� �ֳ�Ϊ ��Ա���� ��Ա����
	//��Ϊ �ֳ�Ϊ ��Ա���� ��Ա����
	//����
	string m_Name; //����
	int m_Id; //ѧ��

	//��Ϊ
	//��������ֵ
	void setName(string name) {
		m_Name = name;
	}

	//��ѧ�Ÿ�ֵ
	void setId(int id) {
		m_Id = id;
	}

	//��ʾ������ѧ��
	void showStudent() {
		cout << "����: " << m_Name << "	ѧ��: " << m_Id << endl;
	}
};

int main11() {

	//����һ������ѧ��	ʵ��������
	Student s1;

	//��s1����������Ը�ֵ����
	s1.setName("����");
	s1.setId(1);
	//��ʾѧ����Ϣ
	s1.showStudent();

	Student s2;
	s2.setName("����");
	s2.setId(2);
	s2.showStudent();

	system("pause");
	return 0;
}