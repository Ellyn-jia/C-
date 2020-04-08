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
//int& Count()
//{
//	static int a = 0;
//	a++;
//	return a;
//}
//int& Add(int a, int b)
//{
//	static int c = a + b; //如果没有static不安全
//	return c;
//}
//int main()
//{
//
//	int& ra = Count();
//	return 0;
//}



//auto 

//int main()
//{
//
//	int a = 0;
//	auto b = a;//b类型根据a推导
//	auto& d = a;
//
//
//	cout << typeid(b).name() << endl;
//	cout << typeid(d).name() << endl;
//
//	//范围for
//	int arr[] = { 1, 2 };
//	for (auto& e: arr)
//	{
//		e += 2;
//	}
//
//	int* p = nullptr;//C++ NULL = 0
//
//	return 0;
//
//}

//类

//class Person //默认私有  struct默认公有（区别）
//{
//public:
//	void Print() // 函数定义在类里面，默认是内联函数
//	{
//		cout << " " << endl;
//	}
//
//private:   //会被定义为私有或者隐私 不能被访问
//	char _name[10];
//	int _age;
//};
//
//int main()
//{
//
//}


// this指针存在栈上，是形参  VS下是在ecx寄存器下

//class Date
//{
//public:
//	void Init(int year, int month)
//	{
//		_year = year;
//		_month = month;
//	}
//	void Print()
//	{
//		cout << _year << "-" << _month << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//};
//int main()
//{
//	Date d;
//	d.Init(2020, 4);
//	d.Print();
//
//	return 0;
//
//}



//class Date
//{
//public:
//	//构造函数 在对象构造是调用的函数，完成初始化工作
//	Date(int year, int month)  //函数名与类名相同，无返回值,可以重载
//	{
//		_year = year;
//		_month = month;
//	}
//	Date()
//	{
//		_year = 1;
//		_month = 1;
//	}
//


////全缺省   无参和全缺省都是默认构造函数（自己实现的无参，自己实现的全缺省，编译器的构造函数），只能有一个
//Date(int year = 1, int month = 1)
//{
//	_year = year;
//	_month = month;
//}

//	void Print()
//	{
//		cout << _year << "-" << _month << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//};
//int main()
//{
//	Date d(2020, 4);
//	d.Print();
//
//	Date d2;  //d2不能加括号
//	d2.Print();
//
//
//	return 0;
//
//}



//如果类中没有显式的构造函数，那么编译器会生成默认的无参构造函数
//针对内置类型（int,char...)不处理
//针对自定义类型的成员变量，调用它的构造函数初始化

class Date
{
public:
	void Print()
	{
		cout << _year << "-" << _month << endl;
	}

private:
	int _year;
	int _month;
};
int main()
{
	Date d;
	d.Print();

	return 0;

}


//析构函数，对象生命周期到了以后，自动调用，完成清理，不是d1,d2销毁
//完成资源清理，
