#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*head,*tail;

void display(void);
void deletion();

int main()
{  
  int i,n;
  printf("enter no of nodes how many you want to create:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
  	struct node *newnode;
  	newnode=(struct node*)malloc(sizeof(struct node));
  	printf("\n enter data of node %d=",i+1);
  	scanf("%d",&newnode->data);
  	if(head==NULL)
  	 {
  		head=newnode;
  		tail=newnode;
  		
	 }
	 else
	 {
	 	tail->next=newnode;
	 	newnode->next=NULL;
  	 }
  	 tail=newnode;
  }
  display();
  deletion();
  display();
  return 0;
}
void display(void)
{
	struct node *p=head;
	printf("the linked list is ready\n ");
	while(p!=NULL)
	{
		printf("%d->%u  ",p->data,p->next);
		p=p->next;
	}
	
}

void deletion()
{
    struct node *temp;
    temp=head;
    if(temp->next==NULL)
    {
    	free(temp);
	}
	else
	{
		head=temp->next;
		free(temp);
	}
}
void display(void);
{
	struct node *p=head;
	printf("\n after deletion\n ");
	while(p!=NULL)
	{
		printf(" %d->%u  ",p->data,p->next);
		p=p->next;
	}
	
}

	 
  	
  	
  	
