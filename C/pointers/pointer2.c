//convert float into integer
#include<stdio.h>
main()
{
	int j;
	float f,*p; 
	printf("enter a float value=");
	scanf("%f",&f);
	p=&f;
	j=*p;
	printf("%d",j);
	
}
