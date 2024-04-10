#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r,s;
	printf("enter no of rows");
	scanf("%d",&n);
	for(r=1;r<=n;r++)
	{
		for(s=1;s<=r;s++)
		printf("*");
	    printf("\n");
		
	}
}
