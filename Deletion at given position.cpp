#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter array size: ";
    cin>>n;

    int arr[n];
    cout<<"Enter array elements: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int pos;
    cout<<"Enter the position you want to delete: ";
    cin>>pos;
    while(pos<1 || pos>n)
    {
        cout<<"Invalid position.";
        cout<<"Enter the valid position you want to delete: ";
        cin>>pos;
    }
    int index = pos-1;
    for(i=index;i<n-1;i++)
    {
        arr[i] = arr[i+1];
    }
    cout<<"final array: ";
    for(i=0;i<n-1;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
