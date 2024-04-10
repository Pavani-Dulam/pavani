#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 10
int stack[size],top=-1;
void push(int);
void pop();
void display();
int main()
{
	int x,choice;
	while(1)
	{
	printf("***MENU***");
	printf("\n1.push \n2.pop \n3.display \n4.exit");
	printf("\nenter your choice=");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("enter an element to push:");
			scanf("%d",&x);
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
			printf("invalid choice");
	}

}
}
void push(int x)
{
	if(top==size-1)
	{
		printf("overflow!");
	}
	else
	{
		top++;
		stack[top]=x;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("underflow!");
	}
	else
	{
		printf("deleted element%d\n",stack[top]);
		top--;
	}
}
void display()
{
	if(top==-1)
	{
		printf("stack is empty");
	}
	else
	{
		int i;
		printf("stack elements are:");
		for(i=top;i>=0;i--)
		{
			printf("%d \n",stack[i]);
		}
		
	}
}

