#include<iostream>
using namespace std;

int main432() {
	//continue���
	//���ã���ѭ������У���������ѭ����������δִ�е���䣬����ִ����һ��ѭ��

	for (int i = 0; i <= 100; i++)
	{
		//���������������������ż�������
		if (i % 2 == 0) //0 2 4 6 8 ż��
		{
			continue; //����ɸѡ������ִ�е��˾Ͳ�������ִ�У�ִ����һ��ѭ��
			//break���˳�ѭ������continue����
		}
		cout << i << endl;
	}

	system("pause");

	return 0;
}