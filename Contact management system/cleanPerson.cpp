#include"cleanPerson.h"

//���������ϵ�˺���
void cleanPerson(struct Addressbook * p)
{
	int sel;

	cout << "�Ƿ�ȷ�������ϵ�ˣ�" << endl;
	cout << "1 --- ��" << endl;
	cout << "2 --- ��" << endl;

SEL:

	cin >> sel;

	if (sel == 1)
	{
		p->m_Size = 0;
		cout << "ͨѶ¼�����" << endl; //����ǰ��¼��ϵ����������Ϊ�㣬���߼���ղ���
	}
	else if (sel == 2)
	{
		system("cls");
		return;
	}
	else
	{
		cout << "������������������" << endl;
		goto SEL;
	}
	system("pause");
	system("cls");
}