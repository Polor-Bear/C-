#pragma once
#include<iostream>
#include<string>
using namespace std;

//ְ���ӿ�
class Worker
{
public:

	//չʾְ����Ϣ
	virtual void ShowInfo() = 0;

	//ְ�����
	int m_Id;
	//ְ������
	string m_Name;
	//���ű��
	int m_DeptId;
};