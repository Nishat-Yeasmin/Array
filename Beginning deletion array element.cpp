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
    for(i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }

    for(i=0;i<n-1;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
