#include"isExist.h"

//��������ϵ�˺���:
//�����ϵ���Ƿ���ڣ�������ڣ�������ϵ����ͨѶ¼�е�λ�ã���������ڣ�����-1
int isExist(struct Addressbook * p, string name)
{
	for (int i = 0; i < p->m_Size; i++)
	{
		if (p->personArray[i].m_Name == name) //�ж��Ƿ��ҵ���ϵ��
		{
			return i; //����ҵ����򷵻���ϵ���������е��±��� i
		}
	}
	return -1; //�����������û���ҵ�����ϵ�ˣ��򷵻�-1
}