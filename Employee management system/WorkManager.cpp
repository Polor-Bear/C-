#include "WorkManager.h"

//���캯��
Workermanager::Workermanager()
{
	m_EmpNum = 0;
	m_EmpArray = NULL;

	ifstream ifs(FILENAME, ios::in);

	//1���ļ�������
	if (!ifs.is_open())
	{
		this->m_EmpNum = 0; //��ʼ������
		this->m_FileIsEmpty = true; //�жϱ�־Ϊ��
		this->m_EmpArray = NULL; //��ʼ������
		ifs.close(); //�ر��ļ�
		return;
	}

	//2���ļ����ڣ�����Ϊ��
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		this->m_EmpNum = 0;
		this->m_FileIsEmpty = true;
		this->m_EmpArray = NULL;
		ifs.close();
		return;
	}

	int num = this->get_EmpNum(); //��¼�ļ���ְ������
	this->m_EmpNum = num; //���³�Ա����

	//����ְ������������
	this->m_EmpArray = new Worker * [this->m_EmpNum];

	//��ʼ��ְ��
	this->init_Emp();
}

//չʾ�˵�
void Workermanager::ShowMenu()
{
	cout << "*********************************************" << endl;
	cout << "*********  ��ӭʹ��ְ������ϵͳ��  **********" << endl;
	cout << "*************  0���˳��������  *************" << endl;
	cout << "*************  1������ְ����Ϣ  *************" << endl;
	cout << "*************  2����ʾְ����Ϣ  *************" << endl;
	cout << "*************  3��ɾ����ְְ��  *************" << endl;
	cout << "*************  4���޸�ְ����Ϣ  *************" << endl;
	cout << "*************  5������ְ����Ϣ  *************" << endl;
	cout << "*************  6�����ձ������  *************" << endl;
	cout << "*************  7����������ĵ�  *************" << endl;
	cout << "*********************************************" << endl;
	cout << endl;
}

//�˳�ϵͳ
void Workermanager::ExitSystem()
{
	system("pause");
	exit(0);
}

//���ְ��
void Workermanager::Add_Emp()
{
	
	cout << "����������ְ�������� " << endl;

	int AddNum = 0;
	cin >> AddNum;

	if (AddNum > 0)
	{
		//�����¿ռ��С
		int NewSize = m_EmpNum + AddNum;

		//�����¿ռ�
		Worker** NewSpace = new Worker * [NewSize];

		//��ԭ�ռ������ݴ�ŵ��¿ռ���
		if (this->m_EmpNum != 0)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				NewSpace[i] = this->m_EmpArray[i];
			}
		}

		for (int i = 0; i < AddNum; i++)
		{
			int id = 0;
			string name = "";
			int dSelect = 0;

			cout << "������� " << i + 1 << "����ְ�����" << endl;

			while (true)
			{
				cin >> id;
				int ret = this->IsExist(id);
				
				if (ret == -1)
				{
					break;
				}

				cout << "��ְ������Ѵ��ڣ����������룺 " << endl;
			}

			cout << "������� " << i + 1 << "����ְ������" << endl;
			cin >> name;

			cout << "��ѡ���ְ���ĸ�λ��" << endl;
			cout << "1����ͨԱ��" << endl;
			cout << "2������" << endl;
			cout << "3���ϰ�" << endl;
			cin >> dSelect;

			Worker* worker = NULL;
			switch (dSelect)
			{
			case 1:
				worker = new Employee(id, name, 1);
				break;
			case 2:
				worker = new Manager(id, name, 2);
				break;
			case 3:
				worker = new Boss(id, name, 3);
				break;
			default:
				break;
			}

			NewSpace[this->m_EmpNum + i] = worker;

		}
		//�ͷ�ԭ�пռ�
		delete[] this->m_EmpArray;

		//�����¿ռ��ָ��
		this->m_EmpArray = NewSpace;

		//������������
		this->m_EmpNum = NewSize;

		//�����ļ�
		this->Save();

		//����ְ����Ϊ�ձ�־
		this->m_FileIsEmpty = false;

		//��ʾ��Ϣ
		cout << "�ɹ����" << "��Ա��" << endl;	
	}
	else
	{
		cout << "��������" << endl;
	}

	system("pause");
	system("cls");
}

//�����ļ�
void Workermanager::Save()
{
	ofstream ofs(FILENAME,ios::out);

	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_Id << " "
			<< this->m_EmpArray[i]->m_Name << " "
			<< this->m_EmpArray[i]->m_DeptId << endl;
	}

	ofs.close();
}

