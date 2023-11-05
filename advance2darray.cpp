#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,m,z,p,q;
    cin>>n;
    vector<vector<int>> matrix(n,vector<int>(n));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>matrix[i][j];
        }
    }
   cin>>m>>z>>p>>q ;
   int sum=0;
   for(int i=z;i<q;i++)
   {
    sum+=matrix[m][i];
   }
   for(int i=z;i<q;i++)
   {
    sum+=matrix[p][i];
   }
   cout<<sum;
   return 0;
}





