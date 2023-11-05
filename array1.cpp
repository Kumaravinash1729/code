#include<iostream>
using namespace std;
int main()
{
 int arr[]={1,3,5,2,8};
 int s=0;
 int size=sizeof(arr)/sizeof(arr[0]);
 for(int i=0;i<size;i++)
 {
    if(arr[i]<arr[i+1])
    {
        s=arr[i+1];
    }
    else
    s=arr[i];
 } 
 cout<<s;
 return 0;

}