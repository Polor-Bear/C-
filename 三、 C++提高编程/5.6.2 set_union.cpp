//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////���ü����㷨 set_union
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
//	vTarget.resize(v1.size() + v2.size());
//	vector<int>::iterator itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//	for_each(vTarget.begin(), itEnd, myPrint);
//	cout << endl;
//}
//
//int main() {
//
//	test01();
// 
//	//�ܽ᣺
//	//�󲢼����������ϱ�������������
//	//Ŀ���������ٿռ���Ҫ�����������
//	//set_union����ֵ���ǲ��������һ��Ԫ�ص�λ��
//
//	system("pause");
//	return EXIT_SUCCESS;
//}