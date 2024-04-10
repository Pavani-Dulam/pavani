#include<stdio.h>
void main()
{
	int a,b,c,ch;
	printf("\n \t MENU");
	printf("\n \t[1] addition");
	printf("\n \t[2] substraction");
	printf("\n \t[3] multiplication");
	printf("\n \t[4] division");
	printf("\n \t[5] reminder");
	printf("\n t[6] larger out of two");
	printf("\n t[0] invalid");
	printf("\n \t enter your choice: ");
	scanf("%d",&ch);
	if(ch<=6&ch>0)
	{
	  printf("enter two numbers");
	  scanf("%d%d",&a,&b);  
    }
    switch(ch)
    {
    	case 1:
    	c=a+b;
    	printf("\n addition:%d",c);
    	break;
    	case 2:
    	c=a-b;
    	printf("\n substraction:%d",c);
    	break;
    	case 3:
    	c=a*b;
    	printf("\n multiplication:%d",c);
    	break;
    	case 4:
    	c=a/b;
    	printf("\n division:%d",c);
    	break;
    	case 5:
    	c=a%b;
    	printf("\n remainder:%d",c);
    	break;
    	case 6:
    	if(a>b)
    	printf("\n \t %d(a) is larger than %d(b)",a,b);
    	else
    	if(b>a)
    	printf("\n \t %d(b) is larger than %d(a)",a,b);
    	else
    	printf("\n \t %d(a) and %d(b) are same ");
    	break;
    	case 0:
    	printf("\n terminate by choice");
        
    	break;
    	default:
    	printf("\n invalid choice ");
    }
    	
    	
    	
    	
    	
    		

	      
	
	
	
	
}
