#include<stdio.h>
#include<conio.h>
#define size 100
//sum of array elements
int main()
{
	int a[size],sum=0,i,n;
	printf("enter the size of an array=");
	scanf("%d",&n);
	printf("enter elements into array=");

	for(i=0;i<n;i++)
	{
		scanf("%2d",&a[i]);
		sum=sum+a[i];
	}
	printf("elements in array");
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
	printf("\nsum=%d",sum);
	
	
	
}
