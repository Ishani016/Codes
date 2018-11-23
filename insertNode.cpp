#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
struct Node
{
	ll data;
	struct Node *next;
};
struct Node *head=NULL;
void insert(ll value)
{
	struct Node *n=new Node;
	struct Node *ptr=head;
	n->data=value;
	n->next=NULL;
	if(head==NULL)
	{
		head=n;
	}
	else
	{
		while(ptr->next!=NULL)
			ptr=ptr->next;
		ptr->next=n;
	}
}

void display()
{
	struct Node *ptr=head;
	while(ptr->next!=NULL)
	{
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}
	cout<<ptr->data<<endl;	
}
int main()
{

	insert(4);
	insert(5);
	insert(78);
	insert(98);
	display();
	return 0;
}
