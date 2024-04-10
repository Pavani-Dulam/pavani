/* given year is leap or not*/
#include<stdio.h>
#include<stdio.h>
void main()
{
	int year;
	printf("enter a number");
	scanf("%d",&year);
	if (year%4==0)
	{
		printf("the year is leap=%d",year);
		
	}
	else
	{
		printf("the year is not leap year=%d",year);
	}
}
