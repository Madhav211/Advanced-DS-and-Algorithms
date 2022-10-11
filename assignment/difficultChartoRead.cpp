#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=(int)'a';
    cout<<n;
    int f[27]={0};
    for(int i=0;i<s.length();i++)
    {
        f[s[i]-97]++;
    }
    int max=0;
    char ch='z';
    for(int i=0;i<26;i++)
    {
        if(f[i]==0)
        cout<<ch;
        ch--;
        if(f[i]>max)
        max=f[i];

    }
    while(max>0)
    {
        char ch='a';
        for(int i=0;i<26;i++)
        {
            if(f[i]==max)
            cout<<ch;
            ch++;
        }
        max--;
    }
    cout<<endl<<max;
}
