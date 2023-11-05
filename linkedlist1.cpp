#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data=data;
        next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        if(this->next!=NULL)
        {
            this->next=NULL;
            delete next;
        }
    }
    
};
void insertAthead(Node* &head,int d)
{
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAttail(Node* &tail,int d)
{
    Node* temp = new Node(d);
    tail->next= temp;
    tail = temp;
}
void insertAtposition(Node* &head,int position,int d)
{
    int cnt = 1;
    Node*temp = head;
    while(cnt<position-1)
    {
        temp = temp->next;
        cnt++;
    }

     Node *nodetoinsert = new Node(d);
     nodetoinsert->next = temp->next;
     temp->next = nodetoinsert;
}
void print(Node* &head)
{
    Node* temp= head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
void deleteNode(Node* &head,int d)
{
    int position = d;
    if(position == 1)
    {
       Node* temp = head;
       head = head->next;
       temp->next = NULL;
       delete temp;
    }
    else{
    int cnt =1;
    Node* prev = NULL;
    Node* curr = head;
    while(cnt<position)
    {
        prev = curr;
        curr = curr->next;
        cnt++;

    }
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;

    }
}
int  length(Node* head)
{
    Node* temp = head;
    int len =0;
    while(temp!=NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

int main()
{
    Node* node1 = new Node(10);
    Node* tail = node1;
    Node* head = node1;
    insertAttail(tail,12);
    insertAttail(tail,3);
    insertAttail(tail,5);
    insertAttail(tail,7);
    insertAtposition(head,4,34);
    //deleteNode(head,4);
    print(head);
    cout<<endl;
    cout<<length(head);
    
}