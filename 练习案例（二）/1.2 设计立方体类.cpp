//��������: �����������(Cube)��������������������
//�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ���ȡ�

#include"heah.h"

class Cube
{
private:
	int m_L; //	��
	int m_W; //	��
	int m_H; //	��
public:
	//���ó�
	void setL(int l) {
		m_L = l;
	}

	int getL() {
		return m_L;
	}
	//���ÿ�
	void setW(int w) {
		m_W = w;
	}
	int getW() {
		return m_W;
	}

	//���ø�
	void setH(int h) {
		m_H = h;
	}
	int getH() {
		return m_H;
	}

	//��ȡ���
	int calculateS() {
		return 2 * (m_L * m_W + m_L * m_H + m_W * m_H);
	}

	//��ȡ���
	int calculateV() {
		return m_L * m_W * m_H;
	}

	//���ó�Ա�����ж�	�����������Ƿ����
	bool isSamebyClass(Cube &a) {
		return calculateS() == a.calculateS() && calculateV() == a.calculateV() ? true : false;
	}
};

//����ȫ�ֺ����ж�	�����������Ƿ����
bool isSame(Cube &c1, Cube &c2) {
	return c1.calculateS() == c2.calculateS() && c1.calculateV() == c2.calculateV() ? true : false;
}

int main12(){

	Cube c1;
	c1.setL(10);
	c1.setW(10);
	c1.setH(10);

	cout << "������c1�����Ϊ: " << c1.calculateS() << endl;
	cout << "������c1�����Ϊ: " << c1.calculateV() << endl;

	Cube c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(10);

	bool ret = isSame(c1, c2);
	ret ? cout << "ȫ�ֺ����ж�: c1��c2����ȵ�" << endl : cout << "ȫ�ֺ����ж�: c1��c2�ǲ���ȵ�" << endl;

	ret = c1.isSamebyClass(c2);
	ret ? cout << "��Ա�����ж�: c1��c2����ȵ�" << endl : cout << "��Ա�����ж�: c1��c2�ǲ���ȵ�" << endl;
	
	system("pause");
	return 0;
}