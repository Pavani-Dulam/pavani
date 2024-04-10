#include<stdio.h>
#include<conio.h>
void main()
{
	while(1)
	{
	int n,i=1,factors=0;
	printf("enter a number");
	scanf("%d",&n);
	while(i<=n)
	{
	  if (n%i==0)
	  factors++;
    i++;
    }
   { 
   if(factors==2)
   printf("prime");
   else
   printf("not prime");
   }
   printf("\n");
}
}
   
   
  