//ͳ������
int Workermanager::get_EmpNum()
{
	ifstream ifs(FILENAME, ios::in);

	int id;
	string name;
	int Did;

	int num = 0;

	//���ļ�����Ϣ����
	while (ifs >> id && ifs >> name && ifs >> Did)
	{
		//��¼����
		num++;
	}

	ifs.close();

	return num;
}

//��ʼ��Ա��
void Workermanager::init_Emp()
{
	ifstream ifs(FILENAME, ios::in);

	int id;
	string name;
	int dId;

	int index = 0;

	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		Worker* worker = NULL;

		//���ݲ�ͬ�Ĳ���ID������ͬ����
		switch (dId)
		{
		case 1: //1����ְͨ��
			worker = new Employee(id, name, dId);
			break;
		case 2: //2������
			worker = new Manager(id, name, dId);
			break;
		case 3: //3���ܲ�
			worker = new Boss(id, name, dId);
			break;
		default:
			break;
		}

		//�����������
		this->m_EmpArray[index] = worker;

		index++;
	}
}

//��ʾְ��
void Workermanager::Show_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
	}
	else
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			//���ö�̬���ýӿ�
			this->m_EmpArray[i]->ShowInfo();
		}
	}
}
//ɾ��ְ��
void Workermanager::Del_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
	}
	else
	{
		//��ְ�����ɾ��
		cout << "������Ҫɾ����ְ����ţ� " << endl;
		int id = 0;
		cin >> id;

		int index = this->IsExist(id);

		if (index != -1) //˵��indexeλ����������Ҫɾ��
		{
			cout << "���ҵ���ְ����ϢΪ�� " << endl;
			this->m_EmpArray[index]->ShowInfo();

			cout << "�Ƿ�ɾ����ְ����" << endl;
			cout << "1����" << endl;
			cout << "2����" << endl;

			char select = '0';
			cin >> select;

			if (select == '1')
			{
				for (int i = index; i < this->m_EmpNum - 1; i++)
				{
					this->m_EmpArray[i] = this->m_EmpArray[i + 1];
				}

				this->m_EmpNum--;

				this->Save(); //ɾ����ͬ�����ļ���
				cout << "ɾ���ɹ���" << endl;
			}
		}
		else
		{
			cout << "ɾ��ʧ�ܣ�δ�ҵ���ְ��" << endl;
		}
	}

	system("pause");
	system("cls");
}

//����ְ������жϸ�ְ���Ƿ���ڣ������ڷ���ְ���������е�λ�ã������ڷ���-1
int Workermanager::IsExist(int id)
{
	int index = -1;

	for (int i = 0; i < this->m_EmpNum; i++)
	{
		if (this->m_EmpArray[i]->m_Id == id)
		{
			index = i;

			break;
		}
	}

	return index;
}

//�޸�ְ��
void Workermanager::Mod_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
	}
	else
	{
		cout << "ȫ��ְ����Ϣ���£� " << endl;

		this->Show_Emp();

		cout << endl;
		cout << "��ѡ���޸�ְ���ı�ţ� " << endl;
		int id = 0;
		cin >> id;

		int ret = this->IsExist(id);

		if (ret != -1)
		{
			cout << "���ҵ���ְ����ϢΪ�� " << endl;
			this->m_EmpArray[ret]->ShowInfo();

			char select = '0';

			while (select)
			{
				cout << "��ѡ��Ҫ�޸ĵ�ְ�����ԣ� (��������ѡ�����˳��޸�)" << endl;
				cout << "1��ְ�����" << endl;
				cout << "2��ְ������" << endl;
				cout << "3��ְ����λ" << endl;
				cin >> select;

				if (select == '1')
				{
					cout << "��������ְ����ţ� " << endl;
					int newId = 0;

					while (true)
					{
						cin >> newId;
						int ret = this->IsExist(newId);

						if (ret == -1)
						{
							break;
						}

						cout << "��ְ������Ѵ��ڣ����������룺 " << endl;
					}

					this->m_EmpArray[ret]->m_Id = newId;

					cout << "�޸ĳɹ���" << endl;
				}
				else if (select == '2')
				{
					cout << "��������ְ�������� " << endl;
					string newName = "";
					cin >> newName;

					this->m_EmpArray[ret]->m_Name = newName;

					cout << "�޸ĳɹ���" << endl;
				}
				else if (select == '3')
				{
					int oldId = this->m_EmpArray[ret]->m_Id;
					string oldName = this->m_EmpArray[ret]->m_Name;

					delete this->m_EmpArray[ret];

					cout << "��������ְ����λ�� " << endl;
					cout << "1����ְͨ��" << endl;
					cout << "2������" << endl;
					cout << "3���ϰ�" << endl;
					int dSelect = 0;
					cin >> dSelect;

					Worker* worker = NULL;

					switch (dSelect)
					{
					case 1:
						worker = new Employee(oldId, oldName, dSelect);
						break;
					case 2:
						worker = new Manager(oldId, oldName, dSelect);
						break;
					case 3:
						worker = new Boss(oldId, oldName, dSelect);
						break;
					default:
						break;
					}

					this->m_EmpArray[ret] = worker;

					cout << "�޸ĳɹ���" << endl;
				}
				else
				{
					break;
				}

				system("pause");
			}
		}
		else
		{
			cout << "�޸�ʧ�ܣ����޴���" << endl;
		}
	}

	this->Save();

	system("pause");
	system("cls");
}

