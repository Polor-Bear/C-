#include "Boss.h"

//�ϰ幹�캯��
Boss::Boss(int Id, string name, int DeptId)
{
	this->m_Id = Id;
	this->m_Name = name;
	this->m_DeptId = DeptId;
}

//չʾְ����Ϣ
void Boss::ShowInfo()
{
	cout << "ְ����ţ� " << this->m_Id
		<< "\tְ�������� " << this->m_Name
		<< "\t��λ�� " << "�ܲ�"
		<< "\t��λְ�� ����˾��������" << endl;
}