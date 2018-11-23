void preorder(Node* root)
{
    stack<Node*> s;
    Node* n=root;
    while(!s.empty() || n!=NULL)
    {
        while(n!=NULL)
        {
            cout<<n->data<<" ";
            s.push(n);
            n=n->left;
        }
        n=s.top();
        s.pop();
        n=n->right;
    }
}
