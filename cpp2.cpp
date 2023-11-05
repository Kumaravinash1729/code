#include<iostream>
using namespace std;
int main()
{   
    int row,col;
    cin>>row>>col;
    for(int j=1;j<=row;j++)
    {for(int i=1;i<=col;i++){
      cout<<"*";
    }
   cout<<endl;
    }
    return 0;
}