#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string s1, s2;
    cin>>s1;
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    string s;
    int n;
    char c;
    cin>>s>>n>>c;
    if(c=='l')
    {
        for(int i=n;i<s.length();i++)
            cout<<s[i];
        for(int i=0;i<n;i++)
            cout<<s[i];
    }
    else if(c=='r')
    {
        for(int i=s.length()-1-n+1;i<s.length();i++)
            cout<<s[i];
        for(int i=0;i<s.length()-1-n;i++)
            cout<<s[i];
    }
    return 0;
}