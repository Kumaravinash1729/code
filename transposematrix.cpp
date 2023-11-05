#include<iostream>
using namespace std;
int main()
{
  int a,b;
  cin>>a>>b;
  int A[a][b];
  for(int i=0;i<a;i++)
  {
   for(int j=0;j<b;j++)
   {
    cin>>A[i][j];
   }
  }
  int B[b][a];
  int value=0;
  for(int i=0;i<a;i++)
  {
    for(int j=0;j<b;j++)
    {    
        value=A[i][j];
        B[j][i]=value;
    }
  }
  for(int i=0;i<b;i++)
  {
    for(int j=0;j<a;j++)
    {
        cout<<B[i][j]<<" ";
    }
    cout<<endl;
  }

}