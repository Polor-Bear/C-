//��ϰ��������ֻС�������
//��������������ֻС����ֱ�������ֻС������أ������ж���ֻС������

//˼·��������Ŀ������Լ�if����ð���һ��˼·���С�����������

#include<iostream>
using namespace std;

int main13() {
	
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
		cout << "С��" << (num1 > num3 ? "A" : "C") << "����\n";
	}
	else
	{
		cout << "С��" << (num2 > num3 ? "B" : "C") << "����\n";
	}

	//�ص㣺�﷨��Ϊ��࣬������δ�������ֻС����������޷����������

	system("pause");

	return 0;
}