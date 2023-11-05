#include<iostream>
using namespace std;

void sortArray(int *arr,int n)
{
    //base case
    if(n == 0||n == 1)
    return;
     int minIndex = 0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[minIndex]>arr[i+1])
         minIndex = i+1;
    }
    swap(arr[minIndex],arr[0]);
    sortArray(arr+1,n-1);
}
 int main()
 {
    int arr[]={3,4,2,1,6,0};
    int size = 6;
    sortArray(arr,size);
    for(int j=0;j<size;j++)
    {
        cout<<arr[j]<<" ";
    }
    return 0;
 }