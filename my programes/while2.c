//w.a.p to add 10 consecutive numbers starting from 1
#include<stdio.h>
void main()
{
	int a=1,sum=0;
	while(a<=100)
    {
    	printf("%8d",a);
    	sum=sum+a;
    	a++;
    }
    
    {
	 printf("\n sum of 10 numbers %d ",sum);
	}
}
