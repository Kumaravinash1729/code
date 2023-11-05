#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node()
    {
      if(this->next!=NULL)
      {
        delete next;
        this->next = NULL;

      }
    }

};
void insertAttail(Node* &tail,int d)
{
    if(tail==NULL){
    Node* temp = new Node(d);
    tail = temp;}
    else{
        Node* temp = new Node(d);
        tail->next = temp;
        tail = temp;
    }

}
 
Node *removeDuplicates(Node *head)
{
    Node* prev = head;
    if(prev==NULL||prev->next==NULL)
    return head;
    while(prev->next!=NULL)
    {
        Node* temp1= prev;
        Node* curr = prev->next;
        while(curr!=NULL)
        {
            if(prev->data==curr->data)
            {
                temp1->next=curr->next;
                Node* temp = curr;
                delete(temp);
            }
            else 
            {
            temp1 = curr;
            curr = curr->next;
            }
        }
        prev = prev->next;
        
    }
    return head;
}
void print(Node* head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main()
{
    Node* node1 = new Node(6);
    Node* tail = node1;
    //Node* head = node1;
    insertAttail(tail,5);
    insertAttail(tail,10);
    insertAttail(tail,4);
    insertAttail(tail,6);
    insertAttail(tail,8);
    insertAttail(tail,5);
    Node* head = removeDuplicates(node1);
    print(head);

}