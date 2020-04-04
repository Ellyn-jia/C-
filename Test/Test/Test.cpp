#include<iostream>
using namespace std;
//int main()
//{
//	int a, b;
//	cout << "hello";
//	cout << "hello" << endl;
//	cin >> a >> b;
//	cout << a <<" " << b << endl;
//	//const int a = 1;
//	//const int& ra = a;
//
//	//int y = a;
//
//	int a = 1;
//	const int& ra = a;
//
//
//
//	return 0;
//}

//引用做参数
//void Swap(int& ra, int& rb)
//{
//	int tmp = ra;
//	ra = rb;
//	rb = tmp;
//}
//
//int main()
//{
//	int a = 1, b = 0;
//	Swap(a, b);
//	return 0;
//}

//引用做返回值
//若函数要使用引用返回，那么这个函数的返回值要出了定义域还在，否则不安全
int& Count()
{
	static int a = 0;
	a++;
	return a;
}
int& Add(int a, int b)
{
	static int c = a + b; //如果没有static不安全
	return c;
}
int main()
{

	int& ra = Count();
	return 0;
}