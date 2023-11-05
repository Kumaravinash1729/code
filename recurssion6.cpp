#include<iostream>
using namespace std;

int sumarray(int arr[],int size)
{
   int sum;
   if(size == 1)
   return arr[0];
   else
   sum = arr[0] + sumarray(arr + 1,size -1);
   return sum;
}

int main()
{
  int arr[]={3,2,5,1,6};
  int size = 5;
  int ans = sumarray(arr,size);
  cout<<ans;
  return 0;
}