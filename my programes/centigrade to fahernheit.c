/* temparature centigrade to fahrenheit*/
#include<stdio.h>
#include<conio.h>
void main()
{
	float centigrade,fahrenheit;
	printf("enter temparature in centigrade");
	//formula=(1.8*centigrades)+32
	scanf("%f",&centigrade);
	fahrenheit=(1.8*centigrade)+32;
	//formula=(centigrade*1.8)+32
	printf(" %f\n",fahrenheit);
	getch();
	
	
}
