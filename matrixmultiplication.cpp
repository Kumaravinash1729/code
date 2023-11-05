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
  int c,d;
  cin>>c>>d;
  if(b!=c)
  {
    cout<<"Multiplication is not possible";
  }
  int B[c][d];
  int C[a][d]={0,0};
  for(int i=0;i<c;i++)
  {
   for(int j=0;j<d;j++)
   {
    cin>>B[i][j];
   }
  }
  for(int i=0;i<a;i++)
  {
   for(int j=0;j<d;j++)
   { 
    
    for(int k=0;k<b;k++)
    {   
      C[i][j]+=A[i][k]*B[k][j];
      
    }
   }
  }
   for(int i=0;i<a;i++)
   {
    for(int j=0;j<d;j++)
    {
        cout<<C[i][j]<<" ";
    }
     cout<<endl;
   }


}