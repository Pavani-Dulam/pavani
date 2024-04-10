#include<stdio.h>
void main()
{
	int my;
	printf(" \t MENU");
	printf("\n \t[1] january");
	printf("\n \t[2] february");
	printf("\n \t[3] march");
	printf("\n \t[4] april");
	printf("\n \t[5] may");
	printf("\n \t[6] june");
	printf("\n \t[7] july");
	printf("\n \t[8] august");
	printf("\n \t[9] september");
	printf("\n \t[10] october");
	printf("\n \t[11] november");
	printf("\n \t[12] december");
	printf("\n \t enter your choice :");
	scanf("%d",&my);
	switch(my)
	{
		case 1:
		printf("\n january");
		break;
		case 2:
		printf("\n february");
		break;
		case 3:
		printf("\n march");
		break;
		case 4:
		printf("\n april");
		break;
		case 5:
		printf("\n may");
		break;
		case 6:
		printf("\n june");
		break;
		case 7:
		printf("\n july");
		break;
		case 8:
		printf("\n august");
		break;
		case 9:
		printf("\n september");
		break;
		case 10:
		printf("\n october");
		break;
		case 11:
		printf("\n november");
		break;
		case 12:
		printf("\n december");
		default:
		printf("\n invalid option");
		
	}
	
}
