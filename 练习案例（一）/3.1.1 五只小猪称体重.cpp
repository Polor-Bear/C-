//��ϰ��������ֻС�������
//������������һ�������м�¼����ֻС�������
//�磺int arr[5] = {300,350,200,400,250};
//�ҳ�����ӡ���ص�С������

//˼·�����϶�һ�����ֵmax�����������е�ÿ��Ԫ�أ������Ԫ�ر����϶������ֵҪ����������ֵ

#include<iostream>
using namespace std;

int main311() {

int arr[] = { 300,350,500,400,250 };
int max = 0; //���϶�һ�����ֵ

for (int i = 0; i < sizeof(arr) / sizeof(arr[0]) ; i++)
{
	if (arr[i] > max) max = arr[i];
}
cout << "���ص�С�������Ϊ�� " << max << endl;


	system("pause");

	return 0;
}