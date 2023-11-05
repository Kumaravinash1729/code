#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
   vector<vector<int>> matrix(n,vector<int>(n));
   int left=0;
   int right=matrix[0].size()-1;
   int top=0;
   int bottom=matrix.size()-1;
   int direction=0;
   int value=1;
  while(bottom>=top && right>=left)
  {
   if(direction==0)
   {
    for(int j=top;j<=right;j++)
    {
        cin>>matrix[top][j];
    }
    top++;
   }
    else if(direction==1)
    {
        for(int i=top;i<=bottom;i++){
           cin>> matrix[i][right];
        }
        right--;
    }
   else if(direction==2)
    {
        for(int j=right;j>=left;j--)
        {
           cin>> matrix[bottom][j];
        }
        bottom--;
    }
    else{
        for(int i=bottom;i>=top;i--){
           cin>>matrix[i][left];
        }
        left++;
    }
   direction=(direction+1)%4;
   }
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<n;j++)
    {
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
   }
   return 0;
}



  














