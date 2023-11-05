#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int> v(5);
  for(int i=0;i<5;i++)
  {
    cin>>v[i];

  }
  int last_occurence=-1;
  int x;
  cin>>x;
  for(int i=v.size()-1;i>=0;i--)
  {
    if(x==v[i])
    {
        last_occurence=i;
        break;
    }

  }
  cout<<last_occurence;



}