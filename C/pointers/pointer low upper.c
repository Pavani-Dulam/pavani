// using pointer to read a string and then scans each character to the number of upper and lower case characterstics entered
#include<stdio.h>
void main()
{
	char str[100];
	int upper=0,lower=0;
	char *pstr;
	printf("\n enter the string:");
	gets(str);
	pstr=str;
	while(*pstr!='\0')
	{
	if (*pstr>='A' && *pstr<='Z' )
	upper++;
	else if (*pstr>='a' && *pstr<='z')
	lower++;
	
	pstr++;
	}
	printf("\n total no of upper case letters %d",upper);
	printf("\n total no of lower case letters %d",lower);
}
