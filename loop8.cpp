#include<iostream>
using namespace std;
int main()
{
 int n,m,s=1;
 cin>>n>>m;
 for(int i=1;i<=m;i++)
 {
     s=s*n;
 }
 cout<<s;
 return 0;
}