#include<iostream>
#include<string>
using namespace std;

//�ṹ����������:���Զ���Ľṹ����뵽�����з���ά��
//�﷨;struct �ṹ���� ������[Ԫ�ظ���] = { {},{},...{} }

//1������ṹ��
struct Student
{
	string name; //ѧ������
	int age; //ѧ������
	int score; //ѧ������
};

int main83() {

	//2�������ṹ������
	Student stuArray[] =
	{ 
		{"����",18,100},
		{"����",19,80},
		{"����",20,60} 
	};

	//3�����ṹ�������е�Ԫ�ظ�ֵ
	stuArray[2] = { "����",80,60 };
	//stuArray[2].name = "����";
	//stuArray[2].age = 80;
	//stuArray[2].score = 60;

	//4�������ṹ������

	for (int i = 0; i < sizeof(stuArray) / sizeof(stuArray[0]); i++)
	{
		cout <<  stuArray[i].name << ": " << "  ����: " << stuArray[i].age << "  ����: " << stuArray[i].score << endl;
	}

	system("pause");

	return 0;
}