#pragma once

#ifndef _POINTER_
#define _POINTER_

#include<iostream>
#include<string>

using namespace std;

namespace Pointers
{
	class PointersCpp
	{
	public:
		PointersCpp(); //constructor
		//~PointersCpp();

		void swap(int i, int j);//call by value

		void swap2(int* a, int* b);//call by pointer/address

		void swapref(int& x, int& y);//call by rerefrence //TODO

		int mul(int a, int b); // function pointer 

		
		void PointerArithmetic();
		void PrintPointer();

		void PrintParaCount(const char* str);

		
	
		
		
		

		
		
	};
}
#endif
