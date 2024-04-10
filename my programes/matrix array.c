#include<stdio.h>
void main()
{
	int i,j,a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	printf("\n enter the elements\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%5d",a[i][j]);
		printf("\n");
	}
}
