#include<stdio.h>
void main()
{
	int x=10,y=20,*p1,*p2;
	p1=&x;
	p2=&y;
	printf("initially *p1=%d",*p1);
	printf("\n initially *p2=%d",*p2);
	*p2=40;
	printf("\n after assigning 40 to*p2 =%d ",*p2);
}
