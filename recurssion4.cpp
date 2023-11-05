#include<iostream>
using namespace std;
int f(int num)
{
    int result=0;
    if(num==0)
    {
        return 0;
    }
    if(num%2==0)
        result= f(num-1)-num;
    else
    result=f(num-1)+num;
    return result;
}

int main()
{
    int num;
    cin>>num;
    cout<<f(num);
    return 0;
}