#include<iostream>
using namespace std;

int main431() {
	//break���
	//���ã���������ѡ��ṹ����ѭ���ṹ
	//breakʹ�õ�ʱ����

	//1. ������switch��������У���������ֹcase������switch
	
	cout << "��ѡ�񸱱��Ѷ�\n";
	cout << "��ͨ\n";
	cout << "�е�\n";
	cout << "����\n";

	int select = 0; //����ѡ�����ı���

	cin >> select; //�ȴ��û�����

	switch (select)
	{
	case 1:
		cout << "��ѡ�������ͨ�Ѷ�\n";
		break; //�˳�switch���
	case 2:
		cout << "��ѡ������е��Ѷ�\n";
		break;
	case 3:
		cout << "��ѡ����������Ѷ�\n";
		break;
	default:
		break;
	}
	
	//2. ������ѭ������У�������������ǰ��ѭ�����
	
	for (int i = 0; i < 10; i++)
	{
		//������������i����5���˳�ѭ�������ٴ�ӡ
		if (i == 5)
		{
			break; //�˳�ѭ��
		}
		cout << i << endl;
	}
	
	//3. ������Ƕ��ѭ���У�����������ڲ�ѭ�����
	
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 5)
			{
				break; //�˳��ڲ�ѭ��
			}
			cout << "* ";
		}
		cout << endl;
	}

	system("pause");

	return 0;
}