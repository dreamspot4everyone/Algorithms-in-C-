#include <iostream>
using namespace std;

int fibo (int n)
{
    if (n==1)
        return 0;
    if (n==2)
        return 1;
    return (fibo(n-1)+fibo(n-2));
}

int main()
{
int n,i;
cout<<"Enter Total terms: ";
cin>>n;
cout<<"Fibonacci series terms are:"<<endl;
for(i = 1; i <= n; i++)
{
    cout<<fibo(i)<<" ";
}
return 0;
}


/*
Output ->

Enter Total terms: 10
Fibonacci series terms are:
0 1 1 2 3 5 8 13 21 34
*/
