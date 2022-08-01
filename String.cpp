 
#include"String.h"
using namespace std;
void Strings::PrintStringInfo() {
    char str1[20] = "Hello";

    cout << "Greeting message: " << endl;

    cout << str1 << endl;

    char str2[20] = "Morning";
    char str3[20];
    int len;
    int result;
    char Message[50] = "Hey good morning from Beehives sytem";
    char* p;
    cout << str2 << endl;
    //string copy
    strcpy_s(str3, str1);
    cout << str3 << endl;
    //string concatenate
    strcat_s(str1, str2);
    cout << str1 << endl;

    //string length
   len = strlen(str1);
    cout << "lenth of string :" << len << endl;

    //string compare
    result = strcmp(str1, str2);
    cout << "value returned by result" << result << endl;

    p = strchr(Message, 'g');
    cout << p << endl;

    p = strrchr(Message, 'B');
    cout << p << endl;
}

void Strings::PrintMemset()
{
        int n;
        cout <<"input the size of an array" << endl;
        cin >>n;
       
        int* a=new int[n];
        memset(a, 10, sizeof(a));   
        cout << a[2] << endl;;
}

    void Strings::PrintMemset2()
    {
    int val[9];

    // It is used to fill a block of memory with a particular value.i.e,0/-1.
    memset(val, -1, sizeof(val));
    for (int i = 0; i < 9; i++) 
    {
        cout << val[i] << " ";
    }
    cout << endl;
}




void Strings::MemCpy(void* dest, void* src, size_t n)
{
    char* cdest = (char*)dest;
    char* csrc = (char*)src;
    for (int i = 0; i < n; i++)
    {
        cdest[i] = csrc[i];
    }
}
void Strings::PrintMemcpy()
{
    int a[] = { 1,2,3,4,5,6 };
    int b[6];
    MemCpy(b, a, sizeof(a));
    for (int i = 0; i < 6; i++) 
    {
        cout << b[i] << "  ";
        cout << endl;
    }
       
}
