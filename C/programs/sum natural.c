/*sum of n natural numbers*/
#include<stdio.h>
void main()
{
	int sum=0,i,num;
	printf("enter a number");
	scanf("%d",&num);
	for(i=1;i<num;i++)
	{
	sum=sum+i;
    }   
	printf("%d",sum);
	getch();
}
