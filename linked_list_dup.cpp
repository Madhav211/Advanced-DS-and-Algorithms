#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  node *next;
  node *p;
}*n,*f,*l,*temp;

int add(int data)
{
  temp = new node();
  temp->data=data;
  if(f==NULL)
  {
    f=temp;
    l=temp;
    temp->p=NULL;
  }
  else
  {
    l->next=temp;
    temp->p=l;
    l=temp;
  }
  l->next=NULL;
}

int disp()
{
  temp = new node();
  temp = f;
  while(temp!=NULL)
  {
    cout<<temp->data<<endl;
    temp=temp->next;
  }
}
int chk()
{
  int i=1,data;
  temp = new node();
  temp = f;
  while(temp!=NULL)
  {
    data=temp->data;
    if(data==i)
    {
      cout<<data<<endl;
    }
    i++;
    temp=temp->next;
  }
}
int main()
{
  int a=1;
  while(a>0)
  {
    cin>>a;
    if(a==-1)
    {
      break;
    }
    else
    {
      add(a);
    }
  }
  cout<<"Linked list before removal of duplicates"<<endl;
  disp();
  cout<<"Linked list after removal of duplicates"<<endl;
  chk();
  return 0;
}