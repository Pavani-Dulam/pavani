#include<stdio.h>
#include<stdio.h>
void main()
{
	int dividend,divisior,quotient,remainder;
	printf("enter a dividend:");
	scanf("%d",&dividend);
	printf("enter a divisior:");
	scanf("%d",&divisior);
	quotient=dividend/divisior;
	printf("the quotient %d \n",quotient);
	remainder=dividend%divisior;
	printf("the remainder is %f \n",remainder);
	getch();
	
	
}
