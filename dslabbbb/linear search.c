#include<stdio.h>
#include<conio.h>
void main()
{
	int list[20],i,size,element;
	printf("enter the size of array");
	scanf("%d",&size);
	printf("enter the any %d elements",size);
	for(i=0;i<size;i++)
	{
	scanf("%d",&list[i]);
    }
printf("enter search element ");
scanf("%d",&element);
for(i=0;i<size;i++)
{
	if(element == list[i])
	{
	printf("element found at %d position",i);
	break;
   }
}
if(i==size)
{
	printf("not found*");
}
}
