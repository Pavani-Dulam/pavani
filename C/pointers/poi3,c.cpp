#include<stdio.h>
main()
{
	int x=10,y=20,*p1,*p2;
	p1=&x;
	p2=&y;
	printf("\n initially p1 is=%d",p1);
	printf("\n initially p2 is=%d",p2);
	printf("\n initially *p1=%d",*p1);
	printf("\n initially *p2=%d",*p2);
	printf("\n perform *p1+*p2  is=%d",*p1+*p2);
}
