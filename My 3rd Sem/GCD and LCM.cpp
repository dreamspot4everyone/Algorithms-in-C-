#include <iostream>
using namespace std;

int GCD (int a, int b)
{
    if (a==0)
        return b;
    if (b==0)
        return a;
    if (a==b)
        return a;
    if (a>b)
        return GCD(a-b,b);
    return GCD(a,b-a);
}

int LCM(int a, int b)
{
    return ((a/GCD(a,b))*b);
}

int main ()
{
    int num1,num2;
    cout<<"Enter two numbers: "<<endl;
    cin>>num1>>num2;
    cout<<"\nLCM: "<<LCM(num1,num2);
    cout<<"\nGCD: "<<GCD(num1,num2);
    return 0;
}


/*
Output ->

Enter two numbers:
20
60

LCM: 60
GCD: 20

*/
