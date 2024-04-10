#include<stdio.h>
#include<stdlib.h>
#define size 10
int stack[size],top=-1;
void push(int);
void pop();
void display();
int main()
{  
     int choice,x;
	while(1)
	{
		printf("\n~~~MENU~~~");
		printf("\n1.push \n2.pop \n3.display \n4.exit\n");
		printf("enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("enter an element to insert:");
			        scanf("%d",&x);
			        push(x);
			        break;
			case 2:  pop();
			         break;
			case 3: display() ;
			         break;
			case 4: exit(0);
			         break;
			         
			          
		}
	}
}
void push(int x)
{
	if(top==size-1)
	{
		printf("stack overflow push is not possible!");
	}
	else
	{
		top++;
		stack[top]=x;
		printf("insertion success");
	}
	
}
void pop()
{
	if(top==-1)
	
	{
		printf("stack underflow!");
	}
	else
	{
		printf("deleted element %d",stack[top]);
		top--;
	}
}
void display()
{
	if(top==-1)
	{
		printf("\n stack is empty");
	}
	else
	{
		int i;
		printf("\nstack elements are:");
		for(i=top;i>=0;i--)
		printf("%d \n",stack[i]);
		
	}
}



