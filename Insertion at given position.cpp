#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n+1];
    cout<<"Enter array elements: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int pos;
    cout<<"Enter the position you want to insert: ";
    cin>>pos;
    while(pos<1 || pos>n+1)
    {
        cout<<"Invalid position.";
        cout<<"Enter the position you want to insert: ";
        cin>>pos;
    }
    int index = pos - 1;
    for(i=n-1;i>=index;i--)
    {
        arr[i+1] = arr[i];
    }
    int value;
    cout<<"Enter the value you want to insert: ";
    cin>>value;

    arr[index] = value;
    cout<<endl;

    for(i=0;i<n+1;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
