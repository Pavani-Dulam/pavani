#include<stdio.h>
#include<conio.h>
int main()
{
    int	i,j,min,size,a[10],temp;
	printf("enter the size of array:\n");
	scanf("%d",&size);
	printf("enter the elements into an array:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
		
	}
	//print array elements before sorting
	printf("elements before sorting\n:");
	for(i=0;i<size;i++)
	{
	printf("%d\t",a[i]);
    }
	//logic for selection sort
	for(i=0;i<size;i++)
	{
		min=i;
		for(j=i+1;j<size;j++)
		{
			if(a[j]<a[min])
			min=j;
		}
		//innner for loop is used to find the lowest element
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	printf("\n nelements after sorting\n:");  
	//print elements after sorting
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
		 
	
	
}
