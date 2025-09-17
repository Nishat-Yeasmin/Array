#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    int first=0;
    int second=0;
    int third=0;
    for(i=0;i<n;i++)
    {
        if(first<=arr[i])
            first=arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(second<=arr[i] && second!=first)
            second=arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(third<=arr[i] && third!=first && third!=second)
            third=arr[i];
    }
    cout<<first<<" "<<second<<" "<<third<<" "<<endl;
}
