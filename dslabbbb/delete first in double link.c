//create double linked list and delete first node
#include<stdio.h>
#include<stdlib.h>
struct node
{   
     struct node *prev;
	int data;
	struct node *next;
};
struct node *ptr,*head,*temp;
void display (void);
void deletion();
int main()
{
	int i,n;
	printf("enter how many nodes you want:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		struct node *newnode;
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("enter data %d=",i+1);
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
		}
		ptr=newnode;
	}
	printf("before deleting the double linked list is\n");
	void display(void);
	{
		struct node *p=head;
		while(p!=NULL)
		{
			printf("%u->%d->%u  ",p->prev,p->data,p->next);
			p=p->next;
		}
		
	}

	//delete first node
	void deletion();
	{
		temp=head;
		head=temp->next;
		temp->next->prev=NULL;
		free(temp);
   }
  printf("\nafter deleting first node:\n ");
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
