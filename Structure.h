//structure & class & function


#ifndef _STRUCTURE_
#define _STRUCTURE_

#include<iostream>
using namespace std;

//structure1 creation


namespace MATHS
{
    struct Car
    {
        string brand;
        string model;
        int purchase_year = 0;

    };
    //structure2 creation
    struct Owner
    {
        string name;
        string gender;
        string license;
        Car car;//initialise(structure name & object name)
    };


    struct Number
    {
        int num1;
        double num2;
        float num3;
        char nm[129];
        char nm2;
    };

    struct Value
    {
        int a;
        int b;
    };

    double sum(int num1, double num2, float num3);

    void printCarInfo(Car car);

    //Function declaration
    void PrintStructuremalloc();
    void printOwnerInfo(Owner owner);
    void PrintStructure();
    void Print2DArrayStructure();
    void Allocate(int w,int h);
    void Release();
}


#endif

//Comment: 
//When we name a Function, always try to name it in such a way that it represent the current Functionality of function, 
//so funcBike should be named Like PrintBikeInfo.
