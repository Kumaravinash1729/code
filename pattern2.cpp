#include<iostream>
using namespace std;
int main()
{
  int n,m;
  cout<<"Enter no of rows";
  cin>>n;
  m=n;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      cout<<"*";

    }
    m--;
    cout<<endl;
  }

}