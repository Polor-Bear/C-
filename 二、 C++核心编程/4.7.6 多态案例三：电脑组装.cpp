//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
//
////����ͬ�����
////����CPU��
//class CPU
//{
//public:
//	//������㺯��
//	virtual void Calculate() = 0;
//};
//
////�����Կ���
//class VideoCard
//{
//public:
//	//������ʾ����
//	virtual void Dispaly() = 0;
//};
//
////�����ڴ�����
//class Memory
//{
//public:
//	//����洢����
//	virtual void Storage() = 0;
//};
//
//class Computer
//{
//public:
//	
//	Computer(CPU* cpu, VideoCard* vc, Memory* mem) :m_Cpu(cpu), m_Vc(vc), m_Mem(mem)
//	{
//
//	}
//
//	//�ṩ�����ĺ���
//	void DoWork()
//	{
//		//������������������ýӿ�
//		m_Cpu->Calculate();
//
//		m_Vc->Dispaly();
//
//		m_Mem->Storage();
//	}
//
//	//�ṩ�����������ͷ�3���������
//	~Computer()
//	{
//		//�ͷ�CPU���
//		if (m_Cpu != NULL)
//		{
//			delete m_Cpu;
//			m_Cpu = NULL;
//		}
//
//		//�ͷ��Կ����
//		if (m_Vc != NULL)
//		{
//			delete m_Vc;
//			m_Vc = NULL;
//		}
//
//		//�ͷ��ڴ������
//		if (m_Mem != NULL)
//		{
//			delete m_Mem;
//			m_Mem = NULL;
//		}
//	}
//
//private:
//
//	CPU* m_Cpu; //CPU�����ָ��
//	VideoCard* m_Vc; //�Կ������ָ��
//	Memory* m_Mem; //�ڴ��������ָ��
//};
//
////���峧��
////Intel����
//class IntelCPU :public CPU
//{
//	virtual void Calculate()
//	{
//		cout << "Intel��CPU��ʼ�����ˣ�" << endl;
//	}
//};
//
//class IntelVideoCard :public VideoCard
//{
//public:
//	virtual void Dispaly()
//	{
//		cout << "Intel���Կ���ʼ��ʾ�ˣ�" << endl;
//	}
//};
//
//class IntelMemory :public Memory
//{
//public:
//	virtual void Storage()
//	{
//		cout << "Intel���ڴ�����ʼ�洢�ˣ�" << endl;
//	}
//};
//
////Lenovo����
//class LenovoCPU :public CPU
//{
//	virtual void Calculate()
//	{
//		cout << "Lenovo��CPU��ʼ�����ˣ�" << endl;
//	}
//};
//
//class LenovoVideoCard :public VideoCard
//{
//public:
//	virtual void Dispaly()
//	{
//		cout << "Lenovo���Կ���ʼ��ʾ�ˣ�" << endl;
//	}
//};
//
//class LenovoMemory :public Memory
//{
//public:
//	virtual void Storage()
//	{
//		cout << "Lenovo���ڴ�����ʼ�洢�ˣ�" << endl;
//	}
//};
//
//void test01()
//{
//	//��һ̨�������
//	CPU* IntelCpu = new IntelCPU;
//	VideoCard* IntelCard = new IntelVideoCard;
//	Memory* IntelMem = new IntelMemory;
//
//	cout << "��һ̨���Կ�ʼ����: " << endl;
//	//������һ̨����
//	Computer* computer1 = new Computer(IntelCpu, IntelCard, IntelMem);
//	computer1->DoWork();
//	delete computer1;
//
//	cout << "----------------------" << endl;
//	cout << "�ڶ�̨���Կ�ʼ����: " << endl;
//	//�ڶ�̨������װ
//	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
//	computer2->DoWork();
//	delete computer2;
//
//	cout << "----------------------" << endl;
//	cout << "����̨���Կ�ʼ����: " << endl;
//	//����̨������װ
//	Computer* computer3 = new Computer(new LenovoCPU, new IntelVideoCard, new LenovoMemory);
//	computer3->DoWork();
//	delete computer3;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}