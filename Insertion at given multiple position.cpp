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

    int pos;
    for(int j=0;j<l;j++)
    {
        cout<<"Enter the position you want to insert: ";
        cin>>pos;

    while(pos<1 || pos>n+1)
    {
        cout<<"Invalid position.";
        cout<<"Enter the position you want to insert: ";
        cin>>pos;
    }

    int value;
    cout<<"Enter the value you want to insert: ";
        cin>>value;

     int index = pos-1;
    for(i=n-1;i>=index;i--)
    {
        arr[i+1] = arr[i];
    }

    arr[index]= value;
    n++;
    }

    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
