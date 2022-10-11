#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
struct node *head=NULL;
void insert(int x)
{
    node *newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=x;
    if(head==NULL)
    head=newNode;
    else
    {
        struct node *p=head;
        while(p->next!=head)
        p=p->next;
        p->next=newNode;
    }
        newNode->next=head;
    
}
void display()
{
    node *p=head;
    while(p->next!=head)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<p->data;
}
void del()
{
    node *p=head;
    while(p->next!=head)
    {
        p=p->next;
    }
    p->next=head;
}
int main()
{
    insert(8);
    insert(0);
    insert(77);
    insert(4);
    insert(7);
    del();
    display();
    return 0;
}