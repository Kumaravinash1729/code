#include<iostream>
using namespace std;
int main()
{
 int row,col;
 cout<<"Enter value of row and col";
 cin>>row>>col;
 for(int i=1;i<=row;i++)
 {
  for(int j=1;j<=col;j++)
  {
   if(j==1||j==col||i==1||i==row)
   cout<<j;
   else
   cout<<" ";
  }
  cout<<endl;
 }
return 0;
}