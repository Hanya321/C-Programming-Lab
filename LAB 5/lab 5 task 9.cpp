#include<stdio.h>
main(){
int n1;
int n2;
printf("Enter the first number: ");
scanf("%d",&n1);
printf("Enter the second number: ");
scanf("%d",&n2);
printf("\n%x",n1&n2);
printf("\n%x",n1|n2);
printf("\n%x",n1^n2);
printf("\n%x",~n1);
printf("\n%x",~n2);
printf("\n%x",n1>>2);
printf("\n%x",n1<<4);
printf("\n%x",n2>>2);
printf("\n%x",n2<<4);

}

