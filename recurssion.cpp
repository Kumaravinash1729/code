#include<iostream>
using namespace std;

bool f(int num,int *temp){
 if(num>=0 && num<=9){
    int lastdigitOftemp=(*temp)%10;
    (*temp) = (*temp)/10;
    return (num == lastdigitOftemp);
 }
  bool result=(f(num/10,temp) && (num%10)==((*temp)%10));
  (*temp)/=10;
  return result;

}

int main()
{
 int num=534435;
 int anotherNum=num;
 int *temp=&anotherNum;
 cout<<f(num, temp);
 return 0;
}