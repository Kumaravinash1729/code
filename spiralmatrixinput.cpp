#include<iostream>
#include<vector>
using namespace std;
vector<vector<int> > Spiralmatrix(int n)
{
    vector<vector<int>> matrix(n,vector<int>(n));
   int left=0;
   int right=n-1;
   int top=0;
   int bottom=n-1;
   int direction=0;
   int value=1;
  while(top<=bottom && left<=right)
  {
   if(direction==0)
   {
    for(int j=left;j<=right;j++)
    {
        matrix[top][j]=value++; 
    }
    top++;
   }
    else if(direction==1)
    {
        for(int i=top;i<=bottom;i++){
            matrix[i][right]=value++;
        }
        right--;
    }
   else if(direction==2)
    {
        for(int j=right;j>=left;j--)
        {
            matrix[bottom][j]=value++;
        }
        bottom--;
    }
    else{
        for(int i=bottom;i>=top;i--){
            matrix[i][left]=value++;
        }
        left++;
    }
   direction=(direction+1)%4;
   }
   return matrix;
}

int main()
{
  
 int n;
 cin>>n;
 vector<vector<int>> matrix(n,vector<int>(n));
 matrix=Spiralmatrix(n);
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