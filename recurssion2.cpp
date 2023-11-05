#include<iostream>
using namespace std;

void f(int num)
{
    if(num<1)
    {
        return;
   }
     f(num-1);
    cout<<num<<" ";
}
int main()
{
    int a;
    cout<<"Enter a number";
    cin>>a;
    f(a);
    return 0;
}