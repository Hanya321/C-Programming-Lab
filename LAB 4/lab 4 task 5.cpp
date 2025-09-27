#include<stdio.h>
int main()
{int a;
printf("Enter a number(1 for Red, 2 for Yellow, 3 for Green):");
scanf("%d",&a);
switch(a)
{case 1:
printf("Stop");
break;
case 2:
printf("Ready");
break;
case 3:
printf("Go");
break;
default:
printf("Invalid input");
}return 0;
}