//����ְ��
void Workermanager::Find_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
	}
	else
	{
		cout << "��������ҵķ�ʽ�� " << endl;
		cout << "1����ְ����Ų���" << endl;
		cout << "2������������" << endl;

		char select = '0';
		cin >> select;

		if (select == '1')
		{
			int id = 0;
			cout << "������Ҫ���ҵ�ְ����ţ� " << endl;
			cin >> id;

			int ret = this->IsExist(id);

			if (ret != -1)
			{
				cout << "���ҳɹ�����ְ����Ϣ���£� " << endl;
				this->m_EmpArray[ret]->ShowInfo();
			}
			else
			{
				cout << "����ʧ�ܣ����޴���" << endl;
			}
		}
		else if (select == '2')
		{
			cout << "������Ҫ���ҵ�ְ�������� " << endl;
			string name = "";
			cin >> name;

			bool Flag = false;

			for (int i = 0; i < this->m_EmpNum; i++)
			{
				if (this->m_EmpArray[i]->m_Name == name)
				{
					cout << "���ҳɹ���ְ�����Ϊ�� "
						<< this->m_EmpArray[i]->m_Id
						<< "�ŵ���Ϣ���£� " << endl;

					Flag = true;

					this->m_EmpArray[i]->ShowInfo();

				}
			}
			if (Flag == false)
			{
				cout << "����ʧ�ܣ����޴���" << endl;
			}
		}
	}

	system("pause");
	system("cls");
}

//����ְ��
void Workermanager::Sort_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
	}
	else
	{
		cout << "��ѡ������ʽ�� " << endl;
		cout << "1����ְ���������" << endl;
		cout << "2������λ��������" << endl;
		char select = '0';
		cin >> select;

		for (int i = 0; i < this->m_EmpNum; i++)
		{
			int min = i;
			for (int j = i + 1; j < this->m_EmpNum; j++)
			{
				if (select == '1') //��ְ���������
				{
					if (this->m_EmpArray[j]->m_Id < this->m_EmpArray[min]->m_Id)
					{
						min = j;
					}
				}
				else if (select == '2')
				{
					if (this->m_EmpArray[j]->m_DeptId > this->m_EmpArray[min]->m_DeptId)
					{
						min = j;
					}
				}
				else
				{
					cout << "��������" << endl;
				}
			}

			if (min != i)
			{
				Worker* temp = this->m_EmpArray[i];
				this->m_EmpArray[i] = this->m_EmpArray[min];
				this->m_EmpArray[min] = temp;
			}
		}

		this->Save(); //�����ļ�

		cout << "����ɹ����������Ϊ�� " << endl;
		this->Show_Emp();
	}

	system("pause");
	system("cls");
}

//����ļ�
void Workermanager::Clean_Emp()
{
	cout << "ȷ������ļ���" << endl;
	cout << "1��ȷ��" << endl;
	cout << "2������" << endl;
	char select = '0';
	cin >> select;

	if (select == '1')
	{
		ifstream ifs(FILENAME, ios::trunc);

		ifs.close();

		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				if (this->m_EmpArray[i] != NULL)
				{
					delete this->m_EmpArray[i];
				}
			}
			this->m_EmpNum = 0;
			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_FileIsEmpty = true;
		}
		cout << "��ճɹ���" << endl;
	}

	system("pause");
	system("cls");
}

//��������
Workermanager::~Workermanager()
{
	if (this->m_EmpArray != NULL)
	{
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}