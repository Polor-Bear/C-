#include<iostream>
using namespace std;

//����������
//�ȽϺ�����ʵ�������������ֽ��бȽϣ����ؽϴ��ֵ

//���ú�����������������ǰ���߱����������Ĵ���
int max(int a, int b);
int max(int a, int b);
int max(int a, int b);
int max(int a, int b); //������������д��Σ����Ƕ���ֻ����һ��(һ������²���������Σ�

int main66() {
	int a = 10; int b = 20;

	cout << max(a, b) << endl;

	system("pause");

	return 0;
}

//����
int max(int a, int b)  //����������main��
{
	return a > b ? a : b;
}