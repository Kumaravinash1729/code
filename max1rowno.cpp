#include<iostream>
#include<vector>
using namespace std;
int maxOnerow(vector<vector<int>> &v){
    int column=v[0].size();
    int maxone=INT_MIN;
    int maxOnesrow=-1;
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<column;j++)
        {
            if(v[i][j]==1)
            {
             int noOfmaxone=column-j;
             if(noOfmaxone>maxone)
             {
                maxone=noOfmaxone;
                maxOnesrow=i;
             }
             break;
            }
        }
     
    }

 return maxOnesrow;
}

int main()
{
    int n,m;
    cin>>n>>m;
   vector<vector<int>> v(n,vector<int>(m));
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<m;j++)
    {
        cin>>v[i][j];
    }
   }
   int res=maxOnerow(v);
   cout<<res+1<<endl;;

}