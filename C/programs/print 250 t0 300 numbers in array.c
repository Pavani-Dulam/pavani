//put 250 to 300 numbers in an array
#include<stdio.h>
#include<conio.h>
void main()
{
	int n[51],i;
	for(i=0;i<=50;i++)
	{
		n[i]=i+250;
		
	}
	for(i=0;i<=50;i++)
	{
		printf("element[%d]=%d\n",i,n[i]);
	}
	
}

