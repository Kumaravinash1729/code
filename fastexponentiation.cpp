#include<iostream>
using namespace std;

int fastexponentiation(int x,int y,int p)
{
    int res=1;
    while(y>0)
    {
     if((y&1)!=0)
      res=res*x;
      y=y>>1;
      x=x*x;

    }
    return res%p;
}
 int main()
 {
    int n,m,p;
    cin>>n>>m>>p;
    cout<<fastexponentiation(n,m,p);
    return 0;
 }