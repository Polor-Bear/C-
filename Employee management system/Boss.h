#pragma once
#include<iostream>
#include<string>
#include"Worker.h"
using namespace std;

//�ϰ���
class Boss :public Worker
{
public:

	//���캯��
	Boss(int Id, string name, int DeptId);

	//չʾְ����Ϣ
	virtual void ShowInfo();

};