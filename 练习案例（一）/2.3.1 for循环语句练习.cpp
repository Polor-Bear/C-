//��ϰ������������
//������������1��ʼ��������100��������ָ�λ��ʮλ����7�����߸�������7�ı��������ӡ�����ӣ���������ֱ�Ӵ�ӡ���

#include<iostream>
using namespace std;

int main231() {

	int a = 0;
	for (int num = 1; num < 101; num++)
	{
		if (num % 10 == 7 || num % 7 == 0 || num / 10 == 7)
		{
			cout << "������\n";
		}
		else
		{
			cout << num << endl;
		}
	}

	system("pause");

	return 0;
}