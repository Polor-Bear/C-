//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<list>
//#include"printList.h"
//using namespace std;
//
////list���������ɾ��
//
///*
//push_back(elem);				//������β������һ��Ԫ��
//pop_back();					//ɾ�����������һ��Ԫ��
//push_front(elem);				//��������ͷ����һ��Ԫ��
//pop_front();					//��������ͷ�Ƴ���һ��Ԫ��
//insert(pos,elem);				//��posλ�ò�elemԪ�صĿ��������������ݵ�λ�á�
//insert(pos,n,elem);			//��posλ�ò���n��elem���ݣ��޷���ֵ��
//insert(pos,beg,end);			//��posλ�ò���[beg,end)��������ݣ��޷���ֵ��
//clear();						//�Ƴ���������������
//erase(beg,end);				//ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ�á�
//erase(pos);					//ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�
//remove(elem);/				/ɾ��������������elemֵƥ���Ԫ�ء�
//*/
//
//void test01()
//{
//	list<int>L;
//
//	//β��
//	L.push_back(10);
//	L.push_back(20);
//	L.push_back(30);
//
//	//ͷ��
//	L.push_front(100);
//	L.push_front(200);
//	L.push_front(300);
//
//	// 300 200 100 10 20 30
//	printList(L);
//
//	//βɾ
//	L.pop_back();
//	// 300 200 100 10 20
//	printList(L);
//
//	//ͷɾ
//	L.pop_front();
//	// 200 100 10 20
//	printList(L);
//
//	//insert ����
//	L.insert(++L.begin(), 1000);
//	// 200 1000 100 10 20
//	printList(L);
//
//	//erase ɾ��
//	L.erase(++L.begin());
//	// 200 100 10 20
//	printList(L);
//
//	//remove �Ƴ�
//	L.insert(++L.begin(), 5, 20);
//	// 200 20 20 20 20 20 100 10 20
//	printList(L);
//
//	L.remove(20);
//	// 200 100 10
//	printList(L);
//
//	//���
//	//L.erase(L.begin(), L.end());
//	L.clear();
//	printList(L);
//}
//
//int main() {
//	
//	test01();
//
//	//β�塪��push_back
//	//βɾ����pop_back
//	//ͷ�塪��push_front
//	//ͷɾ����pop_front
//	//���롪��insert
//	//ɾ������erase
//	//�Ƴ�����remove
//	//��ա���clear
//
//	system("pause");
//	return 0;
//}