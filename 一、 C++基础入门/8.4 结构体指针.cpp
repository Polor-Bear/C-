#include<iostream>
#include<string>
using namespace std;

//�ṹ��ָ������:ͨ��ָ����ʽṹ���еĳ�Ա
//���ò�����->����ͨ���ṹ��ָ����ʽṹ������

//1������ṹ��
struct Student
{
	string name; //ѧ������
	int age; //ѧ������
	int score; //ѧ������
};

int main84() {

	//2�������ṹ�����

	Student stuArray[] =
	{
		{"����",18,100},
		{"����",19,80}
	};

	//3��ͨ��ָ��ָ��ṹ�����

	Student * p = stuArray;

	//4��ͨ��ָ����ʽṹ������е����ݰ�

	cout << p->name << ": " << "  ����: " << p->age << "  ����: " << p->score << endl; //ͨ���ṹ��ָ��,���ʽṹ���е����ԣ���Ҫ���ò����� "->"
	p++;
	cout << (*p).name << ": " << "  ����: " << (*p).age << "  ����: " << (*p).score << endl; // p-> ���ڣ�*p).

	system("pause");

	return 0;
}