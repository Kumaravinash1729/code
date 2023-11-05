#include<iostream>
using namespace std;
int main()
{
  char ch[10];
  cout<<"Enter your name"<<endl;
  cin>>ch;
  cout<<"Your name is :"<<ch<<endl;
  string name;
  cin>>name;
  name[3]='\0';
  cout<<"Your name is :"<<name;
  return 0;


}