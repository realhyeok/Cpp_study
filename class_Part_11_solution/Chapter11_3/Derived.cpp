#include <iostream>

using namespace std;

//class Mother
//{
//public:
//		int m_i;
//
//		Mother(const int& mom = 0)
//			: m_i(1)
//		{
//			cout << "Mother constructor" << endl;
//		}
//};
//
//class Child : public Mother
//{
//public:
//	double m_d;
//public:
//	Child()
//		: Mother(1024), m_d(1.0)
//	{
//		cout << "Child constructor" << endl;
//	}
//};

class A
{
public:
	A()
	{
		cout << "A constructor" << endl;
	}
};

class B : public A
{
public:
	B()
	{
		cout << "B constructor" << endl;
	}
};

class C : public B
{
public:
	C()
	{
		cout << "C constructor" << endl;
	}
};


int main()
{
	

	return 0;
}