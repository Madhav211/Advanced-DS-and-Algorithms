// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    string s1, s2;
    int f1[27]={0},f2[27]={0};
    cin>>s1>>s2;
    for(int i=0;i<s1.length();i++)
    {
        int n=(int)s1[i]-96;
        f1[n]++;
    }
    for(int i=0;i<s2.length();i++)
    {
        int n=(int)s2[i]-96;
        f2[n]++;
    }
    for(int i=1;i<=26;i++)
    {
        if(f1[i]!=f2[i])
        {
            cout<<"Not anagram ";
            return 0;
        }
    }
    cout<<"Anagram";
    return 0;
}