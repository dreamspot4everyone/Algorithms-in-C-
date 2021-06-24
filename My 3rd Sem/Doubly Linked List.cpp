#include <iostream>
#include <stdlib.h>
using namespace std;

struct node{
int data;
struct node *next;
struct node *prev;
};
struct node *head,*tail;

void insert_begin(int val)
{
    struct node *new_node;
    new_node=(struct node *)malloc(sizeof(struct node));
    new_node->data=val;
    new_node->next=0;
    new_node->prev=0;
    if (head==0)
    {
        head=new_node;
        tail=new_node;
    }
    else
    {
        head->prev=new_node;
        new_node->next=head;
        head=new_node;
    }
}

void insert_end(int val)
{
    struct node *new_node;
    new_node=(struct node *)malloc(sizeof(struct node));
    new_node->data=val;
    new_node->next=0;
    new_node->prev=0;
    if (head==0)
    {
        head=new_node;
        tail=new_node;
    }
    else
    {
        tail->next=new_node;
        new_node->prev=tail;
        tail=new_node;
    }
}

void del_begin()
{
    struct node*temp;
    if(head->next==0)
    {
        cout<<"deleted element is: "<<head->data<<endl;
        temp=head;
        free(temp);
        head=0;
    }
    else
    {
        temp=head->next;
        temp->prev=0;
        struct node*d=new node();
        d=head;
        cout<<"deleted element is: "<<head->data<<endl;
        head=head->next;
        free(d);
    }
}

void del_end()
{
    struct node *temp;
    if(head->next==0)
    {
        cout<<"deleted element is: "<<head->data<<endl;
        temp=head;
        free(temp);
        head=0;
    }
    else
    {
        temp=head;
        while(temp->next->next!=0)
            temp=temp->next;
        struct node*t=new node();
        t=temp->next;
        temp->next=0;
        cout<<"deleted element is: "<<t->data<<endl;
        free(t);
    }
}

void display()
{
    struct node *temp;
    temp=head;
    while (temp->next!=0)
    {
        cout<<temp->data<<"<->";
        temp=temp->next;
    }
    cout<<temp->data<<endl;
}

int main ()
{
    int choice,value;
    head=0;
    tail=0;
    do{
        cout<<"1 for insert at beginning"<<endl;
        cout<<"2 for insert at end"<<endl;
        cout<<"3 for display"<<endl;
        cout<<"4 for delete from beginning"<<endl;
        cout<<"5 for delete from end"<<endl;
        cout<<"0 to exit"<<endl<<"Enter choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"Enter the data: ";
                cin>>value;
                insert_begin(value);
                break;
            case 2:
                cout<<"Enter the data: ";
                cin>>value;
                insert_end(value);
                break;
            case 3:
                if (head==0 || tail==0)
                    cout<<"List is empty."<<endl;
                else
                    display();
                cout<<endl;
                break;
            case 4:
                if (head==0)
                    cout<<"List is empty."<<endl;
                else
                    del_begin();
                break;
            case 5:
                if (head==0)
                    cout<<"List is empty."<<endl;
                else
                    del_end();
                break;
            case 0:
                return 0;
        }
    }while (choice<6);
    return 0;
}
