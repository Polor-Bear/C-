//��������:��װһ������������ð������ʵ�ֶ���������Ľ�������

#include<iostream>
using namespace std;

//����ð��������
void bubbleSort(int * arr, int len)
{
	for (int i = 0; i < len - 1; i++)
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
}

//�����ӡ���麯��
void PrintArray(int * arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
}

int main41() {

	//��������
	int arr[] = { 6,8,3,10,2,9,5,1,4,7 };
	int len = sizeof(arr) / sizeof(arr[0]); //�������鳤��

	//���ú�������ð������
	bubbleSort(arr, len);

	//���ú�����ӡ����������
	PrintArray(arr, len);

	system("pause");

	return 0;
}