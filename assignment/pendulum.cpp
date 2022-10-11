#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int i=0, j=n-1;
    while (i<j)
    {

        int max=0, i1=0, i2=0, smax=0;
        for(int ctr=i;ctr<=j;ctr++)
        {
            if(a[ctr]>max)
            {
                max=a[ctr];
                i1=ctr;
            }
        }
        swap(a[i],a[i1]);
        for(int ctr=i;ctr<=j;ctr++)
        {
            if(a[ctr]>smax && a[ctr]<max)
            {
                smax=a[ctr];
                i2=ctr;
            }
        }
        swap(a[j],a[i2]);
        i++;
        j--;
    }
    
    for(int ctr=0;ctr<n;ctr++)
    cout<<a[ctr]<<" ";
    cout<<endl;
    
    
}