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

//����������
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

//����������ֵ
//������Ҫʹ�����÷��أ���ô��������ķ���ֵҪ���˶������ڣ����򲻰�ȫ
//int& Count()
//{
//	static int a = 0;
//	a++;
//	return a;
//}
//int& Add(int a, int b)
//{
//	static int c = a + b; //���û��static����ȫ
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
//	auto b = a;//b���͸���a�Ƶ�
//	auto& d = a;
//
//
//	cout << typeid(b).name() << endl;
//	cout << typeid(d).name() << endl;
//
//	//��Χfor
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

//��

//class Person //Ĭ��˽��  structĬ�Ϲ��У�����
//{
//public:
//	void Print() // ���������������棬Ĭ������������
//	{
//		cout << " " << endl;
//	}
//
//private:   //�ᱻ����Ϊ˽�л�����˽ ���ܱ�����
//	char _name[10];
//	int _age;
//};
//
//int main()
//{
//
//}


// thisָ�����ջ�ϣ����β�  VS������ecx�Ĵ�����

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
//	//���캯�� �ڶ������ǵ��õĺ�������ɳ�ʼ������
//	Date(int year, int month)  //��������������ͬ���޷���ֵ,��������
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



////ȫȱʡ   �޲κ�ȫȱʡ����Ĭ�Ϲ��캯�����Լ�ʵ�ֵ��޲Σ��Լ�ʵ�ֵ�ȫȱʡ���������Ĺ��캯������ֻ����һ��
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
//	Date d2;  //d2���ܼ�����
//	d2.Print();
//
//
//	return 0;
//
//}



//�������û����ʽ�Ĺ��캯������ô������������Ĭ�ϵ��޲ι��캯��
//����������ͣ�int,char...)������
//����Զ������͵ĳ�Ա�������������Ĺ��캯����ʼ��

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


//���������������������ڵ����Ժ��Զ����ã������������d1,d2����
//�����Դ����
// ~ + ����  

//class Stack{
//public:
//	Stack(int n = 10)//���󴴽�ʱ�Զ�������ɳ�ʼ��
//	{
//		_a = (int*)malloc(sizeof(int)*n);
//		_size = 0;
//		_capacity = 10;
//	}
//	~Stack()  //�����������ڽ������Զ�����
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


////��������
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
//// ������м�����������operator���صĺ������м�������
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
//	Date d2(d1);  //��������
//	d1 == d2;
//
//	return 0;
//}
//



class Date
{
public:

	Date(int year, int month)
	{
		_year = year;
		_month = month;
	}
	Date(const Date& d)
	{
		_year = d._year;
		_month = d._month;
	}
	bool operator == (const Date& d)  //  bool operator == (Date* this, const Date& d)
	{
		return _year == d._year
			&& _month == d._month;
	}
	bool operator>(const Date& d)
	{
		if (_year > d._year)
			return true;
		else if (_year == d._year && _month > d._month)
			return true;
		return false;
	}
private:
	int _year;
	int _month;
};
int main()
{
	Date d1(2020, 4);
	Date d2(2020, 5);

	d1 == d2;
	di > d2;  //d1.operator>(d2)
	return 0;
}
