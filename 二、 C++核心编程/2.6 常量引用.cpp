#include"head.h"

//��������
//ʹ�ó���: ͨ�����������βΣ���ֹ�����

void showvalue(const int & val) //const����ʵ�α�Ϊֻ������ֹ�����
{
	//val = 1000; 
	cout << "val = " << val << endl;
}

int main26() {

	//int & ref = 10; //���ñ�����Ҫһ��Ϸ����ڴ�ռ䣬������д���
	const int & ref = 10; //����const�Ϳ����ˣ��������Զ��Ż����룬int temp = 10; const int & ref = temp;
	//ref = 20; //���󣬳������ò����޸�	
	//�����Ǳ������Զ������ڴ�ռ䣬�����޷��ҵ������ݵ�ԭ�������ֻ��ͨ���������ٿ�����ڴ�
	//�����ڱ���const����Ϊ�������ã���Ϊֻ������˲����Խ����޸Ĳ���
	cout << "ref = " << ref << endl;

	int a = 100;
	showvalue(a);

	system("pause");
	return 0;
}