#include"addPerson.h"

//���������ϵ�˺���
void addPerson(struct Addressbook * p)
{
	//���ж�ͨѶ¼�Ƿ���������������Ͳ������
	if (p->m_Size == MAX)
	{
		cout << "ͨѶ¼�������޷���ӣ�" << endl;
		return;
	}
	else
	{
		//��Ӿ�����ϵ��

		string name;//����
		cout << "����������: " << name << endl;
		cin >> name;
		p->personArray[p->m_Size].m_Name = name;

		int sex = 0;//�Ա�
		cout << "�������Ա�: " << endl;
		cout << "1 --- ��" << endl;
		cout << "2 --- Ů" << endl;

	SEX:

		cin >> sex;
		if (sex == 1 || sex == 2)
		{
			p->personArray[p->m_Size].m_Sex = sex;
		}
		else
		{
			cout << "������������������" << endl;
			goto SEX;
		}

		int age = 0;//����
		cout << "����������: " << endl;

	AGE:

		cin >> age;
		if (age > 0 && age <= 150)
		{
			p->personArray[p->m_Size].m_Age = age;
		}
		else
		{
			cout << "������������������" << endl;
			goto AGE;
		}

		string phone;//�绰
		cout << "��������ϵ�绰: " << endl;
		cin >> phone;
		p->personArray[p->m_Size].m_Phone = phone;

		string address;//סַ
		cout << "�������ͥסַ: " << endl;
		cin >> address;
		p->personArray[p->m_Size].m_Address = address;

		//����ͨѶ¼����
		p->m_Size++;

		//��ʾ�û���ӳɹ�
		cout << "��ӳɹ�!" << endl;

		system("pause"); //�����������
		system("cls"); //��������
	}
}

void save(Addressbook* p)
{
	ofstream ofs(FILENAME, ios::out);

	ofs << p->personArray[p->m_Size].m_Name << " "
		<< p->personArray[p->m_Size].m_Sex << " "
		<< p->personArray[p->m_Size].m_Age << " "
		<< p->personArray[p->m_Size].m_Phone << " "
		<< p->personArray[p->m_Size].m_Address << endl;

	ofs.close();
}