#include<iostream>
#include<string>
using namespace std;

//����: ���ṹ����Ϊ���������д���

//����ѧ���ṹ��
struct Student
{
	string name; //ѧ������
	int age; //ѧ������
	int score; //ѧ������
};

//���ݷ�ʽ������
//1��ֵ����:
void PrintStudent1(struct Student a)
{
	a.age = 100;
	cout << "�Ӻ���1�д�ӡ ����: " << a.name << " ����: " << a.age << " ����: " << a.score << endl;
}

//2����ַ����:
void PrintStudent2(struct Student * p)
{
	p->age = 200;
	cout << "�Ӻ���2�д�ӡ ����: " << p->name << " ����: " << p->age << " ����: " << p->score << endl;
}

int main86() {

	//��ѧ�����뵽һ��������,��ӡѧ�����ϵ�������Ϣ

	//�����ṹ�����
	Student stu = { "����",20,85 };

	PrintStudent1(stu);
	PrintStudent2(&stu);
	cout << "main�����д�ӡ ����: " << stu.name << "  ����: " << stu.age << "  ����: " << stu.score << endl;

	//�ܽ�: ��������޸��������е����ݣ�����ֵ���ݣ���֮���õ�ַ����(��һ�»�ѧ����Ҳ����ʹ��const���ε�ַ���ݣ�

	system("pause");

	return 0;
}