#include<iostream>
using namespace std;
#include<string>

int main28() {

//1������
int a = 0;
cout << "������ͱ���a��ֵ��" << endl;
cin >> a;
cout << "���ͱ���a = " << a << endl;

//2��������
float f = 3.14f;
cout << "��������ͱ���f��ֵ��" << endl;
cin >> f;
cout << "�����ͱ���f = " << f << endl;

//3���ַ���
char ch = 'a';
cout << "����ַ��ͱ���ch��ֵ" << endl;
cin >> ch;
cout << "�ַ��ͱ���ch = " << ch << endl;

//4���ַ�����
string str = "Hello";
cout << "����ַ��� str��ֵ" << endl;
cin >> str;
cout << "�ַ���dtr = " << str << endl;

//5����������
bool flag = false;
cout << "����������� flag ��ֵ" << endl;
cin >> flag; //bool���� ֻҪ�Ǿ���ֵ����1��ֵ��������
cout << "��������flag = " << flag << endl;

system("pause");

return 0;
}