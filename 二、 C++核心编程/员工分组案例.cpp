//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<map>
//#include<ctime>
//using namespace std;
//
//#define PLAN 0
//#define ARTS 1
//#define RESEARCH 2
//
///*
//* ��˾������Ƹ��10��Ա����ABCDEFGHIJ����10��Ա�����빫˾֮����Ҫָ��Ա�����Ǹ����Ź���
//* Ա����Ϣ��: ����  ������ɣ����ŷ�Ϊ���߻����������з�
//* �����10��Ա�����䲿�ź͹���
//* ͨ��multimap������Ϣ�Ĳ���  key(���ű��) value(Ա��)
//* �ֲ�����ʾԱ����Ϣ
//*/
//
//class Worker
//{
//public:
//	char m_Name;
//	int m_Salary;
//};
//
//void createWorker(vector<Worker>& v, int num)
//{
//	string nameSeed = "ABCDEFGHIJ";
//
//	for (int i = 0; i < num; ++i)
//	{
//		Worker worker;
//		worker.m_Name = nameSeed[i];
//
//		worker.m_Salary = rand() % 10000 + 10001; // 10001 ~ 20000
//
//		//��Ա�����뵽������
//		v.push_back(worker);
//	}
//}
//
//void setGroup(const vector<Worker>& v, multimap<int, Worker>& m)
//{
//	for (vector<Worker>::const_iterator it = v.begin(); it != v.end(); ++it)
//		m.insert(make_pair(rand() % 3, *it)); //��Ա�����뵽������	key�����ű�� value�������Ա��
//}
//
//void showWorkerByGroup(const multimap<int, Worker>& m)
//{
//	cout << "�߻����ţ� " << endl;
//	multimap<int, Worker>::const_iterator pos = m.find(PLAN);
//
//	for (int index = 0; index < m.count(PLAN); ++index, ++pos)
//		cout << "������ Ա��" << pos->second.m_Name << "	���ʣ� " << pos->second.m_Salary << endl;
//
//	cout << "-----------------------------" << endl;
//	cout << "�������ţ� " << endl;
//	pos = m.find(ARTS);
//	
//	for (int index = 0; index < m.count(ARTS); ++index, ++pos)
//		cout << "������ Ա��" << pos->second.m_Name << "	���ʣ� " << pos->second.m_Salary << endl;
//
//	cout << "-----------------------------" << endl;
//	cout << "�з����ţ� " << endl;
//	pos = m.find(RESEARCH);
//	
//	for (int index = 0; index < m.count(RESEARCH); ++index, ++pos)
//		cout << "������ Ա��" << pos->second.m_Name << "	���ʣ� " << pos->second.m_Salary << endl;
//}
//
//int main() {
//
//	srand((unsigned int)time(NULL));
//
//	//1������Ա��
//	int num = 10; //����Ա������
//	vector<Worker>vWorker;
//	createWorker(vWorker, num);
//
//	//2��Ա������
//	multimap<int, Worker>mWorker;
//	setGroup(vWorker, mWorker);
//
//	//3��������ʾԱ��
//	showWorkerByGroup(mWorker);
//	
//	//����
//	//for (multimap<int, Worker>::iterator it = mWorker.begin(); it != mWorker.end(); ++it)
//	//	cout << "������ Ա��" << it->second.m_Name << "	���ʣ� " << it->second.m_Salary << "	" << it->first << endl;
//
//	//�ܽ᣺�������Լ�ֵ����ʽ���ڣ����Կ�����map �� multimap
//
//	system("pause");
//	return 0;
//}