#pragma once
#include<iostream>
#include<string>
#include"Worker.h"
using namespace std;

//��ְͨ����
class Employee :public Worker
{
public:

	//���캯��
	Employee(int Id, string name, int DeptId);

	//չʾְ����Ϣ
	virtual void ShowInfo();

};