//��������: ѧУ������������Ŀ��ÿ����ʦ����5��ѧ�����ܹ���3����ʦ
			//��������:
					//���ѧ������ʦ�Ľṹ�壬��������ʦ�Ľṹ���У�����ʦ������һ�����5��ѧ����������Ϊ��Ա
					//ѧ���ĳ�Ա�����������Է���������������������ʦ��ͨ��������ÿ����ʦ��������ѧ����ֵ
					//���մ�ӡ����ʦ�����Լ���ʦ������ѧ������

#include<iostream>
#include<string>
#include<Ctime>
using namespace std;

//����ѧ���ṹ
struct Student
{
	string sName;
	int score;
};

//������ʦ�ṹ��
struct Teacher
{
	string tName;
	Student sArray[5];
};

//����ʦ��ѧ����ֵ�ĺ���
void allocatespace(struct Teacher tArray[], int len)
{
	
	string nameSeed = "ABCDE";
	//����ʦ��ʼ��ֵ
	for (int i = 0; i < len; i++)
	{
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameSeed[i];

		//ͨ��ѭ����ÿ����ʦ������ѧ����ֵ
		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].sName = "Student_";
			tArray[i].sArray[j].sName += nameSeed[j];

			int random = rand() % 101; // 0~100
			tArray[i].sArray[j].score = random;
		}
	}
}

//��ӡ������Ϣ
void printInfo(struct Teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "��ʦ����: " << tArray[i].tName << endl;

		for (int j = 0; j < 5; j++)
		{

			cout << "\tѧ������: " << tArray[i].sArray[j].sName <<
				"  ѧ������: " << tArray[i].sArray[j].score << endl;
		}
	}
}

int main51() {

	//���һ��: �������������
	srand((unsigned int)time(NULL));

	//����3����ʦ������
	Teacher tArray[3];
	int len = sizeof(tArray) / sizeof(tArray[0]);

	//ͨ��������3����ʦ����Ϣ��ֵ,������ʦ����ѧ����Ϣ��ֵ
	allocatespace(tArray, len);

	//��ӡ������ʦ��������ѧ����Ϣ
	printInfo(tArray, len);

	system("pause");

	return 0;
}