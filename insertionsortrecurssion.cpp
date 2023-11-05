#include<iostream>
using namespace std;

void insertionsort(int arr[],int n,int i)
{
  if(i==n)
  return ;
int temp=arr[i];
int j=i-1;
for(j;j>=0;j--)
{
  if(arr[j]>temp)
  swap(arr[j+1],arr[j]);
  else
  break;
}
arr[j+1]=temp;
insertionsort(arr,n,i+1);

}


int main()
{

int arr[]={1,5,6,3,2};
int n = 5;
 insertionsort(arr,n,1);

for(int i=0;i<n;i++)
{
  cout<<arr[i]<<" ";
}

}

