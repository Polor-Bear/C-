//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<stack>
//using namespace std;
//
////栈 stack容器
//
//void test01()
//{
//	//特点：符合先进后出的数据结构
//	stack<int>s;
//
//	//入栈
//	s.push(10);
//	s.push(20);
//	s.push(30);
//	s.push(40);
//	
//	cout << "栈的大小： " << s.size() << endl;
//
//	//只要栈不为空，查看栈顶，并执行出栈操作
//	while (!s.empty())
//	{
//		//查看栈顶元素
//		cout << "栈顶元素为： " << s.top() << endl;
//
//		//出栈
//		s.pop();
//	}
//
//	cout << "栈的大小： " << s.size() << endl;
//}
//
//int main() {
//
//	test01();
//
//	//总结：
//	//入栈——push
//	//出栈——pop
//	//返回栈顶——top
//	//判断栈是否为空——empty
//	//返回栈大小——size
//
//	system("pause");
//	return 0;
//}