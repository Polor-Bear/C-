////��������: ���һ��Բ���ࣨCircle������һ�����ࣨPoint����������Բ�Ĺ�ϵ��
//
//#include"heah.h"
//#include"circle.h"
//
////�жϵ��Բ�Ĺ�ϵ
//void isInCircle(Point &p, Circle &c) {
//	//��������֮����� ƽ��
//	int distance =
//		(p.getX() - c.getCenter().getX()) * (p.getX() - c.getCenter().getX()) +
//		(p.getY() - c.getCenter().getY()) * (p.getY() - c.getCenter().getY());
//	//����뾶��ƽ��
//	int rDistance = c.getR() * c.getR();
//	//�жϹ�ϵ
//	if (distance == rDistance) {
//		cout << "����Բ��" << endl;
//	}
//	else if (distance > rDistance) {
//		cout << "����Բ��" << endl;
//	}
//	else {
//		cout << "����Բ��" << endl;
//	}
//}
//
//int main() {
//
//	//��Ƶ�
//	Point p;
//	p.setX(10);
//	p.setY(10);
//
//	//���Բ
//	Circle c;
//	c.setR(10);
//	Point center;
//	center.setX(10);
//	center.setY(0);
//	c.setCenter(center);
//
//	//�жϹ�ϵ
//	isInCircle(p, c);
//
//	system("pause");
//	return 0;
//}