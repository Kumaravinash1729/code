#include<iostream>
using namespace std;
int main()
{
 int row,col;
 cout<<"Enter the value of row and col";
 cin>>row>>col;
 for(int i=0;i<row;i++)
 {
   for(int j=1;j<=col;j++)
   {
    cout<<j;
   }
   cout<<endl;
 }


}