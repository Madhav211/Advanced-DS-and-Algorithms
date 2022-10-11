//stack using linked list;
#include <iostream>
using namespace std;
struct node
{
    int data;
    node* next;
}*top=NULL;
void push(int x)
{
    node *newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=x;
    newNode->next=top;
    top=newNode;
}
void pop()
{
    if(top==NULL)
    cout<<"Stack underflow"<<endl;
    else
    {
        top=top->next;
    }
}
void display()
{
    if(top==NULL)
    cout<<"Stack is Empty"<<endl;
    node *temp=top;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    pop();
    display();
    

    return 0;
}
