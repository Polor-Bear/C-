#include<iostream>
using namespace std;

int main76() {
	//����ָ����������е�Ԫ��

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "��һ��Ԫ�أ� " << arr[0] << endl;

	int * p = arr;//����һ��ָ��ָ������
	cout << "����ָ����ʵ�һ��Ԫ�أ� " << *p << endl;

	p++;//��ָ�����ƫ���ĸ��ֽ�
	cout << "����ָ����ʵڶ���Ԫ�أ� " << *p << endl;

	cout << "����ָ���������: " << endl;
	int * p2 = arr;
	for (; p2 < &arr[sizeof(arr) / sizeof(arr[0])]; p2++)
	{
		cout << *p2 << " ";
	}
	cout << endl;

	system("pause");

	return 0;
}