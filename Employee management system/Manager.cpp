#include "Manager.h"

//���캯��
Manager::Manager(int Id, string name, int DeptId)
{
	this->m_Id = Id;
	this->m_Name = name;
	this->m_DeptId = DeptId;
}

//չʾְ����Ϣ
void Manager::ShowInfo()
{
	cout << "ְ����ţ� " << this->m_Id
		<< "\tְ�������� " << this->m_Name
		<< "\t��λ�� " << "����"
		<< "\t��λְ�� ����ϰ彻�������񣬲��·������Ա��" << endl;
}