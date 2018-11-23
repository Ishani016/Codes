#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

struct Node
{
    ll data;
    Node* left;
    Node* right;
};

struct Node* newnode(ll d)
{
    struct Node* n=new Node;
    n->data=d;
    n->left=NULL;
    n->right=NULL;
    return n;
}

ll maxlevel(Node* root)
{
    ll maxnc=INT_MIN;
    ll nc=0;
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(q.size()!=1)
    {
        Node* t=q.front();
        q.pop();
        if(t==NULL)
        {
            if(maxnc<nc)
            {
                maxnc=nc;
                nc=0;
            }
            q.push(NULL);
        }
        else
        {
            nc++;
            if(t->left)
                q.push(t->left);
            if(t->right)
                q.push(t->right);   
        }
    }
    return maxnc;
}
int main()
{
    struct Node* root=newnode(24);
    root->left=newnode(19);
    root->right=newnode(30);
    root->left->left=newnode(15);
    root->left->right=newnode(18);
    root->right->right=newnode(45);.
    root->right->right->left=newnode(50);
    cout<<maxlevel(root)<<endl;
    return 0;
}
