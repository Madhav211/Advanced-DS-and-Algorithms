#include<iostream>
using namespace std;
int main()
{
  //Type your code here.
  string s;
  getline(cin,s);
  cout<<"The string is "<<s;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  //Type your code here.
  string s;
  getline(cin,s);
  cout<<"The reversed String is ";
  for(int i=s.length()-1;i>=0;i--)
    cout<<s[i];
  cout<<".";
  
}
#include <bits/stdc++.h>
using namespace std;
// Function to find the sum of all  numbers present in the string
int calculate_sum(string str)
{
	string temp = "";   // intitialize temp
	int sum = 0;  // initialize sum
	for (char ch: str)   // traverse the characters one by one
	{
		if (isdigit(ch))  // if the character is a digit
			temp += ch;  // add that character to temp
		else
		{
			sum += atoi(temp.c_str());  // add it with sum
			temp = "";
		}
	}
	return sum + atoi(temp.c_str());  // return the sum
}
int main()
{
	string str;
	cin >> str;  // input the string from the user.
	cout <<calculate_sum(str);
	return 0;
}
#include<iostream>
using namespace std;
int main()
{
  //Type your code here.
  string s;
  cin>>s;
  int f[52]={0};
  for(int i=0;i<s.length();i++)
  {
    if(islower(s[i]))
    f[s[i]-71]++;
    else
    f[s[i]-65]++;
  }
  char ch='A';
  for(int i=0;i<26;i++)
  {
    if(f[i]>0)
      cout<<ch<< " "<<f[i]<<endl;
    ch++;
  }
  ch='a';
  for(int i=26;i<52;i++)
  {
    if(f[i]>0)
      cout<<ch<<" "<<f[i]<<endl;
    ch++;
  }
}
#include<iostream>
using namespace std;
int main()
{
  string s;
  cin>>s;
  for(int i=0;i<s.length();i++)
  {
    int f=1;
    for(int j=0;j<s.length();j++)
    {
      if(i!=j)
      {
        if(s[i]==s[j])
          f=0;
      }
    }
    if(f==1)
    {
      cout<<s[i];
      return 0;
    }
  }
  cout<<"All the characters are repetitive";
}
#include<iostream>
using namespace std;
int vowel(char ch)
{
  ch=tolower(ch);
  if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    return 1;
  return 0;
}
int main()
{
  string s;
  getline(cin,s);
  int v=0, c=0, w=0, d=0, sy=0;
  for(int i=0;i<s.length();i++)
  {
    if(s[i]==' ')
      w++;
    else if(isdigit(s[i]))
      d++;
    else if(!isalpha(s[i]) && !isdigit(s[i]))
      sy++;
    else if(vowel(s[i]))
      v++;
    else
      c++;
  }
    cout<<"Vowels:"<<v<<endl;
    cout<<"Consonants:"<<c<<endl;
    cout<<"White Spaces:"<<w<<endl;
    cout<<"Digits:"<<d<<endl;
    cout<<"Symbols:"<<sy<<endl;

}
#include<iostream>
using namespace std;
int main()
{
  //Type your code here.
  string a, b;
  cin>>b;
  cout<<b<<endl;
  while(1)
  {
    cin>>a;
    if(a[0]==b[b.length()-1])
      cout<<a<<endl;
    else
      return 0;
    b=a;
  }
    
}
#include<iostream>
using namespace std;
int main()
{
  //Type your code here. 
  string s;
  cin>>s;
  for(int i=0;i<s.length();i++)
    if(isalpha(s[i]))
       cout<<s[i];
}
#include<iostream>
using namespace std;
int main()
{
  //Type your code here.
  string s1,s2;
  cin>>s1>>s2;
  for(int i=0;i<s2.length();i++)
  {
    int f=1;
    for(int j=0;j<s1.length();j++)
    {
      if(s2[i]==s1[j])
        f=0;
      }
    if(f)
      cout<<s2[i];
    }
}
#include<iostream>
using namespace std;
int main()
{
	//Type your code here.
  string s;
  cin>>s;
  for(int i=0;i<s.length();i++)
  {
    if(islower(s[i]))
      s[i]=toupper(s[i]);
    else
      s[i]=tolower(s[i]);
    cout<<s[i];
  }
}