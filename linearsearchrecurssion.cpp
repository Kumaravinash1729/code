#include<iostream>
using namespace std;

bool linearsearch(int arr[],int size,int key)
{
    if(size == 0)
    return false;
     if(arr[0]==key)
    return true;
    else
    {
     bool ans = linearsearch(arr + 1,size - 1,key);
     return ans;
    }
    

}
int main()
{
  int arr[] ={1,3,5,7,9,4};
  int size = 6;
  bool ans = linearsearch(arr,size,5);
  if(ans)
  cout<<"Found";
  else
  cout<<"Not Found";
  return 0;
}