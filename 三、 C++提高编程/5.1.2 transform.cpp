//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////���ñ����㷨 transform
//class Transform
//{
//public:
//	int operator()(int val)
//	{
//		return val + 100;
//	}
//};
//
//class MyPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//void test01()
//{
//	vector<int>vSource;
//
//	for (int i = 0; i < 10; ++i)
//		vSource.push_back(i);
//
//	vector<int>vTarget; //Ŀ������
//	vTarget.resize(vSource.size()); //Ŀ��������Ҫ��ǰ���ٿռ�
//
//	transform(vSource.begin(), vSource.end(), vTarget.begin(), Transform());
//
//	for_each(vTarget.begin(), vTarget.end(), MyPrint());
//	cout << endl;
//}
//
//int main() {
//
//	test01();
//
//	//�ܽ᣺���˵�Ŀ����������Ҫ��ǰ���ٿռ䣬�����޷���������
//
//	system("pause");
//	return 0;
//}