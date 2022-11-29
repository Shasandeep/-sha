#include<stdio.h>
int main()
{
 float km,m,cm,i,ft;
 printf("Enter the kilometer:");
 scanf("%f",&km);
 m=km*1000;
 cm=m*100;
 i=cm/2.54;
 ft=i/12;
 printf("\nKM:%0.2f",km);
 printf("\nM:%0.2f",m);
 printf("\nCm:%0.2f",cm);
 printf("\nIn:%0.2f",i);
 printf("\nFt:%0.2f",ft);
 return 0;

}
