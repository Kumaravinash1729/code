#include<iostream>
using namespace std;

void Sortarray(int arr[],int n)
{
  for(int i=1;i<n;i++)
  {
    int j =i-1;
    int temp =arr[i];
    for(j;j>=0;j--)
    {
        if(arr[j]>temp)
        arr[j+1]=arr[j];
        else
        break;
    }
    arr[j+1]=temp;
  }

}

 int main()
 {
    int arr[]={10,1,7,4,8,2,1};
    int size=7;
    Sortarray(arr,size);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
 }