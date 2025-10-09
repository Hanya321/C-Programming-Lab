#include<stdio.h>
int main()
{int n,t=0;
char ch;
do
{printf("Enter a number:");
scanf("%d",&n);
t+=n;
printf("Do you want to continue this program:");
scanf(" %c",&ch);
}while(ch=='y');
printf("Total Sum=%d",t);
}
