// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int len=n%2!=0?n-1:n;
    for(int i=0;i<len;i+=2)
    {
        int t=a[i];
        a[i]=a[i+1];
        a[i+1]=t;
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}