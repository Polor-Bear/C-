//��ϰ��������ֻС�������
//��������������ֻС����ֱ�������ֻС������أ������ж���ֻС������

//˼·���ȱȽ�A��B����������A����B�����һ���Ƚ�A��C�����ص����أ���B����A�����һ���Ƚ�B��C�����ص����ء�

#include<iostream>
using namespace std;

int main11() {

	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	cout << "������С��A�����أ�\n";
	cout << "������С��B�����أ�\n";
	cout << "������С��C�����أ�\n";
	cin >> num1 >> num2 >> num3;

	cout << "С��A������Ϊ��" << num1 << endl;
	cout << "С��B������Ϊ��" << num2 << endl;
	cout << "С��C������Ϊ��" << num3 << endl;

	if (num1 > num2)
	{
		if (num1 > num3) //A��B��
		{
			cout << "С��A����\n";
		}
		else
		{
			cout << "С��C����\n";
		}
	}
	else //B��A��
	{
		if (num2 > num3)
		{
			cout << "С��B����\n";
		}
		else
		{
			cout << "С��C����\n";
		}
	}

	//�ص㣺����ֻС��������ͬ�����޷��������ֻС�����أ����﷨��Ϊ���Ӷ���������

	system("pause");

	return 0;
}