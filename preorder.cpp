#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define pb push_back
#define inf INT_MAX
#define mk make_pair
#define MOD 1000000007
#define in insert
struct node
{
	ll data;
	node* left;
	node* right;	
};
node* root=NULL;
void insert(ll d)
{
	node* n=new node;
	n->data=d;
	n->left=NULL;
	n->right=NULL;
	if(root==NULL)
	{
		root=n;
	}
	else
	{
		node* ptr=root;
		while(ptr)
		{
			if(d<ptr->data)
			{
				if(ptr->left==NULL)
				{
					ptr->left=n;
					break;
				}
				ptr=ptr->left;
			}
			else
			{
				if(ptr->right==NULL)
				{
					ptr->right=n;
					break;
				}
				ptr=ptr->right;
			}
		}
		
	}
}
void preorder(node* root)
{
	if(root)
	{
		cout<<root->data<<" ";
		preorder(root->left);
		preorder(root->right);
	}
}
int main()
{
    insert(56);
    insert(6);
	insert(66);
	insert(76);
	insert(5);
	insert(16);
	preorder(root);
    return 0;
}

