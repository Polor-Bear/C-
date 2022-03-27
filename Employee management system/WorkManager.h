#pragma once
#include<iostream>
#include<string>
#include"Employee.h"
#include"Manager.h"
#include"Boss.h"
#include<fstream>
#define FILENAME "EmpFile.txt"
using namespace std;

class Workermanager
{
public:

	//���캯��
	Workermanager();

	//չʾ�˵�
	void ShowMenu();

	//�˳�ϵͳ
	void ExitSystem();

	//��¼�ļ��е���������
	int m_EmpNum;

	//��¼Ա�������ָ��
	Worker** m_EmpArray;

	//���ְ��
	void Add_Emp();

	//�����ļ�
	void Save();

	//�ж��ļ��Ƿ�Ϊ�յı�־
	bool m_FileIsEmpty;

	//ͳ������
	int get_EmpNum();

	//��ʼ��Ա��
	void init_Emp();

	//��ʾְ��
	void Show_Emp();

	//ɾ��ְ��
	void Del_Emp();

	//����ְ������жϸ�ְ���Ƿ���ڣ������ڷ���ְ���������е�λ�ã������ڷ���-1
	int IsExist(int id);

	//�޸�ְ��
	void Mod_Emp();

	//����ְ��
	void Find_Emp();

	//����ְ��
	void Sort_Emp();

	//����ļ�
	void Clean_Emp();

	//��������
	~Workermanager();
};