//��ϰ�������˷��ھ���
//��������������Ƕ��ѭ����ʵ�־žų˷���

#include<iostream>
using namespace std;

int main241() {

	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j <= i; j++) //�����������������С�ڵ��ڣ�
		{
			cout << j << "*" << i << "=" << j * i << " "; //������������
		}
		cout << endl;
	}

	system("pause");

	return 0;
}