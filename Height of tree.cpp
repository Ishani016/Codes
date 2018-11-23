int height(Node* node)
{
   queue<Node*>q;
   q.push(node);
   int h=0;
   while(!q.empty())
   {
       int s=q.size();
       while(s--)
       {
           Node* t=q.front();
           q.pop();
           if(t->left)
            q.push(t->left);
           if(t->right)
            q.push(t->right);
       }
       h++;
   }
   return h;
}
