#include<iostream>
using namespace std;
 
void selectionsort(int arr[],int n)
{
     if(n==1)
     return;
     int i=0;
    int min=arr[0];
    int minIndex=0;
    for(int j=i;j<n;j++)
    {
        if(min>arr[j]){
        minIndex=j;
        min=arr[j];
        }
    }
    swap(arr[i],arr[minIndex]);
    selectionsort(arr+1,n-1);

}







 int main()
 {
    int arr[]={1,3,2,5,8,6};
    int n=6;
    selectionsort(arr,n);
    for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<" ";
    }
 }