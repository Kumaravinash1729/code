#include<iostream>
using namespace std;
int main()
{
  int n,m=1;
  cout<<"Enter a number";
  cin>>n;
  while((n%10)!=0)
  {
    m++;
  }
  cout<<"No of digits are"<<m;
  return 0;
}