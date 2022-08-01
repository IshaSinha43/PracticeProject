#include "File.h"

void FILES::PrintFileWrite()
{
	char arr[100];
	cout << "enter your name and age" << endl;
	cin.getline(arr, 100);
	ofstream myFile("abc.bin", ios::binary);
	myFile << arr;
	myFile.close();
	cout << "File write operation successfully prformed" << endl;
}

void FILES::PrintFileRead()
{
	char arr1[100];
	cout << "Reading From File started" << endl;
	ifstream myFile("abc.exe", ios::binary);
	if (!myFile.is_open()) 
	{
		return;
	}
		
		
	myFile.getline(arr1, 100);
	cout << "Inputs Are: " << arr1 << endl;
	myFile.close();
}




		

