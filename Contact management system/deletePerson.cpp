#include"deletePerson.h"

//����ɾ����ϵ�˺���
void deletePerson(struct Addressbook * p)
{
	cout << "������Ҫɾ������ϵ��: " << endl;
	string name;
	cin >> name;

	//ret == -1  δ�鵽
	//ret != -1  �鵽��
	int ret = isExist(p, name);

	if (ret != -1)
	{
		//�����ҵ�����ϵ�ˣ�����ɾ������
		for (int i = ret; i < p->m_Size; i++)
		{
			//����ǰ�ƣ�����Ҫɾ������ϵ��
			p->personArray[i] = p->personArray[i + 1];
		}
		cout << "ɾ���ɹ�!" << endl;
		p->m_Size--; //ɾ�������ͨѶ¼����Ա����
	}
	else
	{
		cout << "���޴���" << endl;
	}

	//��������������Ļ��������һ��
	system("pause");
	system("cls");
}