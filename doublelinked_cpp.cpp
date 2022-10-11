#include <iostream>

using namespace std;
struct node
{
    int data;
    node *prev;
    node *next;
};
struct node *head=NULL;
void insert_at_beg(int x)
{
    struct node *a=(struct node*)malloc(sizeof(struct node));
    a->data=x;
    a->next=NULL;
    if(head==NULL)
        head=a;
    else
    {
        a->next=head;
        head=a;
    }
   
}
void insert(int x)
{
    struct node *a=(struct node*)malloc(sizeof(struct node));
    a->data=x;
    a->next=NULL;
    if(head==NULL)
        head=a;
    else
    {
        node *p=head;
        while(p->next!=NULL)
        {
            p=p->next;
        }
        a->prev=p;
        p->next=a;
    }
}
void del()
{
    node *a=head;
    while(a->next!=NULL)
    {
        a=a->next;
    }
    a->prev->next=NULL;
}
void display()
{
    node *a=head;
    while(a!=NULL)
    {
    cout<<a->data<<" ";
    a=a->next;
    }
}
void length()
{
    node *a=head;
    int count=0;
    while(a!=NULL)
    {
    count++;
    a=a->next;
    }
    cout<<"length :"<<count<<endl;
}
void insert_at_pos(int x, int pos)
{
    struct node *a=(struct node*)malloc(sizeof(struct node));
    a->data=x;
    if(head==NULL)
        head=a;
    else
    {
        node *t=head;
        for(int i=0;i<pos-2;i++)
        {
            if(t->next!=NULL)
                t=t->next;
        }
        a->next=t->next;
        t->next->prev=a;
        t->next=a;
        a->prev=t;
    }
}
int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert_at_beg(4);
    del();
    display();
    length();
    insert_at_pos(7,2);
    display();
}
