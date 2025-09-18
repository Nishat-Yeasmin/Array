#include<iostream>>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter no of elements: ";
    cin>>n;
    int arr[n+1];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=n-1;i>=0;i--)
    {
        arr[i+1]=arr[i];
    }
    int value;
    cout<<"Enter the value you want to insert: ";
    cin>>value;
    arr[0]=value;
    for(i=0;i<n+1;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
