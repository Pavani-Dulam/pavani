// write a C program to read and display 3D arrays
#include<stdio.h>
void main()
{
int i,j,k,table,rows,cols;
printf("enter the no of tables");
scanf("%d",&table);
printf("\n enter the no of rows and columns :");
scanf("%d%d",&rows,&cols);
int arr[table][rows][cols];//table=2,row=2,cols=2
for(i=0;i<table;i++)
{
for(j=0;j<table;j++)
{
for(k=0;k<table;k++)
{
printf("\n arr[%d][%d][%d]=",i,j,k)	;
scanf("%d",&arr[i][j][k]);
}
}
}
for(i=0;i<table;i++)
{
printf("table %d elements \n ",i+1);
printf("---------------------\n");
for(j=0;j<rows;j++)
{
for(k=0;k<cols;k++)
{
printf("%d  \t ",arr[i][j][k]);
}
printf("\n");
}
}
}    
    
		
	
	

