//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include"printVector.h"
//using namespace std;
//
////vector�����ɾ��
////push_back(ele);									//β������Ԫ��ele
////pop_back();										//ɾ�����һ��Ԫ��
////insert(const_iterator pos, ele);					//������ָ��λ��pos����Ԫ��ele
////insert(const_iterator pos, int count, ele)		//������ָ��λ��pos����count��Ԫ��ele
////erase(const_iterator pos);						//ɾ��������ָ���Ԫ��
////erase(const_iterator start, const_iterator end);	//ɾ����������start��end֮���Ԫ��
////clear();										//ɾ������������Ԫ��
//
//void test01()
//{
//	vector<int> v1;
//
//	//β��
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//
//	//����
//	printVector(v1);
//
//	//βɾ
//	v1.pop_back();
//	printVector(v1);
//
//	//����
//	v1.insert(v1.begin(), 100);
//	printVector(v1);
//	
//	v1.insert(v1.end(), 50);
//	printVector(v1);
//
//	v1.insert(v1.begin() + 3, 3, 30);
//	printVector(v1);
//
//	//ɾ��
//	v1.erase(v1.begin() + 3);
//	printVector(v1);
//
//	//���
//	//v1.erase(v1.begin(), v1.end());
//	v1.clear();
//	printVector(v1);
//	cout << v1.size() << endl;
//	cout << v1.capacity() << endl;
//}
//
//int main() {
//
//	test01();
//
//	//�ܽ᣺
//	//β�塪��push_back
//	//βɾ����pop_back
//	//���롪��insert(λ�õ�����)
//	//ɾ������erase(λ�õ�����)
//	//��ա���clear
//
//	system("pause");
//	return 0;
//}