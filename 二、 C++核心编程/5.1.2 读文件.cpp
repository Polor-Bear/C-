//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//#include<fstream>
//using namespace std;
//
//void test01()
//{
//	//1������ͷ�ļ�
//	//2������������
//	ifstream ifs;
//
//	//3�����ļ��������ж��Ƿ�򿪳ɹ�
//	ifs.open("test.txt", ios::in);
//
//	if (!ifs.is_open())
//	{
//		cout << "�ļ���ʧ��" << endl;
//		return;
//	}
//	//4��������
//
//	//��һ��
//	//char buf[1024] = { 0 };
//
//	//while (ifs >> buf)
//	//{
//	//	cout << buf << endl; //�Ὣ�ո��ȡΪ����
//	//}
//
//	//�ڶ���
//	//char buf[1024] = { 0 };
//
//	//while (ifs.getline(buf, sizeof(buf)))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//������
//	string buf;
//
//	while (getline(ifs, buf))
//	{
//		cout << buf << endl;
//	}
//
//	//������ ������ʹ��
//	//char c;
//
//	//while ((c = ifs.get()) != EOF) //EOF  end of file
//	//{
//	//	cout << c;
//	//}
//
//	//5���ر��ļ�
//	ifs.close();
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}