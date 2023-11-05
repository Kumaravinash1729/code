#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int j=0;j<=n/2;j++)
  {
   for(int k=(n/2-j);k>=1;k--)
   {
    cout<<" ";
   }
   for(int l=0;l<=(2*j);l++)
   {
    char ch='A'+l;
    cout<<ch;
   }
   cout<<endl;
  }
   for(int i=1;i<=n/2;i++)
   {
    for(int j=1;j<=i;j++)
    {
        cout<<" ";
    }
    for(int k=1;k<=n-(2*i);k++)
   {
    char ch='A'+k-1;
    cout<<ch;
   }
   cout<<endl;
}
  return 0;
}