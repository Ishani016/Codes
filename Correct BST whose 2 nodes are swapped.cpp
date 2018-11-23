vector<pair<node*,int> >v;
void inorder(node* root)
{
    
    if(root==NULL)
       return;
    inorder(root->left);
    v.push_back(make_pair(root,root->data));
    // cout<<root<<" "<<root->data<<endl;
    inorder(root->right);
}

struct node *correctBST( struct node* root )
{
    v.clear();
    inorder(root);
    int f=0,d1,d2;
    node *p1,*p2;
    // cout<<v.size()<<endl;
    // cout<<v[0].first<<" "<<v[0].second<<endl;
    for(int i=1;i<v.size();i++)
    {
        // cout<<v[i].first<<" "<<v[i].second<<endl;
        if(v[i].second<v[i-1].second and f==0)
        {
            f=1;
            p1=v[i-1].first;
        }
        else if(v[i].second<v[i-1].second and f==1)
        {
            p2=v[i-1].first;
            d2=v[i-1].second;
            break;
        }
    }
    p1->data=d2;
    p2->data=d1;
    return root;
}
