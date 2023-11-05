#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Node{
    public:
     int data;
     Node* next;

     Node(int d)
     {
       data = d;
       next = NULL;
     }
    
};
 void insertAthead(Node* &head,int data)
     {
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
     }
     void print(Node* &head)
     {
        Node* temp = head;
        while(temp!=NULL)
        {
            cout<<temp->data<<endl;
            temp = temp->next;
        }
     }
int main()
{
  Node* head = new Node(5);
  insertAthead(head,6);
  insertAthead(head,10);
  print(head);
  return 0;

}