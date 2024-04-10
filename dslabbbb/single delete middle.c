#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void display(void);
void deletion();
int main()
{  
   struct node *ptr,*head;
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
  		head=ptr=newnode;
	 }
	 else
	 {
	 	ptr->next=newnode;
	 	newnode->next=NULL;
  	 }
  	 ptr=newnode;
  }
void display(void);
{
	struct node *p=head;
	printf("the linked list is ready\n ");
	while(p!=NULL)
	{
		printf("%d->%u  ",p->data,p->next);
		p=p->next;
	}
	
}
void deletion();
{
//delete a node at given position
int p;
struct node *prev,*current;
printf("\n enter which position node to delete:");
scanf("%d",&p);
prev=current=head;
while(p!=1)
{
	prev=current;
	current=current->next;
	p--;
}
prev->next=current->next;
free(current);
prev=head;


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
}
	 
  	
  	
  	
