#include<iostream>
using namespace std;
void printArray(int n,int arr[],int i)
{
    if(i==n)
        return;
    cout<<arr[i]<<endl;
    printArray(n,arr,i+1);
}
int main()
{
    int n,i;
    cout<<"Input size: ";
    cin>>n;
    int arr[n];
    cout<<"Array elements are: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    printArray(n,arr,0);

}
