#include <iostream>
using namespace std;
#define MAX 5
int Queue[MAX];
int front=-1;
int rear=-1;

int enQueue ()
{
    int item;
    if ((rear+1)%MAX==front) //Queue Full
        cout<<"Queue is Full."<<endl;
    else if (front==-1 && rear==-1) //Queue Empty
    {
        front=0;
        rear=0;
        cout<<"Enter the value: ";
        cin>>item;
        Queue[rear]=item;
    }
    else
    {
        rear=(rear+1)%MAX;
        cout<<"Enter the value: ";
        cin>>item;
        Queue[rear]=item;
    }
}

int deQueue ()
{
    if (front==-1 && rear==-1) //Queue Empty
        cout<<"Queue is Empty."<<endl;
    else if (front==rear) //only one element present
    {
        cout<<"Poped item: "<<Queue[front]<<endl;
        front=-1;
        rear=-1;
    }
    else
    {
        cout<<"Poped item: "<<Queue[front]<<endl;
        front=(front+1)%MAX;
    }
}

int display()
{
    int i=front;
    if (front==-1 && rear==-1) //Queue Empty
        cout<<"Queue is empty."<<endl;
    else
    {
        cout<<"Queue is: ";
        while (i!=rear)
        {
            cout<<Queue[i]<<" ";
            i=(i+1)%MAX;
        }
        cout<<Queue[rear]<<endl;
    }
}

int main ()
{
    int ch;
    do
    {
        cout<<"\n";
        cout<<"1 for enQueue"<<endl;
        cout<<"2 for deQueue"<<endl;
        cout<<"3 for display"<<endl;
        cout<<"0 for exit."<<endl;
        cout<<"Enter choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                enQueue();
                break;
            case 2:
                deQueue();
                break;
            case 3:
                display();
                break;
            case 0:
                cout<<"THANK YOU."<<endl;
                break;
            default:
                cout<<"Check Again."<<endl;
        }
    }while (ch!=0);
    return 0;
}


