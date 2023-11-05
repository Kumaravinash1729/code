#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* buildTree(Node* root)
{
     cout<<"Enter the data"<<" ";
    int data;
    cin>>data;
    if(data==-1)
    return NULL;

    root = new Node(data);
     cout<<"Enter the data for the left of :"<<data<<endl;
     root->left = buildTree(root->left);
     cout<<"Enter the data for the right of :"<<data<<endl;
     root->right = buildTree(root->right);
     return root;
}

void levelOrderTraversal(Node* root)
{
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        Node* temp = q.front();
        cout<<temp->data<<" ";
        q.pop();
        if(temp->left)
        {
            q.push(temp->left);
        }
        if(temp->right)
        {
            q.push(temp->right);
        }
    }

}
 
 void levelorderseperator(Node* root)
 {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
      
      while(!q.empty()){
    Node* temp = q.front();
     q.pop();
    if(temp==NULL){
        cout<<endl;
        if(!q.empty())
        q.push(NULL);
    }
    else{
        cout<<temp->data<<" ";
        if(temp->left)
        {
            q.push(temp->left);
        }
        if(temp->right)
        {
            q.push(temp->right);
        }
    }
      }
 }
 void inorder(Node* root)
 {
    //base case
    if(root==NULL)
    return;
    else{
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
 }
 void preorder(Node* root)
 {
    if(root == NULL)
    return;
    else{
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
 }
 void postorder(Node* root)
 {
    if(root==NULL)
    return;
    else{
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
 }
 void reverseordertraversal(Node* root)
 {
    //base case
    if(root==NULL)
    return;
    else{
        Node* temp = root;
        reverseordertraversal(root->left);
        cout<<temp->data<<" ";
        reverseordertraversal(root->right);
        cout<<temp->data<<" ";

    }
 }

int main()
{
    Node* root = NULL;
    root = buildTree(root);
    levelorderseperator(root);
    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    reverseordertraversal(root);
    return 0;
}