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

class Person //Ĭ��˽��  structĬ�Ϲ���
{
public:
	void Print() // ���������������棬Ĭ������������
	{
		cout << " " << endl;
	}

private:   //�ᱻ����Ϊ˽�л�����˽ ���ܱ�����
	char _name[10];
	int _age;
};

int main()
{

}
