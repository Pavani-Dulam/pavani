#include<stdio.h>
void main()
{
	printf(" \t D.pavani,s180283");
	printf("\n");
  int a;
  printf("\n \t MENU");
  printf("\n");
  printf("\n \t[1] sunday");
  printf("\n \t[2] monday");
  printf("\n \t[3] tuesday");
  printf("\n \t[4] wednseday");
  printf("\n \t[5] thursday");
  printf("\n \t[6] friday");
  printf("\n \t[7] saturday");
  printf("\n");
  printf("\n  enter your choice:");
  scanf("%d",&a);
   switch(a)
   {
   	case 1:
   	printf("\n \t sunday");
   	break;
   	case 2:
   	printf("\n \t monday");
   	break;
   	case 3:
   	printf("\n \t tuesday");
   	break;
   	case 4:
   	printf("\n \t wednseday");
   	break;
   	case 5:
   	printf("\n \t thursday ");
   	break;
   	case 6:
   	printf("\n \t friday");
   	break;
   	case 7:
   	printf("\n \t saturday");
   	break;
   	default:
   	printf("\n invalid choice");
   	
   }
  
  	
  
  
}
