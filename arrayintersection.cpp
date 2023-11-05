#include<iostream>
#include<vector>
using namespace std;
vector<int> findintersection(vector<int> &arr1,int n,vector<int> &arr2,int m)
{
  vector<int> ans;
  int i=0;
  int j=0;
  while(i<n&&j<m){
    if(arr1[i]==arr2[j]){
    ans.push_back(arr1[i]);
    i++;
    j++;
    }
    if(arr1[i]>arr2[j])
    {
        j++;
    }
    else if(arr1[i]<arr2[j])
    i++;
  }
  return ans;
  
}
  int main()
  {
    vector<int> arr1(6);
    vector<int> arr2(4);
    for(int i=0;i<6;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<4;i++)
    {
        cin>>arr2[i];
    }
    vector<int> v=findintersection(arr1,6,arr2,4);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
  }


