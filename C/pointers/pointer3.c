//find biggest number
#include<stdio.h>
main()
{
	int x,y,*p1,*p2;
	printf("enter x and y values ");
	scanf("%d%d",&x,&y);
	p1=&x;
	p2=&y;
	if(*p1>*p2)
	printf(" \n %d is the biggest number",*p1);
	else
	printf("\n %d is the biggest number",*p2);
	 printf( "\n adress of x and y is %d \n %d",p1,p2);
	 printf("\n values of x and y using pointer %d \n %d",*p1,*p2);
	
}
