/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void swap(int &a, int &b)
{
    
    a=a+b;
    b=a-b;
    a=a-b;
}
void change(int *a, int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}

int main()
{
    int a=10, b=20;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    change(&a,&b);
    cout<<a<<" "<<b;
    return 0;
}