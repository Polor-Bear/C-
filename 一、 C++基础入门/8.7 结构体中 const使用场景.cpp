#include<iostream>
#include<string>
using namespace std;

//����:��const����ֹ�����

//����ѧ���ṹ��
struct Student
{
	string name; //ѧ������
	int age; //ѧ������
	int score; //ѧ������
};

 //�������е��βθ�Ϊָ�룬���Խ�ʡ�ڴ�ռ�,���Ҳ��Ḵ���µĸ�������
void PrintStudent(Student const * p)
{
	//p->age = 150; //����const֮��һ�����޸ĵĲ����ͻᱨ�����Է�ֹ���ǵ������
	cout << "����: " << p->name << "  ����: " << p->age << "  ����: " << p-> score << endl;
}

int main87() {

	//�����ṹ�����
	Student s = { "����",15,70 };

	//ͨ��������ӡ�ṹ�������Ϣ
	PrintStudent(&s);

	cout << "����������������Ϊ: " << s.age << endl;

	system("pause");

	return 0;
}