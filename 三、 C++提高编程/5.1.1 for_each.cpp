//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////���ñ����㷨 for_each
//
////��ͨ����
//void print01(const int& val)
//{
//	cout << val << " ";
//}
//
////�º���
//class print02
//{
//public:
//	void operator()(const int& val)const
//	{
//		cout << val << " ";
//	}
//};
//
//void test01()
//{
//	vector<int>v;
//
//	for (int i = 0; i < 10; ++i)
//		v.push_back(i);
//
//	for_each(v.begin(), v.end(), print01);
//	cout << endl;
//
//	for_each(v.begin(), v.end(), print02());
//	cout << endl;
//}
//
//int main() {
//
//	test01();
//
//	//�ܽ᣺for_each��ʵ�ʿ���������õı����㷨����Ҫ��������
//
//	system("pause");
//	return 0;
//}