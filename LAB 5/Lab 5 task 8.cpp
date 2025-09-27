#include<stdio.h>
int main()
{int a,b;
printf("Enter first number:");
scanf("%d",&a);
printf("Enter second number:");
scanf("%d",&b);
(a>b)?printf("\na>b:1 (True)"):printf("\na>b:0 (False)");
(a<b)?printf("\na<b:1 (True)"):printf("\na<b:0 (False)");
(a==b)?printf("\na==b:1 (True)"):printf("\na==b:0 (false)");
return 0;
}

