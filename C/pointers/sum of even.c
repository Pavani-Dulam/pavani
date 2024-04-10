#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,sum=0;
	//sum of even numbers
	printf("enter a number");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
	if(i%2==0)
	{
		sum=sum+i;
	}
}  
printf("the sum of even numbers upto %d is %d ",n,sum);
	
}
