#include"modifyPerson.h"
#include"isExist.h"

//�����޸���ϵ�˺���
void modifyPerson(struct Addressbook * p)
{
	cout << "������Ҫ�޸ĵ���ϵ��: " << endl;
	string name;
	cin >> name;

	//ret == -1  δ�鵽
	//ret != -1  �鵽��
	int ret = isExist(p, name);

	if (ret != -1)
	{
		//�����ҵ�����ϵ�ˣ������޸Ĳ���
		//����ʾ�û����Ƿ��޸ĸ������ݣ��û�ѡ��ȷ�����޸ģ�������ת����һ������

		int sel;

	SNAME:

		cout << "�Ƿ��޸ĸ���ϵ������" << endl;
		cout << "1 --- ��" << endl;
		cout << "2 --- ��" << endl;

	SNAME1:

		cin >> sel;

		if (sel == 1)
		{
			string name;//����
			cout << "�������µ�����: " << name << endl;
			cin >> name;
			p->personArray[ret].m_Name = name;
		}
		else if (sel == 2)
		{
			goto SSEX;
		}
		else
		{
			cout << "������������������" << endl;
			goto SNAME1;
		}

	SSEX:

		cout << "�Ƿ��޸ĸ���ϵ���Ա�" << endl;
		cout << "1 --- ��" << endl;
		cout << "2 --- ��" << endl;

	SSEX1:

		cin >> sel;

		if (sel == 1)
		{
			int sex = 0;//�Ա�
			cout << "�������µ��Ա�: " << endl;
			cout << "1 --- ��" << endl;
			cout << "2 --- Ů" << endl;

		SEX:

			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				p->personArray[ret].m_Sex = sex;
			}
			else
			{
				cout << "������������������" << endl;
				goto SEX;
			}
		}
		else if (sel == 2)
		{
			goto SAGE;
		}
		else
		{
			cout << "������������������" << endl;
			goto SSEX1;
		}

	SAGE:

		cout << "�Ƿ��޸ĸ���ϵ������" << endl;
		cout << "1 --- ��" << endl;
		cout << "2 --- ��" << endl;

	SAGE1:

		cin >> sel;

		if (sel == 1)
		{
			int age = 0;//����
			cout << "�������µ�����: " << endl;

		AGE:

			cin >> age;
			if (age > 0 && age <= 150)
			{
				p->personArray[ret].m_Age = age;
			}
			else
			{
				cout << "������������������" << endl;
				goto AGE;
			}
		}
		else if (sel == 2)
		{
			goto SPHONE;
		}
		else
		{
			cout << "������������������" << endl;
			goto SAGE1;
		}

	SPHONE:

		cout << "�Ƿ��޸ĸ���ϵ�˵绰" << endl;
		cout << "1 --- ��" << endl;
		cout << "2 --- ��" << endl;

	SPHONE1:

		cin >> sel;

		if (sel == 1)
		{
			string phone;//�绰
			cout << "�������µ���ϵ�绰: " << endl;
			cin >> phone;
			p->personArray[ret].m_Phone = phone;
		}
		else if (sel == 2)
		{
			goto SADDRESS;
		}
		else
		{
			cout << "������������������" << endl;
			goto SPHONE1;
		}

	SADDRESS:
		
		cout << "�Ƿ��޸ĸ���ϵ��סַ" << endl;
		cout << "1 --- ��" << endl;
		cout << "2 --- ��" << endl;

	SADDRESS1:

		cin >> sel;

		if (sel == 1)
		{
			string address;//סַ
			cout << "�������µļ�ͥסַ: " << endl;
			cin >> address;
			p->personArray[ret].m_Address = address;
		}
		else if (sel == 2)
		{
			goto END;
		}
		else
		{
			cout << "������������������" << endl;
			goto SADDRESS1;
		}

	END:

		//��ʾ�û��޸ĳɹ�
		cout << "�޸ĳɹ�!" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	//��������������Ļ��������һ��
	system("pause");
	system("cls");
}