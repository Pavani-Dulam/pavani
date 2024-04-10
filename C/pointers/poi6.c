// *p1/*p2 and p1/p2  and p1+*p2  and *p1+p2
#include<stdio.h>
void main()
{
	int a=10,b=20,*p1,*p2;
	p1=&a;
	p2=&b;
	printf("\n the values of p1 is=%d",p1);
	printf("\n the values of p2 is=%d",p2);
	printf("\n the values of *p1 is=%d",*p1);
	printf("\n the values of *p2 is=%d",*p2);
	printf("\n perform *p1/*p2 is=%d",*p1/(*p2));
	printf("\n perform p1+*p2 is =%d",*p2+p1);
	printf("\n perform *p1+p2 is=%d",(*p1)+p2);
}
