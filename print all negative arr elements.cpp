#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    cout<<"Input array: ";
    for(int i=0;i<10;i++)
        {
           cin>>arr[i];
        }
    int i;
    cout<<"Output: ";
   for(i=0;i<10;i++)
   {
       if(arr[i]<0)
        cout<<arr[i]<<" ";
   }

}
