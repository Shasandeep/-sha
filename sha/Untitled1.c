#include<stdio.h>
int main()
{
float bs,da,hra,gs;
printf("\n enter your gross salary :");
scanf("%f",&bs);
da=bs*0.5;
hra=bs*0.4;
gs=bs+da+hra;
printf("\n  gross salary : %0.2f",bs);
printf("\nDA : %0.2f",da);
printf("\nHRA : %0.2f",hra);
printf("\n basic salary : %0.2f", gs);
return 0;
}
