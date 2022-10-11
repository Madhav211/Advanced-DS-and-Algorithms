#include<iostream>
using namespace std;
int sum(int n)
{
  int s=0;
  if(n==0)
    return s;
  else 
    s=n+sum(n-1);
}
int main()
{
  //Type your code here.
  int n;
  cin>>n;
  int x=sum(n);
  cout<<x;
}
#include<iostream>
#include<math.h>
using namespace std;
int isprime(int n,int i)
{

  if(n==1 || n==2||n==3)
    return 1;

  if(n%i==0)
    return 0;
  if(i<sqrt(n))
    return 1;
  else
    return isprime(n,i+1);
}
int main()
{
  //Type your code here.
  int n;
  cin>>n;
  if(isprime(n,2))
    cout<<"Prime Number";
    else
      cout<<"Not a Prime Number";
}
4
#include<iostream>
using namespace std;
int s(int a[],int n)
{
  int i;
  static int sum=0;
  if(n>0)
  {
    i=n-1;
    sum+=a[i];
    s(a,i);
  }
  return sum;
}

int main()
{
  //Type your code here.
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
  int sum=s(a,n);
  cout<<sum;
}
#include<iostream>
using namespace std;
long fact(int n)
{
  if(n==1)
    return 1;
  else
    return n*fact(n-1);
}
int main()
{
  //Type your code here.
  int n;
  cin>>n;
  cout<<"The factorial of "<<n<<" is "<<fact(n);
}
#include<iostream>
using namespace std;
int fib(int n, int a, int b)
{

  if(n>0)
    return fib(n-1,b,a+b);
   else
    return b;
}
int main()
{
  //Type your code here.
  int n;
  cin>>n;
  cout<<"The term "<<n<<" in the fibonacci series is "<<fib(n-2,0,1);
}
#include<iostream>
using namespace std;
int sum(int n)
{
  int s=0;
  if(n==0)
    return s;
  else
   s+=n%10+sum(n/10);
}
int main()
{
  //Type your code here.
  int n;
  cout<<"Enter the value of n"<<endl;
  cin>>n;
  int x=sum(n);
  cout<<"The sum of digits in "<<n<<" is "<<x;
  
}
#include<iostream>
using namespace std;
int odd(int a[], int n)
{
  int i=0;
  static int sum=0;
  if(n>0)
  {
    i=n-1;
    if(a[i]%2!=0)
      sum+=a[i];
    odd(a,i);
  }
  else
    return sum;
      
}
int main()
{
  //Type your code here.
  int n;
  cout<<"Enter the number of elements in the array"<<endl;
  cin>>n;
  int a[n];
  cout<<"Enter the elements in the array"<<endl;
  for(int i=0;i<n;i++)
    cin>>a[i];
  int sum=odd(a, n);
  cout<<"The sum of the odd elements in the array is "<<sum;
  
}
#include<iostream>
using namespace std;
int digits(int n)
{
  static int count =0;
  if(n==0)
    return count;
  else
  {
    count++;
    return digits(n/10);
  }
}
int main()
{
  //Type your code here.
  int n;
  cout<<"Enter the value of n"<<endl;
  cin>>n;
  int x=digits(n);
  cout<<"The number of digits in "<<n<<" is "<<x;
}
#include<iostream>
using namespace std;
int s(int a[], int n)
{
  int i;
  static int sum=0;
  if(n>0)
  {
    i=n-1;
    if(a[i]%2==0)
      sum+=a[i];
    return s(a,i);
  }
  return sum;
}
int main()
{
  //Type your code here.
  int n;
  cout<<"Enter the number of elements in the array"<<endl;
  cin>>n;
  int a[n];
  cout<<"Enter the elements in the array"<<endl;
  for(int i=0;i<n;i++)
    cin>>a[i];
  int x=s(a,n);
    cout<<"The sum of the even elements in the array is "<<x;
  
}