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
    int l;
    cout<<"Enter no. of value you want to delete: ";
    cin>>l;
    cout<<"Final array: ";
    for(i=0;i<n-l;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
