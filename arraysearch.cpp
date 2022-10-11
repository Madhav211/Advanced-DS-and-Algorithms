#include <iostream>

using namespace std;

int main()
{
    int n,x;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) 
    cin>>a[i];
    cout<<"Search Element ";
    cin>>x;
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            cout<<x<<" is found";
            return 0;
        }
    }
    cout<<"Element not found";
}
