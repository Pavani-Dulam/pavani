/* to find area of the right angled triangle*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int height,base;
	float area,circumference;
	printf("enter height:");
	scanf("%d",&height);
	printf("enter base");
	scanf("%d",&base);
	area=0.5*height*base;
	printf(" area %f\n",area);
	circumference=0.5+base+height;
	printf(" circumference %f",circumference);
	getch();
	
}

