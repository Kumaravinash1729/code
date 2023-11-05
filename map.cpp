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
Node* createBst(Node* root,int d)
{
    if(root==NULL)
    {
        root = new Node(d);
        return root;
    }
    if(root->data>d)
    {
        root->left = createBst(root->left,d);

    }
    else
    {
        root->right = createBst(root->right,d);
    }
    return root;
}
void levelordertraversal(Node* root)
{
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        int size = q.size();
        for(int i=0;i<size;i++)
        {
            Node* front = q.front();
            q.pop();
            cout<<front->data<<" ";
            if(front->left)
            {
                q.push(front->left);
            }
            if(front->right)
            {
                q.push(front->right);
            }
        }
        cout<<endl;
    }

    }


void takingdata(Node* &root)
{
    int data;
    cin>>data;
    while(data!=-1)
    {
        root = createBst(root,data);
        cin>>data;
    }
}

int main()
{
    Node* root = NULL;
    cout<<"Enter data to create BST"<<endl;
    takingdata(root);
    levelordertraversal(root);
}