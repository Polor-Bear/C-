#include"bubbleSort.h"

//ð������������ ����1 ������׵�ַ ����2 ����ĳ���
void bubbleSort(int * arr, int len) //int * arr ����д�� int arr[]
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			//���j > j + 1��ֵ	��������
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}