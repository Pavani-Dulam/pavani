/*average percentage of student marks*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int tel,math,hin,eng,chem,total;
	float percentage;
	printf("enter marks in telugu:");
	scanf("%d",&tel);
	printf("enter marks in maths:");
	scanf("%d",&math);
	printf("enter marks in hindhi:");
	scanf("%d",&hin);
	printf("enter marks in english:");
	scanf("%d",&eng);
	printf("enter marks in chemistry:");
	scanf("%d",&chem);
	total=tel+math+hin+eng+chem;
	printf("total marks %d \n",total);
	percentage=total/5;
	printf("the percentage is %f\n",percentage);
	getch();
	
}
