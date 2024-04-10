/* simple interest*/
#include<stdio.h>
#include<conio.h>
void main()
{
  int p,t,r,si;
  printf("enter principle amount:");
  scanf("%d",&p);
  printf("enter time period:");
  scanf("%d",&t);
  printf("enter rate of interest");
  scanf("%d",&r);
  si=(p*t*r)/100;
  printf("enter the simple interest is %d",si);
  getch();
}
