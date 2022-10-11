#include <iostream>

using namespace std;

int main()
{
    int n,x;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) 
    cin>>a[i];
    int left=0, right =n-1;
    while(left<right)
    {
        while(a[left]%2==0)
        left++;
        while(a[right]%2!=0)
        right--;
        if(left>right){
            break;
        }
        int t=a[left];
        a[left]=a[right];
        a[right]=t;
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}