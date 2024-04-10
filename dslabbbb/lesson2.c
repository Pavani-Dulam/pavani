#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct stack
{
	int data;
	struct stack *next;
};
void push(int);
void pop();
void display();
struct stack *top=NULL,*str;
int main()
{
	int x,choice;
	printf("***MENU***");
	printf("/n1.push \n2.pop \n3.display \n4.exit");
	do
	{
	 printf("\nenter your choice:");
	 scanf("%d",&choice);
	 switch(choice)
	 {
	 	case 1:
	 		printf("\nenter an element to insert:");
	 		scanf("%d",&choice);
	 		 push(x);
	 		 break;
	 	case 2:
	 		pop();
	 		break;
	 	case 3:
	 		display();
	 		break;
	 	case 4:
	 		exit(0);
	 	default:
	 		printf("\n invalid");
	  }
    }  
	while(1<=choice>=3);
}
void push( int x)
{
	struct stack *newnode;
	newnode=(struct stack*)malloc(sizeof(struct stack));
	printf("\nenter data to push into stack:");
	scanf("%d",&x);
	newnode->data=x;
	newnode->data=NULL;
	if(top==NULL)
	{
		top=str=newnode;
	}
	else
	{
		newnode->next=top;
		top=newnode;
		str=newnode;
	}
}
void pop()
{
	if(top==NULL)
	{
		printf("underflow:");
	}
	else
	{
		struct stack *temp;
		temp=top;
		top=top->next;
		str=top;
		printf("deleted element:%d",temp->data);
		free(temp);
	}
}
void display()
{
	if(top==NULL)
	{
		printf("stack is empty");
	}
	else
	{
	  struct stack *p=top;
	  while(p!=NULL)
	  {
	  	printf("%d->%u",p->data,p->next);
	  }
	  p=p->next;
    }
}
}

	

