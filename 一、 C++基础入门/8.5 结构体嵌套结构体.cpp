#include<iostream>
#include<string>
using namespace std;

//�ṹ��Ƕ�׽ṹ������: �ṹ���еĳ�Ա��������һ���ṹ��
//����; ÿ����ʦ����һ��ѧ����һ����ʦ�Ľṹ���У���¼һ��ѧ���Ľṹ��

//����ѧ���ṹ��
struct Student
{
	string name; //ѧ������
	int age; //ѧ������
	int score; //ѧ������
};

//�����ʦ�ṹ��
struct Teacher
{
	int id; //��ʦ���
	string name; //��ʦ����
	int age; //��ʦ����
	struct Student stu; //������ѧ��
};

int main85() {

	//������ʦ
	Teacher t = { 10000,"����",50,{"С��",20,80} };

	cout << "  ��ʦ����:  " << t.name
		 << "  ��ʦ���:  " << t.id
		 << "  ��ʦ���䣺 " << t.age
		 << "\n  ��ʦ������ѧ������: " << t.stu.name
		 << "  ѧ������: " << t.stu.age
		 << "  ѧ������: " << t.stu.score << endl;

	//�ܽ�: �ڽṹ���п��Զ�����һ���ṹ����Ϊ��Ա,�������ʵ������

	system("pause");

	return 0;
}