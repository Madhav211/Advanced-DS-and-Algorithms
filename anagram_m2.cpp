// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    string s1, s2;
    cin>>s1>>s2;
    for(int i=0;i<s1.length();i++)
    {
        for(int j=0;j<s2.length();j++)
        {
            if(s1[i]==s2[j])
            {
                s1[i]='*';
                s2[j]='*';
            }
        }
    }
    if(s1==s2)
    cout<<"Anagram ";
    else
    cout<<"Not Anagram ";
    return 0;
}