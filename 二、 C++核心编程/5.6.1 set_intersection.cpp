//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////���ü����㷨 set_intersection
//void myPrint(const int& val)
//{
//	cout << val << " ";
//}
//
//void test01()
//{
//	vector<int>v1, v2, vTarget;
//	for (int i = 0; i < 10; ++i)
//		v1.push_back(i), v2.push_back(i + 5);
//
//	vTarget.resize(min(v1.size(), v2.size()));
//	vector<int>::iterator itEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//
//	for_each(vTarget.begin(), itEnd, myPrint);
//	cout << endl;
//}
//
//int main() {
//
//	test01();
//
//	//�ܽ᣺
//	//�󽻼����������ϱ�������������
//	//Ŀ���������ٿռ���Ҫ������������ȡСֵ
//	//set_intersection����ֵ���ǽ��������һ��Ԫ�ص�λ��
//
//	system("pause");
//	return EXIT_SUCCESS;
//}