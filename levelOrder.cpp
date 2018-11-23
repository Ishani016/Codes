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
		root=n;
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

void levelOrder(node* root)
{
	queue <node*> q;
	q.push(root);
	while(!q.empty())
	{
		node* p=q.front();
		cout<<p->data<<" ";
		q.pop();
		if(p->left!=NULL)
			q.push(p->left);
		if(p->right!=NULL)
			q.push(p->right);
	}
}

int main()
{
    insert(45);
    insert(55);
    insert(65);
    insert(6);
    insert(5);
    insert(75);
    insert(15);
    insert(20);
    insert(16);
    levelOrder(root);
    return 0;
}

