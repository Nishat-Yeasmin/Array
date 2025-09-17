#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int largest=arr[0];

    for(i=0;i<n;i++)
    {
        if(largest<=arr[i])
        {
            largest=arr[i];

        }
    }
     cout<<largest<<endl;
}
