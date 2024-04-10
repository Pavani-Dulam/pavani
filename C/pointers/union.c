#include<stdio.h>
union abc
{
  int a;
  char b;
}
  var;

  int main()
  {
  	var.a=65;
  	printf("%d",var.a);
  	printf("\n b=%c",var.b);
  	var.b='b';
  	printf("\n %d",var.a);
  	printf("\n %d",var.b);
  
}
