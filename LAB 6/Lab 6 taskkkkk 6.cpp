#include<stdio.h>
int main()
{int m,sum=0,a=0,b=0,c=0,d=0;
do{
printf("\nEnter you marks:");
scanf("%d",&m);
if(m>0)
{
if(m>=90)
printf("A");
else if(m>=80)
printf("B");
else if(m>=70)
printf("C");
else if(m>=60)
printf("D");
else
printf("F");}
else 
break;
sum+=m;
d++;
if(m>70)
a++;
else if(m>50 && m<70)
b++;
else
c++;
}while(m>0);
printf("Average=%d",sum/d);
printf("\nMarks greater than 70:%d",a);
printf("\nMarks greater than 50 but less that 70:%d",b);}
