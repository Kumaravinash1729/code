#include<iostream>
#include<vector>
using namespace std;

    int countPrime(int n){
    vector<bool> isprime(n+1,true);
    isprime[0]=isprime[1]=false;
    int cnt=0;
    for(int i=2;i<n;i++)
    {
        if(isprime[i])
        cnt++;
    
        for(int j=2*i;j<n;j+=i){
            isprime[j]=false;
        }
    }
    return cnt;
}
 
 int main()
 {
    int n,x;
    cin>>n;
    x=countPrime(n);
    cout<<x;
    return 0;
 }