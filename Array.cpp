#include"Array.h"

void ARRAY::PrintArraySum()
{

	int a[3], b[3], c[3], *p1, *p2,*p3, i;
	cout << "Enter the elements of first array: " << endl;
	for (i = 0; i < 3; i++) {
		cin >> a[i];
	}

	cout << "Enter the elements of second array: " << endl;
	for (i = 0; i < 3; i++) {
		cin >> b[i];
	}

	p1 = a;
	p2 = b;
	p3 = c;
	for (i = 0; i < 3; i++) {
		*p3 = *p1 + *p2;

		p1++;
		p2++;
		p3++;
	}

	cout << "Addition of the array are: " << endl;
	for (i = 0; i < 3; i++) {
		cout << c[i] << endl;
	}

}




// testing Memmory Leak.

int ARRAY::PrintArraySumDynamic()
{

	int* arr1 = new int[3];
	int* arr2 = new int[3];
	int* arr = new int[3];


	int i;
	cout << "Enter the elements of first array: " << endl;
	for (i = 0; i < 3; ++i)
	{
		cin >> arr1[i];
	}
	cout << "The numbers are: " << endl;
	for (i = 0; i < 3; ++i)
	{
		cout << arr1[i] << endl;
	}


	cout << "Enter the elements of second array: " << endl;
	for (i = 0; i < 3; ++i)
	{
		cin >> arr2[i];
	}
	cout << "The numbers are: " << endl;
	for (i = 0; i < 3; ++i)
	{
		cout << arr2[i] << endl;
	}

	for (i = 0; i < 3; ++i)
	{
		arr[i] = arr1[i] + arr2[i];
	}
	cout << "The sum of 2 array are: " << endl;
	for (i = 0; i < 3; ++i)
	{
		cout << arr[i] << endl;
	}
	return 0;
}



void ARRAY::PrintMalloc()
{
	

	int len;   // variable declaration  
	cout << "Enter the count of numbers :" << endl;
	cin >> len;
	int* ptr; // pointer variable declaration  
	ptr = (int*)malloc(sizeof(int) * len);  // allocating memory to  the poiner variable  
	for (int i = 0; i < len; i++)
	{
		cout << "Enter a number : " << endl;
		     
	}
	cout << "Entered elements are : " <<endl;
	for (int i = 0; i < len; i++)
	{
		cout << *(ptr + i) << endl;
	}
	free(ptr);



}




void ARRAY::PrintDynamicMemory()
{
	int* pointer = nullptr;
	
	// Request memory for the variable  
	// using new operator  
	 pointer = new(nothrow) int;
	if (!pointer)
		cout << "allocation of memory failed\n";
	else
	{
		// Store value at allocated address  
		*pointer = 20;
		cout << "Value of pointer: " << *pointer << endl;
	}
	// Request block of memory  
	// using new operator  
	int* i = new int(70);
	cout << "Value of i=: " << *i << endl;
	cout << "Address of i " << i << endl;
	double* d= new double(12.34);
	cout << "Value of d=: " << *d << endl;
	cout << "Address of d " << d << endl;
	// Request block of memory of size   
	int size = 5;
	int* arr = new(nothrow) int[size];
	if (!arr)
		cout << "allocation of memory failed\n";
	else
	{
		for (int i = 0; i < size; i++)
			arr[i] = i + 1;

		cout << "Value store in block of memory: ";
		for (int i = 0; i < size; i++)
			cout << arr[i] << " ";
	}

	// freed the allocated memory  
	delete pointer;
	delete d;
	// freed the block of allocated memory  
	delete[] arr;



}


void ARRAY::PrintRandomNum()
{
	int arr1[100]={0};
	int arr2[100] = {0};
	int i;
	for (i=0;i<100;i++)
	{
		arr1[i] = rand() % 100;

	
	
	}
		for(i = 0; i < 100; i++) 
	{
			cout  <<"arr :" << arr1[i] << endl;

	}

		memcpy(arr2, arr1, sizeof(arr1));
		for (int i = 0; i < 100; i++) {
			cout << arr2[i] << " ";

		}
}

void ARRAY::Print2DArray()
{
	int** arry={0};
	int row, col, i, j;

	cout << "Number of Rows:" << endl;
	cin >> row;
	cout << "Number of Columns:" << endl;
	cin >> col;

	//Allocating the row space in heap dynamically
	arry = new int* [row];

	//Allocating the column space in heap dynamically
	for (i = 0; i < row; i++) 
	{
		arry[i] = new int[col];
	}
	
	

	//Giving inputs to the array
	cout << "Enter " << (row * col) << " numbers to the Array\n";
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)

		{
			cout << "Enter the elements at Row " << i + 1 << " Column " << j + 1 << endl;
			cin >> arry[i][j];
		}
	}

	//Display the array
	cout << "Here is your 2D Array:" << endl;
	for (i = 0; i < row; i++) 
	{
		for (j = 0; j < col; j++) 
		{
			cout << arry[i][j] << ' ';
		}
		cout << endl;
	}

	//Free the memory after the use of array
	for (i = 0; i < row; i++)
	{
		delete[] arry[i];
	}

	delete[] arry;



}

























