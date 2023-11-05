#include<iostream>
using namespace std;
int main()
{
 int array[]={3,4,6,7,1};
 int key,pair=0;
 cin>>key;
 for(int i=0;i<5;i++)
 {
    for(int j=i+1;j<5;j++){
    if(array[i]+array[j]==key)
    pair++;
    }
 }
  cout<<pair;


}