#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter no. of array elements: ";
    cin>>n;
    int arr[n+1];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int value;
    cout<<"Enter the value you want to insert: ";
    cin>>value;
    arr[n]=value;
    for(i=0;i<n+1;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
