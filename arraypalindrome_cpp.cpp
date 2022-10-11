// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n, f=1, start, end;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n/2;i++)
    {
        if(a[i]!=a[n-1-i])
        f=0;
    }
    if(f)
    {
    cout<<"palindrome ";
    return 0;
    }
    int i=0,j=n-1;
    while(i<=j)
    {
        if(a[i]==a[j])
        {
            i++;
            j--;
        }
        else if(a[i]>a[j])
        {
            j--;
            end=j;
            a[j]+=a[j+1];
        }
        else if(a[i]<a[j])
        {
            i++;
            start=i;
            a[i]+=a[i-1];
        }
    }
    for(int k=start;k<=end;k++)
        cout<<a[k]<<" ";
}
