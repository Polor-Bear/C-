//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include"printVector.h">
//using namespace std;
//
////���ÿ������滻�㷨 replace_if
//class ReplaceGreater30
//{
//public:
//	bool operator()(const int& val)const
//	{
//		return val >= 30;
//	}
//};
//
//void test01()
//{
//	vector<int>v;
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(40);
//	v.push_back(50);
//	v.push_back(10);
//	v.push_back(20);
//
//	cout << "�滻ǰ�� " << endl;
//	printVector(v);
//
//	//�������д��ڵ���30 ��Ԫ���滻�� 3000
//	cout << "�滻�� " << endl;
//	replace_if(v.begin(), v.end(), ReplaceGreater30(), 3000);
//	printVector(v);
//}
//
//int main() {
//
//	test01();
//
//	//�ܽ᣺replace_if�������滻���������÷º������ɸѡ���������
//
//	system("pause");
//	return EXIT_SUCCESS;
//}