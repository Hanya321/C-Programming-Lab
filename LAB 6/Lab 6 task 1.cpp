#include<stdio.h>
int main()
{int num,c=0,b=0;
char ch;
do{
printf("Enter a number:");
scanf("%d",&num);
if(num%2!=0)
{
printf("Odd number");
c++;}
else
{
printf("Even number");
b++;}
printf("\nDo you want to cotinue the program(y/n):");
scanf(" %c",&ch);
}while(ch=='y');
printf("Number of odd number:%d",c);
printf("\nNumber of even number:%d",b);
}

