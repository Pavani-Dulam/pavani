// print strings using pointers
#include<stdio.h>
void main()
{
	char str[]="hello";
	char *pstr;
    pstr=str;
	while(*pstr!='\0')
	{
	printf("%c",*pstr);
	pstr++; 
    }
    
	
}
