#pragma once
#include<iostream>
using namespace std;
#define MAX 1000 //�涨�������
#include"person.h"

//����ͨѶ¼�ṹ��
struct Addressbook
{
	struct Person personArray[MAX]; //ͨѶ¼����ϵ�˸���
	int m_Size; //ͨѶ¼�г�Ա����
};