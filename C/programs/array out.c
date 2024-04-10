#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,n,key,flag=0;
	printf("enter no of elements");
	scanf("%d",&n);
	printf("enter elements");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("enter key elements:");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{    
		if(a[i]==key)
		{
		  printf("%d is found at position %d \n",key,i);
	      flag=1;
    	  break;
       }
    }
  
	if (flag==0)
	{
	printf("%d is not found");
    }  


}
