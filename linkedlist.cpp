#include<iostream>
using namespace std;

class Node{

  public:
  int data;
  Node* next;
  Node(int data)
  {
    this->data=data;
    this->next=NULL;
  }

};
void insertnode(Node* &head,int data)
{
    Node* temp= new Node(data);
    head->next=temp;
    head=head->next;
}
void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL){
    cout<<temp->data;
    temp=temp->next;
    cout<<endl;
    }
    
}
int main()
{
    Node* node1 =new Node(10);
   // cout<<node1->data<<endl;
   // cout<<node1->next;
    Node* head= node1;
    Node* tail=node1;
    insertnode(tail,12);
    insertnode(tail,15);
    print (head);

    return 0;
}