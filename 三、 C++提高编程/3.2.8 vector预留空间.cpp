//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
////vector���� Ԥ���ռ�
//void test01()
//{
//	vector<int> v;
//
//	//����reserveԤ���ռ�
//	v.reserve(100000);
//
//	int num = 0; //ͳ�ƿ��ٴ���
//	int* p = NULL;
//
//	for (int i = 0; i < 100000; i++)
//	{
//		v.push_back(i);
//
//		//if (v.size() == v.capacity())
//		if (p != &v[0])
//		{
//			p = &v[0];
//			++num;
//		}
//	}
//
//	cout << "num = " << num << endl;
//}
//
//int main() {
//
//	test01();
//
//	//�ܽ᣺����������ϴ󣬿���һ��ʼ������reserve��Ԥ���ռ�
//
//	system("pause");
//	return 0;
//}