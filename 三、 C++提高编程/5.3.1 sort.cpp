//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<functional>
//using namespace std;
//
////���������㷨 sort
//class MyPrint
//{
//public:
//	void operator()(const int& val)const
//	{
//		cout << val << " ";
//	}
//};
//
//void myPrint(const int& val)
//{
//	cout << val << " ";
//}
//
//void test01()
//{
//	vector<int>v;
//
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(20);
//	v.push_back(40);
//
//	//����sort��������
//	sort(v.begin(), v.end());
//	for_each(v.begin(), v.end(), MyPrint());
//	cout << endl;
//
//	//�ı�Ϊ ����
//	sort(v.begin(), v.end(), greater<int>());
//	for_each(v.begin(), v.end(), myPrint);
//	cout << endl;
//}
//
//int main() {
//
//	test01();
//
//	//�ܽ᣺sort���ڿ�������õ��㷨֮һ������������
//
//	system("pause");
//	return 0;
//}