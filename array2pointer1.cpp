#include<iostream>
using namespace std;
 
 int main()
 {
  int arr[]={1,1,0,0,1,0,1,0};
  int size=8;
  int s=0;
  int e=size-1;
  while(s<=e)
  {
    if(arr[s]==1&&arr[e]==0)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    if(arr[s]==0)
    {
        s++;
    }
    else
    e--;
  }
   for(int i=0;i<size;i++){
    cout<<arr[i];
   }
  return 0;
 }