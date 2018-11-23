#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node* next;
};

struct node* insert(struct node**,int);
void showlist(struct node*);

int main()
{
	cout<<"Welcome to the implementation of circular linked list!\n";
	struct node* h=NULL;
	for(int i=100;i<=120;i=i+2)
	{
		h=insert(&h,i);
	}
	cout<<"Circular Linked List is created!!\n";
	showlist(h);
	return 0;
}

struct node* insert(struct node** head,int d)
{
	struct node* n=new node;
	n->data=d;
	struct node* ptr;
	if(*head==NULL)
	{
		n->next=n;
		*head=n;
	}
	else
	{
		ptr=*head;
		while(ptr->next!=*head)
		{
			ptr=ptr->next;
		}
		ptr->next=n;
		ptr=n;
		ptr->next=*head;
	}
	return *head;
}

void showlist(struct node* head)
{
	struct node* ptr=head;
	do
	{
		cout<<ptr->data<<"\t";
		ptr=ptr->next;
	}
	while(ptr->next!=head);
}

