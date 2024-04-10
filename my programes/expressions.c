// write a program to print expressions
#include<stdio.h>
#include<conio.h>
void main()
{
	int a=2,b=5,c=10,d,e,f,g;
	char x;
	d=a*x*x+b*x+c;
	printf("the value of ax^2+b^x+c: %d\n",d);
	e=a+b/c;
	printf("the value of a+b/c: %d\n",e);
	f=25%b+b/3+b/a+c%2;
	printf("the value of 25%b+b/3+b/a+c%2: %d\n",f);
	g=a*a*a+b*b-c;
	printf("the value of a^3+b^2-c is: %d\n",g);
	getch();
	
	
}
