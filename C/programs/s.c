/*#include<stdio.h>
main()
{
char name1[7]={'s','a','t','e','e','s','h'};
printf("name1=",name1);*/
/*#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char arr1[9]={'w','e','l','c','o','m','e','\0'};
char arr2[9]="welcome";
char arr3[9]={{'w'},{'e'},{'l'},{'c'},{'o'},{'m'},{'e'}};

printf("\n array1=%s",arr1);
printf("\n array2=%s",arr2);
printf("\n array2=%s",arr3);
}*/
#include<stdio.h>
#include<string.h>
void main()
{
char text[20];
int len;
char copy;
printf("enter text here:");
scanf("%s",&text);
len=strlen(text);
strcpy(text);
printf("length of the string=%d",len);
printf("copy string %s",copy);


}



