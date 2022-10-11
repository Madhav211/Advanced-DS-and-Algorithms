#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
    
};
struct node *head=NULL;
void insert_at_pos(int n, int k)
{
    struct node* a=(struct node*)malloc(sizeof(struct node));
    a->data=n;
    a->next=NULL;
    struct node* t=head;
    for(int i=0;i<k-2;i++)
    {
        if(t->next!=NULL)
        t=t->next;
    }
    a->next=t->next;
    t->next=a;
}
void insert_at_end(int n)
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
void del_at_end()
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
           cout<<"True"<<endl;
           return;
        }
        t=t->next;
    }
    cout<<"False"<<endl;
}
void del_at_beg()
{
    head=head->next;
}
void del_at_pos(int pos)
{
    struct node *t=head;
    for(int i=0;i<pos-1;i++)
    {
        if(t!=NULL)
        t=t->next;
    }
    t->next=t->next->next;
}
void insert_at_beg(int n)
{
    struct node *a=(struct node*)malloc(sizeof(struct node));
    a->data=n;
    a->next=head->next;
    head->next=a;
}
void length()
{
    int count=0;
    struct node *t=head;
    while(t!=NULL)
    {
        count++;
        t=t->next;
    }
    cout<<"The length of the list:"<<count<<endl;
}

int main()
{
    int choice;
    while(1)
    {
        cout<<"1. Insert at Begening"<<endl<<"2. Inser at end"<<endl<<"3. Insert at position"<<endl<<"4. Delete at end"<<endl
        <<"5. Delete at Begening"<<endl<<"6. Delete at position"<<endl<<"7. Length"<<endl<<"8. Display"
        <<endl<<"9. search"<<endl<<endl<<"Enter your Choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"Enter the element to insert"<<endl;
                int n;
                cin>>n;
                insert_at_beg(n);
                break;
            case 2:
                cout<<"Enter the element to insert"<<endl;
                cin>>n;
                insert_at_end(n);
                break;
            case 3:
                cout<<"Enter the element to insert"<<endl;
                int p;
                cin>>n;
                cout<<"Enter the position"<<endl;
                cin>>p;
                insert_at_pos(n,p);
                break;
            case 4:
                del_at_end();
                break;
            case 5:
                del_at_beg();
                break;
            case 6:
                cout<<"Enter the position"<<endl;
                cin>>n;
                del_at_pos(n);
                break;
            case 7:
                length();
                break;
            case 8:
                display();
                break;
            case 9:
                cout<<"Enter element to search"<<endl;
                cin>>n;
                search(n);
                break;
            default:
                cout<<"Invalid";
                return 0;
                
        }
    }
    
    return 0;
}