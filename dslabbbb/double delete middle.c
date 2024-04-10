#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *prev;
	struct node *next;
};
struct node *head,*ptr,*temp;
void display(void);
void deletion();
int main()
{      int i,n;
	//take input from user
	printf("enter elements how many you want:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		struct node *newnode;
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("enter data %d:",i+1);
		scanf("%d",&newnode->data);
		newnode->prev=NULL;
		newnode->next=NULL;
		if(head==NULL)
		{
			head=ptr=newnode;
		}
		else
		{
			ptr->next=newnode;
			newnode->prev=ptr;
			newnode->next=NULL;
		}
		ptr=newnode;
	}
	void display(void);
{
	struct node *p=head;
	while(p!=NULL)
	{
		printf("%u->%d->%u  ",p->prev,p->data,p->next);
	    p=p->next;
	}
}
	//delete a node at specific position
void deletion();
{
	int p;
	printf("\n enter which position you want to delete");
	scanf("%d",&p);
	temp=head;
	while(p!=1)
	{
		temp=temp->next;
		p--;
	}
	temp->prev->next=temp->next;
	temp->next->prev=temp->prev;
	free(temp);
}
	
void display(void);
{
	
	struct node *p=head;
	p=head;
	while(p!=NULL)
	{
		printf("%u->%d->%u  ",p->prev,p->data,p->next);
	    p=p->next;
	}
	
}
}
