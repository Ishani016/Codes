void mirror(Node* node) 
{
     queue<Node*>q;
     q.push(node);
     while(!q.empty())
     {
        Node* t=q.front();
        q.pop();
        swap(t->left ,t->right);
        if(t->left)
            q.push(t->left);
        if(t->right)
            q.push(t->right);
     }
}
