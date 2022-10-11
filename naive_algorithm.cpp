#include <iostream>
using namespace std;

int main() 
{
  string s;
  getline(cin,s);
  string sub;
  cin>>sub;
  int m=s.length();
  int n=sub.length();
  for(int i=0;i<=m-n;i++)
  {
    int j;
    for( j=0;j<n;j++)
    {
      if(s[i+j]!=sub[j])
        break;
    }
    if(j==n)
      cout<<"Pattern found at index "<<i;
  }
}