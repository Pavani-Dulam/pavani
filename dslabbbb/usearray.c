#include<stdio.h>
# define size 10
int main()
{  
    int i;
	int a[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",a[i]);
	}
	for(i=0;i<size;i++)
	{
		printf("a[%d]=%d",i,a[i]);
	}
}

