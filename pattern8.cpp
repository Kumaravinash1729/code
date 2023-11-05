#include<iostream>
using namespace std;
int main()
{
 int n,col;
 cout<<"Enter the value of rows and columns";
 cin>>n>>col;
 for(int i=1;i<=n;i++)
 {
   for(int j=1;j<=col;j++)
   {
    if((i+j)%2==0)
    cout<<"1";
    else
    cout<<"2";
   }
   cout<<endl;
 }
 return 0;
}