//insertion sort
#include<stdio.h>
int main()
{
	int a[10],i,n,temp,j;
	printf("enter how many elements you want in array:");
	scanf("%d",&n);
	printf("enter elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array elements are:");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	for(i=1;i<n;i++)
	{
		temp=a[i];
		for(j=i-1;((j>=0)&&(temp<a[j]));j--)
		{
			a[j+1]=a[j];
		}
		a[j+1]=temp;
	}
	printf("\n after sorting elements are \n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d \n",i,a[i]);
	}
}
