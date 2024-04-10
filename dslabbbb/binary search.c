#include<stdio.h>
#include<conio.h>
void main()
{
	int list[100],size,i,element,first,last,middle;
	printf("enter the size of list:");
	scanf("%d",&size);
	printf("enter any %d elements in assending order:",size);
	for(i=0;i<size;i++)
	{
	scanf("%d",&list[i]);
    }
    printf("enter which element to be searched:");
    scanf("%d",&element);
    first=0;
    last=size-1;
    middle=first+last/2;
    while(first<=last)
    {
    	if(list[middle]<element)
    	{
    		first=middle+1;
		}
		else if (list[middle]==element)
		{
			printf("element found at index %d",middle);
			break;
		}
		else
		{
			last=middle-1;
		}
		middle=first+last/2;
	}
	
}
