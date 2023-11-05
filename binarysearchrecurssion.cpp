#include<iostream>
using namespace std;
 
 bool binarysearch(int *arr,int s,int e,int k)
 {
    if(s>e)
    return false;
    int mid =s +(e-s)/2;
    if(arr[mid]==k)
    return true;
    if(arr[mid]>k)
    return binarysearch(arr,s,mid-1,k);
    else
    return binarysearch(arr,mid+1,e,k);
 }

 int main()
 {
    int arr[]={1,2,5,8,23,66};
    int s =0;
    int e = 5;
    int key =1;
    cout<<binarysearch(arr,s,e,key);
    
 }