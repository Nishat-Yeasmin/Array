#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter no. of array elements: ";
    cin>>n;
    int arr[n+2];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int value1,value2;
    cout<<"Enter the value you want to insert: ";
    cin>>value1>>value2;
    arr[n]=value1;
    arr[n+1]=value2;
    for(i=0;i<n+2;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
