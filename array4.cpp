#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int> v(6);
  for(int i=0;i<6;i++)
  {
    cin>>v[i];
  }
  int x,s=0;
  cin>>x;
  for(int i=0;i<v.size();i++)
  {
    if(x==v[i])
    {
        s++;
    }
  }
   cout<<s;


}