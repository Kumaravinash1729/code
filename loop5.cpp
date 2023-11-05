#include<iostream>
using namespace std;
int main()
{
  int n,m=0;
  cin>>n;
  while(n>0)
  {
     int lastdigit =n%10;
    m=m*10+lastdigit;
    n=n/10;
  }
   cout<<m;
   return 0;
}