#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include"WorkManager.h"
using namespace std;

void test01()
{
	Workermanager wm;

	int choice = 0;

	while (true)
	{
		wm.ShowMenu();

		cout << "����������ѡ�� " << endl;
		cin >> choice;

		switch (choice)
		{
		case 0:  //�˳�ϵͳ
			wm.ExitSystem();
			break;
		case 1:  //���ְ��
			wm.Add_Emp();
			break;
		case 2:  //��ʾְ��
			wm.Show_Emp();
			system("pause");
			system("cls");
			break;
		case 3:  //ɾ��ְ��
			wm.Del_Emp();
			break;
		case 4:  //�޸�ְ��
			wm.Mod_Emp();
			break;
		case 5:  //����ְ��
			wm.Find_Emp();
			break;
		case 6:  //����ְ��
			wm.Sort_Emp();
			break;
		case 7:  //����ĵ�
			wm.Clean_Emp();
			break;
		default:
			break;
		}
	}
}

//���Դ���
void test02()
{

	Worker* worker = NULL;
	worker = new Employee(1, "����", 1);
	worker->ShowInfo();
	delete worker;

	worker = new Manager(2, "����", 2);
	worker->ShowInfo();
	delete worker;

	worker = new Boss(3, "����", 3);
	worker->ShowInfo();
	delete worker;
}

int main() {

	test01();

	//test02();

	system("pause");
	return 0;
}