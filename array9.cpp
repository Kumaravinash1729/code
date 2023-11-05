#include<iostream>
using namespace std;
int largestelement(int array[],int size)
{
    int max=INT_MIN;
    int maxindex=-1;
 for(int i=0;i<size;i++)
 {
    if(array[i]>max)
    {
        max=array[i];
        maxindex=i;
    }
 }
  return maxindex;
}

int main()
{
    int array[]={2,3,5,7,6,1};
    int indexoflargestelement=largestelement(array,6);
    array[indexoflargestelement]=-1;
    int secondindex=largestelement(array,6);
    cout<<array[secondindex];
    return 0;

}