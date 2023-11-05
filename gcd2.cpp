#include<iostream>
using namespace std;

int gcd2(int a,int b)
{
    int res=0;
    if(a==0)
    return b;
    if(b==0)
    return a;
  while(a!=0&&b!=0){
    if(a>b)
    {
        a=a%b;
    }
    else{
    b=b%a;
    }
     if(a==0)

    res= b;
    if(b==0)
    
    res= a;
  }
  return res;
}

int main()
{
    int x,y;
    cin>>x>>y;
    cout<<gcd2(x,y);
    return 0;
}