#include"findPerson.h"

//�������ָ����ϵ����Ϣ�ĺ���
void findPerson(struct Addressbook * p)
{
	cout << "������Ҫ���ҵ���ϵ��: " << endl;
	string name;
	cin >> name;

	//ret == -1  δ�鵽
	//ret != -1  �鵽��
	int ret = isExist(p, name);

	if (ret != -1)
	{
		cout << "����:  " << p->personArray[ret].m_Name << "\t";
		cout << "�Ա�:  " << (p->personArray[ret].m_Sex == 1 ? "��" : "Ů") << "\t";
		cout << "����:  " << p->personArray[ret].m_Age << "\t";
		cout << "�绰:  " << p->personArray[ret].m_Phone << "\t";
		cout << "סַ:  " << p->personArray[ret].m_Address << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}

	//��������������Ļ��������һ��
	system("pause");
	system("cls");
}