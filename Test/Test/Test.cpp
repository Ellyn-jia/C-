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
//private:
//	int _year;
//	int _month;
//};



////全缺省   无参和全缺省都是默认构造函数（自己实现的无参，自己实现的全缺省，编译器的构造函数），只能有一个
//Date(int year = 1, int month = 1)
//{
//	_year = year;
//	_month = month;
//}
//
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

//class Date
//{
//public:
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
//	d.Print();
//
//	return 0;
//
//}


//析构函数，对象生命周期到了以后，自动调用，完成清理，不是d1,d2销毁
//完成资源清理，
// ~ + 类名  

//class Stack{
//public:
//	Stack(int n = 10)//对象创建时自动调用完成初始化
//	{
//		_a = (int*)malloc(sizeof(int)*n);
//		_size = 0;
//		_capacity = 10;
//	}
//	~Stack()  //对象声明周期结束后自动清理
//	{
//		free(_a);
//		_size = _capacity = 0;
//	}
//
//private:
//	int* _a;
//	int _size;
//	int _capacity;
//};


////拷贝构造
//class Date
//{
//public:
//	
//	Date(int year, int month)
//	{
//		_year = year;
//		_month = month;
//	}
//	Date(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//	}
////private:
//	int _year;
//	int _month;
//};
//// 运算符有几个操作数，operator重载的函数就有几个参数
//
//bool operator == (const Date& d1, const Date& d2)
//{
//	return d1._year == d2._year
//		&& d1._month == d2._month;
//}
//
//int main()
//{
//	Date d1(2020, 4);
//	Date d2(d1);  //拷贝构造
//	d1 == d2;
//
//	return 0;
//}
//



//class Date
//{
//public:
//
//	Date(int year, int month)
//	{
//		_year = year;
//		_month = month;
//	}
//	Date(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//	}
//	bool operator == (const Date& d)  //  bool operator == (Date* this, const Date& d)
//	{
//		return _year == d._year
//			&& _month == d._month;
//	}
//	bool operator>(const Date& d)
//	{
//		if (_year > d._year)
//			return true;
//		else if (_year == d._year && _month > d._month)
//			return true;
//		return false;
//	}
//private:
//	int _year;
//	int _month;
//};
//int main()
//{
//	Date d1(2020, 4);
//	Date d2(2020, 5);
//
//	d1 == d2;
//	d1 > d2;  //d1.operator>(d2)
//	return 0;
//}



class Date{
public:
	int GetMonthDay(int year, int month)
	{
		static int MonthDay[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
			return 29;
		return MonthDay[month];
	}
	Date(int year, int month, int day)
	{
		if (year >= 0 && month >= 1 && month <= 12 && day >= 1 && day <= GetMonthDay(year, month))
		{
			_year = year;
			_month = month;
			_day = day;
		}
		else
			cout << "非法日期" << endl;
	}
	void Print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
	bool operator < (const Date& d)
	{
		if (_year < d._year)
			return true;
		else if (_year == d._year && _month < d._month)
			return true;
		else if (_year == d._year && _month == d._month && _day < d._day)
			return true;
		return false;
	}
	bool operator ==(const Date& d)
	{
		return _year == d._year && _month == d._month && _day == d._day;
	}
	bool operator <= (const Date& d)
	{
		return *this < d || *this == d;
	}
	bool operator >(const Date& d)
	{
		return !(*this <= d);
	}
	bool operator >= (const Date& d)
	{
		return !(*this < d);
	}
	bool operator != (const Date& d)
	{
		return !(*this == d);
	}
	Date operator+(int day)
	{
		Date ret(*this);
		ret._day += day;
		while (ret._day > GetMonthDay(ret._year, ret._month))
		{
			ret._day -= GetMonthDay(ret._year, ret._month);
			ret._month++;
			if (ret._month == 13)
			{
				ret._year++;
				ret._month = 1;
			}
		}
		return ret;
	}
	Date operator+=(int day)
	{
		_day += day;
		while (_day > GetMonthDay(_year, _month))
		{
			_day -= GetMonthDay(_year, _month);
			_month++;
			if (_month == 13)
			{
				_year++;
				_month = 1;
			}
		}
		return *this;
	}
private:
	int _year;
	int _month;
	int _day;
};
int main()
{
	Date d1(2021, 2, 29);
	Date d2(2020, 2, 29);
	d2.Print();
	Date d3(2018, 3, 3);
	d3.Print();
	Date d4 = d2+10;
	d4.Print();
}
