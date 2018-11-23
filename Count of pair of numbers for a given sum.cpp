vector<int>v;
void inorder(Node* root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    v.push_back(root->data);
    inorder(root->right);
}
int countPairs(Node* root1, Node* root2, int x)
{
    vector<int>v1,v2;
    v.clear();
    inorder(root1);
    v1=v;
    v.clear();
    inorder(root2);
    v2=v;
    int c=0;
    for(int i=0;i<v1.size();i++)
    {
        if(binary_search(v2.begin(),v2.end(),x-v1[i]))
            c++;
    }
    return c;
}
