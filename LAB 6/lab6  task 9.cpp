#include<stdio.h>
int main()
{int n,l,s;
char ch;
printf("Enter a number:");
scanf("%d",&n);
l=n;
s=n;
printf("Do you want to this program:");
scanf(" %c",&ch);
while(ch=='y')
{printf("Enter a number:");
scanf("%d",&n);
if(n>l)
l=n;
if(n<s)
s=n;
printf("Do you want to this program:");
scanf(" %c",&ch);
}
printf("Largest number=%d",l);
printf("\nSmallest number=%d",s);


}
