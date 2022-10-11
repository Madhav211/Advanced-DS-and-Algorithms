#include<iostream>
using namespace std;
class student
{
  public: string name;
          int num;
  		  int per;
  public:    void set()
   {
     cin>>name;
     cin>>num;
     cin>>per;
   }
    public:    void get()
   {
     cout<<name<<endl;
     cout<<num<<endl;
     cout<<per<<"%";
   }
};
class details
{
 public:student s1;
 public: details()
 {
   s1.set();
   s1.get();
  
 }
};
int main()
{
	//type your code here;
    details s;
 
	return 0;
}