#include<stdio.h>
int main()
{int x,y;
printf("Enter first number:");
scanf("%d",&x);
printf("Enter second number:");
scanf("%d",&y);
printf("\n%d",(x>5)&&(y<10));
printf("\n%d",(x==10)||(y==5));
printf("\n%d",!(x==y));
return 0;}

