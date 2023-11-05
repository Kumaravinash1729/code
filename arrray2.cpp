#include<iostream>
using namespace std;
int main()
{
  int arr[]={1,3,5,23,6,7};
  int key;
  cin>>key;
  int size=sizeof(arr)/sizeof(arr[1]);
  for(int i=0;i<size;i++)
  {
    if(key==arr[i])
    {
        cout<<"Element present at index"<<i;
        exit(0);
    }
  }
    cout<<-1;
    
}