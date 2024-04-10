//check whether a number is positive or negative using pointers
#include<stdio.h>
void main()
{
	int n,*p;
	printf("enter a number=");
	scanf("%d",&n);
	p=&n;
	printf("\n the adress of n is=%d",p);
	printf("\n the values of n using pointer=%d",*p);
	if(*p>0)
	{
		printf("\n number is positive");
	}
	else if(*p<0)
	{
		printf(" \n number is negative ");
	}
	else
	{
		printf("\n number is zero");
	}
	
	
}

