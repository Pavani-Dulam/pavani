// write a program to print sum of two fractions
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e,f,g;
	printf("enter a value:");
	scanf("%d",&a);
	printf("enter b value:");
	scanf("%d",&b);
	printf("enter c value:");
	scanf("%d",&c);
	printf("enter d value:");
	scanf("%d",&d);
	e=a/b;
	printf("first fraction %d\n",e);
	f=c/d;
	printf("second  fraction: %d\n",f);
	g=e+f;
	printf("the sum of two fractions:%d",g);
	getch();
	
}
