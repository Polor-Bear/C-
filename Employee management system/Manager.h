#pragma once
#include<iostream>
#include<string>
#include"Worker.h"
using namespace std;

//������
class Manager :public Worker
{
public:

	//���캯��
	Manager(int Id, string name, int DeptId);

	//չʾְ����Ϣ
	virtual void ShowInfo();

};