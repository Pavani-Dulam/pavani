#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head,*ptr;
void insert();
void display(void);
int main()
{
	int i,n;
	//take input from user
	printf("enter how many nodes you want:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		struct node *newnode;
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("enter data %d: ",i+1);
		scanf("%d",&newnode->data);
		if(head==NULL)
		{
			head=ptr=newnode;
		}
		else
		{
			ptr->next=newnode;
			newnode->next=NULL;
		}
		ptr=newnode;
		
	}
	display();
	insert();
	display();
	return 0;
}

void display(void)
{
	struct node *p=head;
	while(p!=NULL)
	{
		printf("%d->%u  ",p->data,p->next);
		p=p->next;
	}
	
}
//inserting at start
void insert()
{
	struct node *first;
	first=(struct node*)malloc(sizeof(struct node));
	printf("\n enter which element you want to insert:");
	scanf("%d",&first->data);
	//insert at start
	if(first==NULL)
	{
		printf("not possible");
	}
	else
	{
		first->next=head;
		head=first;
	}
}



