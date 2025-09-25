#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter array size: ";
    cin>>n;
    int l;
    cout<<"Enter the no. of value you want to insert: ";
    cin>>l;
    int arr[n+l];
    cout<<"Enter the array elements: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int value;
    cout<<"Enter the value you want to insert: ";
    for(i=0;i<l;i++)
    {
        cin>>arr[n+i];
    }
    n=n+l;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
