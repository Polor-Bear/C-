#include"showMenu.h" //��ʾ�˵�
#include"addPerson.h" //1�������ϵ��
#include"showPerson.h" //2����ʾ��ϵ��
#include"deletePerson.h" //3��ɾ����ϵ��
#include"findPerson.h" //4��������ϵ��
#include"modifyPerson.h" //5���޸���ϵ��
#include"cleanPerson.h" //6�������ϵ��

int main() {

	//����ͨѶ¼�ṹ�����
	Addressbook abs;
	//��ʼ��ͨѶ¼�е�ǰ��Ա����
	abs.m_Size = 0;

	//�����û�ѡ������ı���
	int select = 0;

FLAG:

	//�˵�����
	showMenu();
	
	cin >> select;

	switch (select)
	{
	case 1: //1�������ϵ��
		addPerson(&abs); //���õ�ַ���ݣ������޸�ʵ��
		save(&abs);
		goto FLAG;
	case 2: //2����ʾ��ϵ��
		showPerson(&abs);
		goto FLAG;
	case 3: //3��ɾ����ϵ��
		deletePerson(&abs);
		goto FLAG;
	case 4: //4��������ϵ��
		findPerson(&abs);
		goto FLAG;
	case 5: //5���޸���ϵ��
		modifyPerson(&abs);
		goto FLAG;
	case 6: //6�������ϵ��
		cleanPerson(&abs);
		goto FLAG;
	case 0: //0���˳�ͨѶ¼
		cout << "��ӭ�´�ʹ��" << endl;
		system("pause");
		return 0;
	default:
		cout << "��������ȷ������" << endl;
		system("pause");
		system("cls");
		goto FLAG;
	}

	system("pause");
	return 0;
}