//��ϰ����������Ԫ������
//����������������һ��5��Ԫ�ص����飬���ҽ�Ԫ������
//���ͣ���ԭ����Ԫ��Ϊ��1��3��2��5��4�����ú�������Ϊ��4��5��2��3��1��

#include<iostream>
using namespace std;

int main312() {
	//ʵ����������

	//1.��������
	int arr[] = { 1,3,2,5,4 };
	cout << "����Ԫ������ǰ�� \n";
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << arr[i] << endl;
	}

	//2.ʵ������
	//2.1��¼��ʼ�±�λ��
	//2.2��¼�����±�λ��
	//2.3��ʼ�±�������±��Ԫ�ػ���
	//2.4��ʼλ��++		����λ��--
	//2.5ѭ��ִ��2.1������ֱ����ʼλ�� >= ����λ��

	int start = 0; //��ʼ�±�
	int end = sizeof(arr) / sizeof(arr[0]) - 1; //�����±�

	while (start < end)
	{
		//ʵ��Ԫ�ػ���
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		//�±����
		start++;
		end--;
	}

	//3.��ӡ���ú������
	cout << "����Ԫ�����ú� \n";
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << arr[i] << endl;
	}

	//for (int i = sizeof(arr) / sizeof(arr[0]) -1; i >= 0; i--)
	//{
	//	cout << arr[i] << endl;
	//}

	system("pause");
	
	return 0;
}