#include<iostream>
using namespace std;

int gcd(int a,int b)
{
  if(a==0)
  return b;
  if(b==0)
  return a;
  while(a!=b){
  if(a>b)
  a=a-b;
  else
  b=b-a;
  }
  return a;
}

int main()
{
    int a,b,x;
    cin>>a>>b;
     x=gcd(a,b);
     cout<<x;
     return 0;
}