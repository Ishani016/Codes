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

void printMiddle()
{
	struct Node *fptr=head;
	struct Node *sptr=head;
	while(fptr!=NULL && fptr->next!=NULL)
	{
		fptr=fptr->next->next;
		sptr=sptr->next;
		
	}
	cout<<"Middle element of the linked list is:"<<sptr->data<<endl;	
}
int main()
{

	insert(4);
	insert(5);
	insert(78);
	insert(98);
	printMiddle();
	return 0;
}
