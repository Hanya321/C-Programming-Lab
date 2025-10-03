#include<stdio.h>
int main()
{int num,a;
printf("Enter a number:");
scanf("%d",&num);
for(int i=2;i<=num;i++)
{{
    a= 1; 

for (int j = 2; j <= i / 2; j++)
{
    if (i % j == 0)
 {
    a = 0; 
    break;
 }}
}

   if (a)
    printf("%d ", i);
    }
}

