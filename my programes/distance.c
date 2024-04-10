/* distance between 2 cities*/
#include<stdio.h>
void main()
{
  int dist, meters=1000, centimeter=100000,a,b;
  float feets=3280.8,inches=39370,c,d;
  printf("enter distance between two cities");
  scanf("%d",&dist);
  a= dist* meters;
  printf("distance in meters %d \n",a);
  b=dist*centimeter;
  printf("distance in centimeters %d \n",b);
  c=dist*feets;
  printf("distance in feets %f \n",c);
  d=dist*inches; 
  printf("distance in inches %f \n", d);
  	
  

    
}
