#include<iostream>
using namespace std;

  long long int fib(int n)
 {
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    long long int ans=fib(n-1)+fib(n-2);
    return ans; 

 }

int main()
{
 int n;
 cin>>n;
 long long int ans=fib(n);
 cout<<"The nth term of the fibonacci series is :"<<ans;
 return 0;
}