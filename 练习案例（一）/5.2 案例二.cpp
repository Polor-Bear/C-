//��������: ���һ��Ӣ�۵Ľṹ�壬������Ա���������䣬�Ա�;
			//�����ṹ�����飬�����д��5��Ӣ�ۣ�ͨ��ð��������㷨
			//�������е�Ӣ�۰���������������������մ�ӡ�����Ľ����

//����Ӣ����Ϣ����:

	//{"����",23,"��"},
	//{"����",22,"��"},
	//{"�ŷ�",20,"��"},
	//{"����",21,"��"},
	//{"����",19,"Ů"},

#include<iostream>
#include<string>
using namespace std;

struct Hero
{
	string name;
	int age;
	string gender;
};

//����ð��������
void bubbleSort(struct Hero * heroArray, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (heroArray[j].age > heroArray[j + 1].age)
			{
				struct Hero temp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = temp;
			}
		}
	}
}

//�����ӡ���麯��
void printHero(struct Hero * heroArray, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "Ӣ������: " << heroArray[i].name << "  ����: " << heroArray[i].age << "  �Ա�: " << heroArray[i].gender << endl;
	}
}

int main52() {

	Hero heroArray[5] =
	{
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"},
	};
	int len = sizeof(heroArray) / sizeof(heroArray[0]); //����Ӣ�۽ṹ�����鳤��

	//���ú����������е�Ӣ�۰������������������
	bubbleSort(heroArray, len);

	//��ӡ�����Ľ��
	printHero(heroArray, len);

	system("pause");

	return 0;
}