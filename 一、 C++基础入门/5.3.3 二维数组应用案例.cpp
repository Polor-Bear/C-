#include<iostream>
using namespace std;
#include<string>

int main533() {
	//��ά����Ӧ�ð��������Գɼ�ͳ��
	//����������������ͬѧ �����������ģ����壩 ����һ�ο����еĳɼ��ֱ����±���ֱ��������ͬѧ���ܳɼ�

	//������ά����
	int score[][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};
	int len1 = sizeof(score) / sizeof(score[0]);
	int len2 = sizeof(score[0]) / sizeof(score[0][0]);
	string names[] = { "����","����","����" };

	for (int i = 0; i < len1; i++)
	{
		int sum = 0;
		for (int j = 0; j < len2; j++)
		{
			sum += score[i][j];
			//cout <<  score[i][j] << " ";
		}
		cout << names[i] << "���ܷ�Ϊ�� " << sum << endl;
	}
	
	system("pause");

	return 0;
}