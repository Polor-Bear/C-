#include "Employee.h"

//��ְͨ�����캯��
Employee::Employee(int Id, string name, int DeptId)
{
	this->m_Id = Id;
	this->m_Name = name;
	this->m_DeptId = DeptId;
}

//չʾְ����Ϣ
void Employee::ShowInfo()
{
	cout << "ְ����ţ� " << this->m_Id
		 << "\tְ�������� " << this->m_Name
		 << "\t��λ�� " << "Ա��"
		 << "\t��λְ�� ��ɾ�����������" << endl;
}