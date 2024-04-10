#include<stdio.h>
#include<conio.h>
void main()
{
	int *p1,*p2,a=10,b=20;
	p1=&a;
	p2=&b;
	printf("\n values of a=%d    b=%d",a,b);
	printf("\n address of a=%u b=%u",p1,p2);
	printf("\n values a and b using pointer %d\n%d",*p1,*p2);
	printf("\n ++p1=%u",++p1);
	printf("\n p2++=%u",p2++);
	printf("\n p2=%u",p2);
}
