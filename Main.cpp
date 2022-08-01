#define _CRT_SECURE_NO_WARNINGS
//#include"pointer.h"
//#include"class.h"
//#include"String.h" 
//#include "Structure.h"
//#include "Main.h"
//#include "constructor.h"
//#include"Array.h"
//#include "File.h"
//#include"BitmapImporter.h"
//#include"Oops.h"
//#include<cmath>
#include "DesignPattern.h"
//void GetData(void* pData, int size)
//{
//    MATHS::Number* data = (MATHS::Number*)pData;
//    //...
//}





int main()
{
    //main functon of class

     /*VEHICLES::PrintVehicleInfo();*/
   


     //main functon of structure

   ///*MATHS::PrintStructure();*/
   //MATHS::PrintMathStruct();
   //MATHS::PrintStructuremalloc();
   // MATHS::Print2DArrayStructure();



   //main functon of string
   ///* Strings::PrintStringInfo();*/
   // Strings::PrintMemset();
   // Strings::PrintMemcpy();
   // Strings::PrintMemset2();
   // 
   //main functon of  constructor

    /*GAME::GamingChannel G;
    G.PrintGamingInfo();

    GAME::GamingChannel gchannel;
    GAME::GamingChannel gchannel2("zenny", 10000000, 1300000, "Isha");
    GAME::GamingChannel gchannel3("jackal", 10000000, 1300000, "Jacky");

    gchannel.DisplayGamingChannel();
    gchannel2.DisplayGamingChannel();
    gchannel3.DisplayGamingChannel();*/



    //main functon of Pointer

   //Pointers::PointersCpp ptr;
   //ptr.PointerArithmetic();

   //Pointers::PointersCpp ptr1;
   // ptr1.PrintPointer();


   //

   // const char str[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur.Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";

   // Pointers::PointersCpp p;


   // p.PrintParaCount(str);
   // 
    
    //Main function of array
   /*ARRAY::PrintArraySum();
    ARRAY::PrintArraySumDynamic();
    ARRAY::PrintDynamicMemory();
    ARRAY::PrintMalloc();*/
   // ARRAY::PrintRandomNum();
   // ARRAY::Print2DArray();



    //FILES::PrintFileWrite();
    //FILES::PrintFileRead();
  /*  
    BitmapImporter btmap;
    try {
        btmap.CreateImage(100, 199, 78, 120, 213);
        btmap.WriteBitmap("d.bmp");
    }*/
                /* btmap.ReadBitmap("bitmap1.bmp");
                 int posx = 50, posy = 50;

                 for (int i = 0; i < 100; i++)
                 {
                     for  (int j = 0; j < 100; j++)
                     {
                         if (sqrt((i - 50) * (i - 50) + (j - 50) * (j - 50)) < 50)
                         {
                             btmap.SetPixel(j+posx, i+posy, 199, 8, 30);
                         }
                     }
                 }*/

    //main functon of OOPS
   // OOPS::PrintInheritance();
   // OOPS::PrintPolymorphism();
   // OOPS::PrintVirtualFunction();
   // OOPS::PrintAbstractClass();
   // OOPS::PrintAbstractWithConsDes();
    DESIGNPATTERN::PrintSingleton();
    DesignPattern2::PrintFactoryMethod();
    DesignPattern3::PrintAbstractMethod();
    system("pause");


    return 0;
}















