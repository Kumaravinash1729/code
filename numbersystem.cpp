#include<iostream>
using namespace std;
int main()
{
  int n,m=0;
  cout<<"Enter the binary number";
  cin>>n;
  while(n>0)
  {
    int lastdigit=n%10;
    m=m*2+lastdigit;
    n=n/10;
  }
  cout<<m;


}