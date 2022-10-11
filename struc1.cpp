#include<iostream>
using namespace std;
struct student
{
  int rn, s1,s2,s3,s4,s5,grade;
  int avg;
}name;
int main()
{
  //Type your code here.
  cout<<"STUDENT MARKSHEET USING STRUCTURES"<<endl;
  int n;
  cin>>n;
  cout<<"Enter the no of students"<<endl;
      cout<<"rn s1 s2 s3 s4 s5 avg grade"<<endl;
  while(n)
  {
    cin>>name.rn>>name.s1>>name.s2>>name.s3>>name.s4>>name.s5;

    name.avg=(name.s1+name.s2+name.s3+name.s4+name.s5)/5.0;
    int grade;
    if(name.avg>70)
      grade=1;
    else if(name.avg>50)
      grade=2;
    else
      grade=3;
    cout<<name.rn<<" "<<name.s1<<" "<<name.s2<<" "<<name.s3<<" "<<name.s4<<" "<<name.s5
      <<" "<<name.avg<<" "<<grade<<endl;
    n--;
  }
}