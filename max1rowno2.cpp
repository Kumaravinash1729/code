#include<iostream>
#include<vector>
using namespace std;
 
 int maxOneRow(vector<vector<int>> &v)
 {
    int leftMostOne=-1;
    int maxOneRow=-1;
    int j=v[0].size()-1;
    for( int i=v[0].size()-1;i>=0;i--)
    {
        if(v[0][j]==1)
        {
         leftMostOne=i;
         j=i;
         maxOneRow=0;
        }
    }
    for(int i=1;i<v.size();i++)
    {
        while(j>=0&&v[i][j]==1)
        {
            leftMostOne=j;
            j--;
            maxOneRow=i;
        }
    }
    return maxOneRow;
 }
 int main()
 {
  int n,m;
  cin>>n>>m;
  vector<vector<int>> v(n,vector<int> (m));
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
        cin>>v[i][j];
    }
  }
   int res=maxOneRow(v);
   cout<<res;
 }
