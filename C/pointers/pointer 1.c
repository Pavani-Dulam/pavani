#include<stdio.h>
main()
//area of the circle
{
	float r=7,*p1,area,pi=3.14159;
	p1=&r;
	printf("\n adress of r is p=%d",p1);
	printf("\n values r using pointer %f",*p1);
	area=pi**p1**p1;
	printf("\n the area of circle is =%f",area);
	
}
