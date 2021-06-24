#include <iostream>
using namespace std;

int maximum(int arr[], int index, int len)
{
    int max;
    if(index>=len-2) //Only last and second last element are left
    {
        if(arr[index]>arr[index+1])
            return arr[index];
        else
            return arr[index+1];
    }
    max = maximum(arr,index+1,len);
    if(arr[index]>max)
        return arr[index];
    else
        return max;
}

int minimum(int arr[], int index, int len)
{
    int min;
    if(index>=len-2) //Only last and second last element are left
    {
        if(arr[index]<arr[index+1])
            return arr[index];
        else
            return arr[index+1];
    }
    min = minimum(arr,index+1,len);
    if(arr[index]<min)
        return arr[index];
    else
        return min;
}

int main()
{
    int A[20],n;
    cout<<"Enter size of the array: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
        cin>>A[i];
    cout<<"Maximum element in array = "<<maximum(A,0,n)<<endl;
    cout<<"Minimum element in array = "<<minimum(A,0,n)<<endl;
    return 0;
}

/*
Output ->

Enter size of the array: 5
Enter the elements: 19 21 -9 12 7
Maximum element in array = 21
Minimum element in array = -9

*/
