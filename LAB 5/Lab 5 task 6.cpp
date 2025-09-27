#include <stdio.h>
int main(){
int a;
int b;
int c;
printf("Enter the first number: ");
scanf("%d",&a);
printf("Enter the second number: ");
scanf("%d",&b);
printf("Enter the third number: ");
scanf("%d",&c);
a>b?a>c?printf("%d is the largest",a):printf("%d is the largest",c):b>c?printf("%d is the largest",b):printf("%d is largest",c);
return 0;
}

