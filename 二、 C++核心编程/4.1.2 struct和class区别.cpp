#include"head.h"

//��C++��	struct �� class Ψһ�����������Ĭ�ϵķ���Ȩ�޲�ͬ
//	struct	Ĭ��Ȩ����	����	public
//	class	Ĭ��Ȩ����	˽��	private

class C1
{
	int m_A; //Ĭ����˽��Ȩ��
};

struct S1
{
	int m_A; //Ĭ���ǹ���Ȩ��
};

int main412() {

	C1 c1;
	//c1.m_A = 100; //��class��Ĭ��Ȩ��Ϊ˽�У���˲����Է���

	S1 s1;
	s1.m_A = 100; //��struct��Ĭ��Ȩ��Ϊ��������˿��Է���

	system("pause");
	return 0;
}