//*p1-*p2
#include<stdio.h>
void main()
{
	int x=10,y=20,*p1,*p2;
	p1=&x;
	p2=&y;
	printf("\n the adress of p1 is=%d",p1);
	printf("\n the adress of p2 is=%d",p2);
	printf("\n initially *p1 is=%d",*p1);
	printf("\n initially *p2 is=%d",*p2);
	printf("\n preform *p1-*p2=%d",*p1-*p2);
	printf("\n perform p1-p2 =%d",p1-p2);
	
}
 
