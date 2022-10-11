#include <iostream>

using namespace std;

int main()
{
    int n,f=1;
    cin>>n;
    int arr[n], index=0;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<arr[index++]<<" ";
            if(index==n)
            {
                f=0;
                break;
            }
        }
        if(f==0)
        break;
        cout<<"\n";
    }
}