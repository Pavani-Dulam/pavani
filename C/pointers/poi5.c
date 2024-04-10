//*p1**p2 
#include<stdio.h>
void main()
{
	int a=10,b=20,*p1,*p2;
	p1=&a;
	p2=&b;
	printf("\n initially p1[adress of a] value is=%d",p1);
	printf("\n initially p2 [adress of b]value is=%d",p2);
	printf("\n initially *p1 value is=%d",*p1);
	printf("\n initially *p2 value is=%d",*p2);
	printf("\n perform *p1**p2 is=%d",*p1**p2);
	
}

