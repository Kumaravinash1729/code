#include<iostream>
using namespace std;
int main()
{
  int n,m;
  cin>>n;
  while(n>0)
  {
    m=n%10;
    n=n/10;
    cout<<m;

  }
 return 0;

}