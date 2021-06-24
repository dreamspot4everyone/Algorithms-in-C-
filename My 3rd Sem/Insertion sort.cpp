#include <iostream>
using namespace std;

int binarySearch(int arr[],int low,int high,int x)
{
    if (high<=low)
    {
        if (x>arr[low])
            return (low+1);
        else
            return low;
    }
    int mid=(low+high)/2;
    if (x==arr[mid])
        return (mid+1);
    if (x>arr[mid])
        return binarySearch(arr,mid+1,high,x);
    return binarySearch(arr,low,mid-1,x);
}

int insertion_sort (int arr[],int n)
{
    int i,j,key,pos,p=0;
    for (i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        pos=binarySearch(arr,0,j,key);
        while (j>=pos)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
        cout<<"Pass"<<p+1<<": ";
        for (int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
        ++p;
    }
}

int main()
{
    int arr[30],n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the array:"<<endl;
    for (int i=0;i<n;i++)
        cin>>arr[i];
    insertion_sort(arr,n);
    cout<<"\nSorted array: ";
    for (int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}



/*
Output ->

Enter the size of array: 5
Enter the array:
19 28 3 -9 23
Pass1: 19 28 3 -9 23
Pass2: 3 19 28 -9 23
Pass3: -9 3 19 28 23
Pass4: -9 3 19 23 28

Sorted array: -9 3 19 23 28

Process returned 0 (0x0)   execution time : 9.485 s
Press any key to continue.

*/
