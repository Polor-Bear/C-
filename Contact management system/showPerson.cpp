#include"showPerson.h"

//������ʾ��ϵ�˺���
void showPerson(struct Addressbook * p)
{
	//�ж�ͨѶ¼�������Ƿ�Ϊ0,���Ϊ0����ʾ��¼Ϊ��
	if (p->m_Size == 0)
	{
		cout << "��ǰ��ϵ��Ϊ�գ��������ϵ�˺��ٽ��з���" << endl;
	}
	else
	{
		for (int i = 0; i < p->m_Size; i++)
		{
			cout << "����:  " << p->personArray[i].m_Name << "\t";
			cout << "�Ա�:  " << (p->personArray[i].m_Sex == 1 ? "��" : "Ů") << "\t";
			cout << "����:  " << p->personArray[i].m_Age << "\t";
			cout << "�绰:  " << p->personArray[i].m_Phone << "\t";
			cout << "סַ:  " << p->personArray[i].m_Address << endl;
		}
	}

	//��������������Ļ��������һ��
	system("pause");
	system("cls");
}