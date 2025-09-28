#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter array size: ";
    cin>>n;
    int l;
    cout<<"Enter no. of value you want to insert: ";
    cin>>l;
    int arr[n+l];
    cout<<"Enter array elements: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=n-1;i>=0;i--)
    {
        arr[i+l]=arr[i];
    }
    int value;
    cout<<"Enter the value you want to insert: ";
    for(i=0;i<l;i++)
    {
        cin>>arr[i];
    }
    cout<<"Print array elements: ";
    for(i=0;i<n+l;i++)
    {
        cout<<arr[i]<<" ";
    }

}
