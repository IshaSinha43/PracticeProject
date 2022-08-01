#include "Oops.h"

void OOPS::A::Afunc()
{
	cout << "Function A " << endl;
}

void OOPS::A::Afunc(int x)
{

	cout << "Function A with int argument" << endl;
}

void OOPS::A::Afunc(double x)
{
	cout << "Function A with double argument" << endl;
}

void OOPS::A::disp()
{
	cout << "Abstract class" << endl;
}

void OOPS::A::display()
{
	cout << "Base class is invoked" << endl;	
}

void OOPS::A::Disp()
{
	cout << num << num1 << endl;
}

void OOPS::B::Show()
{
	cout << "count: " << value <<endl;
}

void OOPS::B::Bfunc()
{
	cout << "Function B"<<endl;
}

void OOPS::B::display()
{
	cout << "Derived Class is invoked" << endl;
}

void OOPS::C::Cfunc()
{
	cout << "Function c " << endl;
}

void OOPS::C::disp1()
{
	cout << "virtual function of base class called" << endl;
	
}

void OOPS::C::Number()
{
cout << "For - operator: " << "n" << num << " m:" << num1 << endl;
}

void OOPS::D::Dfunc()
{
	cout << "Function D " << endl;
}

void OOPS::E::Efunc()
{
	cout << "Function E " << endl;
}

void OOPS::G::Gfunc()
{
	cout << "Function G " << endl;
}

void OOPS::F::Ffunc()
{
	cout << "Function F " << endl;
}

void OOPS::F::PrintMarks()
{
	cout << "You got: " << marks << "marks" << endl;
}

void OOPS::PrintInheritance() {
	A a;
	B b;
	C c;
	D d;
	E e;
	F f;
	G g;
	
	a.Afunc();

	b.Afunc(); 
	b.Bfunc();


	c.Cfunc();
	c.Afunc();


	d.Bfunc();
	d.Dfunc();
	//d.Afunc();

	e.Efunc();
	e.Bfunc();
	e.Afunc();
	
	f.Ffunc();
	f.Cfunc();
	f.Afunc();

	g.Gfunc();
	g.Cfunc();
	g.Afunc();
	
}

void OOPS::PrintPolymorphism()
{

	//same name but have different no of parameters or different type of parameter.
	A a; 
	a.Afunc();
	a.Afunc(4);			//Function overloading
	a.Afunc(2.3);			//Function overloading
	A a1(12, 2), a2(8, 1);
	A a3 = a1 + a2;
	a3.Disp();

	B b;
	++b;
	b.Show();


	C c1(11, -10), c2(-5, 11);
	-c1;           // apply negation
	c1.Number();    // display D1

	-c2;                  // apply negation
	c2.Number();    // display D2

	//for [] opertaor overloading
	E e;
	cout << "value of e[2]: " << e[2] << endl;
	cout << "value of e[7]: " << e[7] << endl;
	cout << "value of e[12]: "<<e[12] << endl;

	F mark(70);
	mark.PrintMarks();
	mark->PrintMarks();

}

void OOPS::PrintVirtualFunction()
{

	A* base;    //pointer of base class    
	B derived;     //object of derived class    
	base = &derived;
	base->display();
	C* c = new D;
	delete c;
}

void OOPS::PrintAbstractClass()
{
	B b;
	A* a = &b;
	a->disp();
}

void OOPS::PrintAbstractWithConsDes()
{
	D d;
	d.disp1();
}

