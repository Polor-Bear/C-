//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////���ò����㷨 adjacent_find
//void test01()
//{
//	vector<int>v;
//
//	v.push_back(0);
//	v.push_back(2);
//	v.push_back(0);
//	v.push_back(3);
//	v.push_back(5);
//	v.push_back(1);
//	v.push_back(3);
//	v.push_back(3);
//
//	vector<int>::iterator pos = adjacent_find(v.begin(), v.end());
//
//	if (pos == v.end())
//		cout << "δ�ҵ������ظ�Ԫ��" << endl;
//	else
//		cout << "�ҵ������ظ�Ԫ�أ� " << *pos << " " << *(++pos) << endl;
//}
//
//int main() {
//
//	test01();
//
//	//�ܽ᣺��������������ֲ��������ظ�Ԫ�أ��ǵ���STL�е�adjacent_find�㷨
//
//	system("pause");
//	return 0;
//}