#include"bubbleSort.h"
#include"printArray.h"

//��������:��װһ������������ð������ʵ�ֶ������������������
//��������:arr[] = {8,6,3,5,4,9,2,7,1,10}

int main78() {

	//1���ȴ�������
	int arr[] = { 8,6,3,5,4,9,2,7,1,10 };

	//���鳤��
	int len = sizeof(arr) / sizeof(arr[0]);

	//2�����ú�����ʵ��ð������
	bubbleSort(arr, len);

	//3����ӡ����������
	printArray(arr, len);

	system("pause");

	return 0;
}