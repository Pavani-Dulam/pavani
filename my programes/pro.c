/* if,else if,else*/
#include<stdio.h>
 int  main()
{
	int a,b,c;
	printf("enter a values:");
	scanf("%d",&a);
	printf("enter b values:");
	scanf("%d",&b);
	printf("enter c values:");
	scanf("%d",&c);

	if (a>b && a>c)
	{
		printf(" a is bigger =%d",a);
		
	}
	 else if (b>a&&b>c)
	{
		printf("b is bigger =%d",b);
	}
	else
	{
	
		printf("c  is bigger =%d",c);
	}
		
		return 0;
		
	
	
}
