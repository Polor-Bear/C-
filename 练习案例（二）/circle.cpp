#pragma once
#include"circle.h"

//���ð뾶
void Circle::setR(int r) {
	m_R = r;
}
int Circle::getR() {
	return m_R;
}
//����Բ��
void Circle::setCenter(Point center) {
	m_Center = center;
}
Point Circle::getCenter() {
	return m_Center;
}