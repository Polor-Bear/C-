//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////�º��� ����ֵ����Ϊbool�������ͣ���Ϊν��
////һԪν��
//class GreaterFive
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
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
//	//���������У���û�д���5������
//	//GreaterFive() ������������
//	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
//	if (it == v.end())
//		cout << "δ�ҵ�" << endl;
//	else
//	{
//		cout << "�ҵ��˴���5������Ϊ�� ";
//		for (; it != v.end(); ++it)
//			cout << *it << " ";
//		cout << endl;
//	}
//}
//
//int main() {
//
//	test01();
//
//	//�ܽ᣺����ֻ��һ����ν�ʣ���ΪһԪν��
//
//	system("pause");
//	return 0;
//}