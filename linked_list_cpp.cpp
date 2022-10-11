#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
    
};
struct node *head=NULL;
void insert(int n)
{
    struct node* a=(struct node*)malloc(sizeof(struct node));
    a->data=n;
    a->next=NULL;
    if(head==NULL)
    {
        head=a;
    }
    else
    {
        struct node* t;
        t=head;
        while(t->next!=NULL)
        t=t->next;
        t->next=a;

    }
}
void display()
{
    struct node* t=head;
    while(t!=NULL)
    {
    cout<<t->data<< " ";
    t=t->next;
    }
    
}
void delet()
{
    struct node *t=head;
    while(t->next->next!=NULL)
    t=t->next;
    t->next=NULL;
}
void search(int n)
{
    struct node *t=head;
    while(t!=NULL)
    {
        if(t->data==n)
        {
           cout<<"True";
           return;
        }
        t=t->next;
    }
    cout<<"False";
}

int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    search(4);
    delet();
    display();
    
    return 0;
}