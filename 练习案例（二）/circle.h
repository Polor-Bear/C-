#pragma once
#include"heah.h"
#include"point.h"

//Բ��
class Circle
{
public:
	//���ð뾶
	void setR(int r);

	int getR();

	//����Բ��
	void setCenter(Point center);

	Point getCenter();

private:
	int m_R; //�뾶

	//�����п�������һ����	������ĳ�Ա(Ƕ����)
	Point m_Center; //Բ��
};