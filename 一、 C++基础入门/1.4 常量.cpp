#include<iostream>
using namespace std;

//���������ã����ڼ�¼�����в��ɸ��ĵ�����
/*C++���峣�����ַ�ʽ
1.define �곣����#define ������ ����ֵ
ͨ�����ļ��Ϸ����壬��ʾһ������
2.const���εı����� const �������� ������ = ����ֵ
ͨ���ڱ�������ǰ�ӹؼ���const�����θñ���Ϊ�����������޸�
*/

//1.define �곣��
#define Week 7

int main14() {

//Week = 14; //����Day�ǳ�����һ���޸ľͻᱨ��
cout << "һ���ܹ��У�" << Week << "��" << endl;

//const���εı���
const int Year = 12;
//year = 24; //����const���εı���Ҳ��Ϊ������һ���޸�Ҳ�ᱨ��

cout << "һ���ܹ��У�" << Year << "���·�" << endl;

system("pause");

return 0;
}