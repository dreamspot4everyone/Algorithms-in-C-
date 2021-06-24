#include <iostream>
#include <stack>
using namespace std;

int compare (stack<int> stack1, stack<int> stack2)
{
    int flag=1;
    if (stack1.size()!=stack2.size()) // Check if size of both stacks are same
    {
        flag=0;
        return flag;
    }
    while (!(stack1.empty()))
    {
        if (stack1.top()==stack2.top()) // If the top of both stacks are same pop top of both stacks
        {
            stack1.pop();
            stack2.pop();
        }
        else
        {
            flag=0;
            break;
        }
    }
}

int main()
{
    stack<int> stack1;
    stack<int> stack2;
    int m,n;
    int a[20],b[20];
    cout<<"Enter size of first stack: ";
    cin>>m;
    for (int i=0;i<m;i++)
    {
        cin>>a[i];
        stack1.push(a[i]);
    }
    cout<<"Enter size of second stack: ";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>b[i];
        stack2.push(b[i]);
    }
    if (compare(stack1, stack2))
        cout << "Both stacks are Same";
    else
        cout << "Stacks are not Same";
    return 0;
}


/* 
Output ->

Enter size of first stack: 5
1 9 3 8 4
Enter size of second stack: 5
1 9 2 3 4
Stacks are not Same

*/

/*
Output ->

Enter size of first stack: 4
1 9 3 8
Enter size of second stack: 4
1 9 3 8
Both stacks are Same

*/
