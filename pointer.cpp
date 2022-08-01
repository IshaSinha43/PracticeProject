
#include"pointer.h" 

void  Pointers::PointersCpp::swap(int i, int j) //Call by value
{
int temp = i;
i= j;
j = temp;
}

void Pointers::PointersCpp::swap2(int *a, int *b)//call by pointer
{ 
	int temp =*a;
	*a = *b;
	*b = temp;
}

void Pointers::PointersCpp::swapref(int& x, int&y)//call by reference
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int Pointers::PointersCpp::mul(int a,int b)
{
    return a * b;

}

Pointers::PointersCpp::PointersCpp()
{

}

void Pointers::PointersCpp::PointerArithmetic()
{
   int var = 10;
    // A pointer variable that holds address of var.

    int* ptr = &var;
 
    cout << "Address of var : " << &var << endl;

    cout << "value of Var :" << *ptr << endl;
    // Value at address is now 20
    var = 20;

    cout << "After doing *ptr = 20, *ptr is: " << *ptr << endl;
    //Pointer Airthematic(increment operator) 
    ptr++;
    cout << "After increment 0f ptr Address of var is : " << ptr << endl;
}

void Pointers::PointersCpp::PrintPointer()
{

    //call by value
    int i, j;
    cout << "Enter First no. " << endl;
    cin >> i;
    cout << "Enter second no. " << endl;
    cin >> j;
    swap(i, j);
    cout<<"value of i is: "<< i << "  " << endl;
    cout<< "value of j is: " << j << "  " << endl;
   




  //call by pointer

    int a = 10, b = 20;
    cout <<"value of a is:"<< a << endl;
    cout << "value of b is:" << b << endl;
   
    swap2(&a, &b);//call by pointer

    cout <<"after swapping value of a is:"<< a << endl;
    cout << "after swapping value of b is: " << b << endl;


 //call by reference
    int x, y ,sum=0;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;
    cout << endl << "Before swapping: ";
    cout << "x= " << x<< " and x= " << y<<endl;
  
    swapref(x, y);      // call by reference
    cout << endl << "After swapping: ";
    cout << "x= " << x << " and y= " << y<<endl;
    sum = x + y;
    cout << "sum of the no is :" << sum << endl;

}



//
void Pointers::PointersCpp::PrintParaCount(const char* str)
{

    int count = 0, len;
    len = strlen(str);
    cout << len << endl;

    char words[800][128];
    int count1 = 0, count2 = 0;

    for (int i = 0; i < len; i++)
    {
        char c = str[i];

        if (c == ' ')
        {
            count++;
            words[count1][count2] = '\0';
            count1++;
            count2 = 0;



        }

        else
        {
            words[count1][count2] = c;
            count2++;

        }


    }
    for (int i = 0; i < count1; i++) {
        cout << &words[i][0] << endl;

    }
    for (int i = 0; i < count1; i++) {

        if (i % 4 == 0) {
            cout << endl;
            cout << &words[i][0] << " ";
        }
        else {
            cout << &words[i][0] << " ";

        }
    }
  
}


