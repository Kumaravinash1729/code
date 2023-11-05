#include<iostream>
using namespace std;

bool isSorted(int arr[],int size)
{
    int ans=0;
   if(size==0||size==1)
   return true;
   if(arr[0]>arr[1])
   return false;
   else
    ans = isSorted(arr+1,size-1);
   return ans;
}

 int main()
 {
     int arr[]={1,2,3,6,5};
     int size=5;
    int ans = isSorted(arr,size);
    cout<<ans;
    return 0;
 }