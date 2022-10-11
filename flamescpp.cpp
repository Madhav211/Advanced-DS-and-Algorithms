#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string s1, s2;
    cin>>s1;
    cin>>s2;
    for(int i=0;i<s1.length();i++)
    {
        for(int j=0;j<s2.length();j++)
        {
            if(s1[i]==s2[j])
            {
                s1[i]='*';
                s2[j]='*';
                break;
            }
        }
    }
    int sum=0;
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]!='*')
        {
            sum+=(int)s1[i];
        }
    }
    for(int i=0;i<s2.length();i++)
    {
        if(s2[i]!='*')
        {
            sum+=(int)s2[i];
        }
    }
    cout<<sum;
}