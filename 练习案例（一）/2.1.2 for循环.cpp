//����������ϵͳ�������һ��1~100֮�������
//��ҽ��в²⣬����´���ʾ������ֹ�����С������¶Թ�ϲ���ʤ�������˳���Ϸ
//��չ������������Ҳ²����

#include<iostream>
using namespace std;
//����һ��ϵͳʱ��ͷ�ļ�time
#include<ctime>

int main212() {

	srand((unsigned int)time(NULL)); //���һ�����������
	int num = rand() % 100 + 1; //α�������Ҫ����һ�����������
								//cout << num << endl;
	int val = 0;
	for (int chance = 0; chance < 5; chance++) //����������һ����ֵ������ѭ��
	{
		cout << "������һ��1~100֮�������\n";
		cin >> val;

		if (val > num)
		{
			cout << "����������ֹ���\n";
		}
		else if (val < num)
		{
			cout << "����������ֹ�С\n";
		}
		else
		{
			cout << "��ϲ��¶���\n";
			break; //bresk�������˳�����ѭ��
		}
	}
	cout << "��Ϸ����\n";

	system("pause");

	return 0;
}