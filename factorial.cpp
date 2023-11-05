#include<iostream>
using namespace std;

int factorial(int d)
{
    if(d==0||d==1)
    return 1;
    else
    return d*factorial(d-1);
}

int main()
{
    int a;
    cin>>a;
    int x= factorial(a);
    cout<<x;
    return 0;
}

