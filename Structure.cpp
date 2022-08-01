#include "Structure.h"
//#include "Structure.h"
//
//
//
//void MATHS::printCarInfo(Car car)  //datatype(structure) and object
//{
//    cout << "Brand:" << " " << car.brand << endl;
//    cout << "Model:" << " " << car.model << endl;
//    cout << "Purchse_year:" << " " << car.purchase_year <<endl<< endl;
//
//}
//
////Function creation
//
//void MATHS::printOwnerInfo(Owner owner)  //datatype(structure) and object
//{
//    cout << "Using Structure the output is:" << endl <<  "---------------"<<endl;
//
//    cout << "Name: " << " " << owner.name << endl;
//    cout << "Gender: " << " " << owner.gender << endl;
//    cout << "License: " << " " << owner.license << endl ;
//
//    printCarInfo(owner.car);//function within function
//
//}
//
//
//
//
//void MATHS::PrintStructure()
//{
//    //creation of an object 
//        MATHS::Car car;
//        car.brand = "BMW";
//        car.model = "S1";
//        car.purchase_year = 2020;
//    
//    
//        MATHS::Car car1;
//        car1.brand = "Toyota";
//        car1.model = "SM";
//        car1.purchase_year = 2020;
//    
//        MATHS::Owner owner;
//        owner.name = "isha";
//        owner.gender = "Female";
//        owner.license = "Have";
//        owner.car = car;
//    
//        MATHS::Owner owner1;
//        owner1.name = "Ankita";
//        owner1.gender = "Female";
//        owner1.license = "Dont Have";
//        owner1.car = car1;
//    
//        //function calling
//    
//        MATHS::printOwnerInfo(owner);
//    }
//
//
//
//
//
//
//double MATHS::sum(int num1, double num2, float num3) 
//{
//    return num1 + num2 + num3;
//}
//
//void MATHS::PrintMathStruct()
//{
//
//    MATHS::Number n1;
//    cout << "enter the details of value" << endl;
//
//
//    MATHS::Number* ptr = &n1;
//
//    cout << "size of the strtucture is:" << sizeof(n1) << endl;
//
//    cout << "enter integer no:";
//    cin >> ptr->num1;
//    cout << "enter double no:";
//    cin >> ptr->num2;
//    cout << "enter float no:";
//    cin >> ptr->num3;
//    cout << "enter string value:";
//    cin >> ptr->nm;
//    cout << "enter a char  value: ";
//    cin >> ptr->nm2;
//
//
//    cout << "details of value are as follows:" << endl;
//    cout << "integer value:" << ptr->num1 << endl;
//    cout << " double  value;" << ptr->num2 << endl;
//    cout << "float  value:" << ptr->num3 << endl;
//    cout << "string value:" << ptr->nm << endl;
//    cout << "char  value:" << ptr->nm2 << endl;
//
//
//
//    double(*printSum)(int, double, float) = sum;
//    cout << "sum of all three no.:" << printSum(ptr->num1, ptr->num2, ptr->num3) << endl;
//}
//
//
//



void MATHS::Print2DArrayStructure()
{
	

	Allocate(2, 1);

}

void MATHS::Allocate(int w, int h)
{
	//2D
	Value** val2d = new Value * [h];
	for (size_t i = 0; i < h; i++)
	{
		val2d[i] = new Value[w];

	}

	//1D
	Value* val1d = new Value[w * h];
	for (size_t i = 0; i < w * h; i++)
	{
		val1d[i].a = rand() % 10;
		val1d[i].b = rand() % 10;

		//cout << val1d[i].a << "  ";
		//cout << val1d[i].b << endl;*/

	}

	for (size_t i = 0; i < h; i++)
	{
		val2d[i / h][i % w] = val1d[i];
		val2d[w * (w*h) + h] = val1d;
		cout << val1d << i << endl;
	}
}
	



