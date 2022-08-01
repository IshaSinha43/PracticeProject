#pragma once
#include<iostream>
#include<string.h>
using namespace std;
			//for subscript operator
namespace OOPS
{
	const int size = 10;
	class Abstract
	{
	public:
		virtual void disp() = 0;
	};

	class  A :public Abstract
	{
	private:
		int num, num1;
	public:
		void Afunc();
		void Afunc(int x);
		void Afunc(double x);
		void disp();
			

		virtual void display(); // for virtual function
		

	
		A(int n=0,int m=0)
		{
			num = n;
			num1 = m;
		}
		//operator overloading

		A operator + (A const& obj)
		{
			A result;
			result.num = num + obj.num;
			result.num1 = num1 + obj.num1;
			return result;
		}
		void Disp();
	};

	class B :public A
	{
	private:int value;

	public:

		B() : value(5)
		{

		}
		void operator ++()
		{
			++value;
		}
		void Show();
		void Bfunc();
		void display();
	
	};

	class C :public A
	{
	private: int num; int num1;
	public:
		void Cfunc();
		C()			//Default constructor
		{
			num = 0;
			num1 = 0;
			cout << "constructor is called" << endl;
			disp1();
		}
		C(int n, int m)		//Parameterised Constructor
		{
			num = n;
			num1 = m;
		}
		
		virtual ~C()			//Destructor
		{
			cout << "Destructor is called" << endl;
			disp1();
		}
		virtual void disp1(); 
		void Number();

		// overloaded minus (-) operator
		C operator- () {
			num = -num;
			num1 = -num1;
			return C(num, num1);
		}
		
		void Func1()
		{
			disp1();
		}

	};



	class D :public B,public C
	{
	public:
		void Dfunc();
		D()
		{
			cout << " constructor of derived class is called" << endl;
		}
		~D()
		{
			cout << " destructor of derived class is called" << endl;
		}
		void disp1()
		{
			cout << "Derived class method called" << endl;
		}
	};

	class E :public B
	{
	private: int arr[size];
	public:
		void Efunc();
		E()			//Default constructor
		{

			//Register variables tell the compiler to store the variable in CPU register instead of memory. 

			register int i;
			for (i = 0; i < size; i++)
			{
				arr[i] = i;
			}
		}
		int& operator[](int i)	//[] operator overloading
		{
			if ( i > size)
			{
				cout << "Index out of bound" << endl;
				return arr[0];
			}
			return arr[i];
		}

	};

	class F :public C
	{
	private:
		int marks;
	public:
		F(){}
		F(int m)
		{
			marks = m;
		}
		void Ffunc();
		void PrintMarks();
		//-> operator overloading
		F * operator->()
		{
			return this;
		}
	};


	class G :public C
	{
	public:
		void Gfunc();

	};
	void PrintInheritance();
	void PrintPolymorphism();
	void PrintVirtualFunction();
	void PrintAbstractClass();
	void PrintAbstractWithConsDes();
}












