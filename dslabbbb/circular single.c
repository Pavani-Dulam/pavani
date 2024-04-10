#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
	int data;
	struct node *next;
};
struct node *ptr,*head=NULL;
void display(void);
int main()
{
	int i,n;
	printf("how many nodes you want to create:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		struct node *newnode;
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("enter the data %d= ",i+1);
		scanf("%d",&newnode->data);
		if(head==NULL)
		{
			head=ptr=newnode;
		}
		else
		{
			ptr->next=newnode;
			newnode->next=head;
		}
		ptr=newnode;
	}
void display(void);
{
	printf("%d ",head);
	struct node *p=head;
	while(p->next!=head)
	{
		printf(" %d->%d ",p->data,p->next);
		p=p->next;
	}
		printf("%d->%d ",p->data,p->next);
}
	
}
