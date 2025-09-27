#include<stdio.h>
main(){
int n1;
int n2;
int n3;
printf("Enter the first number: ");
scanf("%d",&n1);
printf("Enter the second number: ");
scanf("%d",&n2);
printf("Enter the third number: ");
scanf("%d",&n3);
if (n1>n2) 
{if(n1>n3)
printf("%d is the largest number ",n1);
else
printf("\n%d is the largest number",n3);}
else
{ if(n2>n3)
printf("\n%d is the largest number",n2);
else 
printf("\n%d is the largest number",n3);
}
return 0;
}

