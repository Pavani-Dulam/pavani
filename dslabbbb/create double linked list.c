#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *prev;
	int data;
	struct node *next;
};
struct node *head,*ptr;
void display(void);
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
			newnode->prev=ptr->next;
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
}
