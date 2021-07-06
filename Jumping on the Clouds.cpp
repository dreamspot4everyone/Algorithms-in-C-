#include <bits/stdc++.h>
using namespace std;

int c[1000], ct[1000];

int main() 
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>c[i];
    for(int i=2;i<=n;i++)
    {
        if(c[i]!=1)
            ct[i]=min (ct[i-1],ct[i-2])+1;
        else
            ct[i]=INT_MAX;
    }
    cout<<ct[n]<<"\n";
    return 0;
}
