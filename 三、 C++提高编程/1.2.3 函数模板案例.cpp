//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
////ʵ��ͨ�� �������������ĺ���
////���� �Ӵ�С
////�㷨 ѡ��
////���� char���顢int����
//
////��������ģ��
//template<typename T>
//void mySwap(T &a, T &b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
////��ӡ����ģ��
//template<typename T>
//void myPrint(T Arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << Arr[i];
//	}
//	cout << endl;
//}
//
////�����㷨
//template<typename T>
//void mySort(T Arr[], int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		int max = i;
//		for (int j = i + 1; j < len; j++)
//		{
//			if (Arr[j] > Arr[max])
//			{
//				max = j;
//			}
//		}
//		if (max != i)
//		{
//			mySwap(Arr[max], Arr[i]);
//		}
//	}
//}
//
//void test01()
//{
//	//����char����
//	char charArr[] = "dfcbae";
//	int len = sizeof(charArr) / sizeof(charArr[0]);
//
//	mySort(charArr, len);
//
//	myPrint(charArr, len);
//}
//
//void test02()
//{
//	//����int����
//	int Arr[] = { 5,8,9,4,6,7,3,1,2 };
//	int len = sizeof(Arr) / sizeof(Arr[0]);
//
//	mySort(Arr, len);
//
//	myPrint(Arr, len);
//}
//
//int main() {
//
//	//test01();
//	test02();
//
//	//�ܽ᣺ģ�������ߴ��븴�ã���Ҫ��������
//
//	system("pause");
//	return 0;
//}