//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
////�̳м���ʵ��ҳ��Ч��
//
////����ҳ����
//class BasePage
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��...(����ͷ��)" << endl;
//	}
//
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
//	}
//
//	void left()
//	{
//		cout << "JAVA,Python,C++...(���������б�)" << endl;
//	}
//};
//
////�̳еĺô��������ظ�����
////�﷨: class ���� : �̳з�ʽ ����
////����	Ҳ��Ϊ	������
////����	Ҳ��Ϊ	����
//
////JAVAҳ��
//class JAVA :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "JAVAѧ����Ƶ" << endl;
//	}
//};
//
////Pythonҳ��
//class Python :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Pythonѧ����Ƶ" << endl;
//	}
//};
//
////C++ҳ��
//class CPP :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "C++ѧ����Ƶ" << endl;
//	}
//};
//
//void test01()
//{
//	//JAVAҳ��
//	cout << "JAVA������Ƶҳ������: " << endl;
//	JAVA ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//	cout << "----------------------" << endl;
//
//	//Python����
//	cout << "Python������Ƶҳ������: " << endl;
//	Python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//	cout << "----------------------" << endl;
//
//	//C++����
//	cout << "C++������Ƶҳ������: " << endl;
//	CPP cpp;
//	cpp.header();
//	cpp.footer();
//	cpp.left();
//	cpp.content();
//}
//
//int main() {
//
//	test01();
//
//	//������ĳ�Ա���������󲿷�
//	//һ�����Ǵӻ���̳й����ģ�һ�������Լ������ĳ�Ա
//	//�ӻ���̳й����ı����乲�ԣ��������ĳ�Ա�����������
//
//	system("pause");
//	return 0;
//}