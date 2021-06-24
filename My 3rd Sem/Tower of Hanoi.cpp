#include <iostream>
using namespace std;
int count=0;

void TOH (int n, char src, char aux, char des)
{
    if (n==1)
    {
        cout<<"Move disk 1 from "<<src<<" to "<<des<<endl;
        count++;
    }
    else
    {
        TOH (n-1,src,des,aux);
        cout<<"Move disk "<<n<<" from "<<src<<" to "<<des<<endl;
        count++;
        TOH (n-1,aux,src,des);
    }
}

int main()
{
    int n;
    cout<<"Enter the number of disks: ";
    cin>>n;
    TOH (n, 'S', 'A', 'D'); // A, B and C are names of stack
    cout<<"Total moves: "<<count<<endl;
    return 0;
}



/*
Output ->

Enter the number of disks: 4
Move disk 1 from S to A
Move disk 2 from S to D
Move disk 1 from A to D
Move disk 3 from S to A
Move disk 1 from D to S
Move disk 2 from D to A
Move disk 1 from S to A
Move disk 4 from S to D
Move disk 1 from A to D
Move disk 2 from A to S
Move disk 1 from D to S
Move disk 3 from A to D
Move disk 1 from S to A
Move disk 2 from S to D
Move disk 1 from A to D
Total moves: 15

*/
