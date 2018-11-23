void inOrder(Node* root)
{
    stack<Node*> s;
    Node* n=root;
    while(!s.empty() || n!=NULL)
    {
        while(n!=NULL)
        {
            s.push(n);
            n=n->left;
        }
        
        n=s.top();
        s.pop();
        
        cout<< n->data <<" ";
        n=n->right;
    }
}

