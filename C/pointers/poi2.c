#include<stdio.h>
void main()
{
	int x=10,y=20,*p1,*p2;
	p1=&x;
	p2=&y;
	printf("\n initially the value of *p1 is =%d",*p1);
	printf("\n initially the value of *p2 is =%d",*p2);
	printf("\n after doing (*p1++) operation is=%d",(*p1++));
	printf("\n *p1=%d",*p1);
	printf("\n after doing *p1++ operation is =%d",*p1++);
	printf("\n after doing *(p1++)operation is=%d",*(p1++));
	
	
	
	
}
