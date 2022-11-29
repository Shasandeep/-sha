#include<stdio.h>

int main()

{
    float km,m,cm,ft,i;
    printf("enter the kilometer : ");
    scanf("%f",&km);
    m=km*1000;
    cm=m*100;
    i=cm/2.54;
    ft=i/12;
    printf("\n km :%f",km);
    printf("\n m  :%f", m);
    printf("\n cm :%f",cm);
    printf("\n  i :%f", i);
    printf("\n ft :%f",ft);
    return 0;
}
