#include<stdio.h>
int main()
{float mark;
printf("Enter your marks:");
scanf("%f",&mark);
if(mark>=90)
printf("A");
else if(mark>=80)
printf("B");
else if(mark>=70)
printf("C");
else if(mark>=60)
printf("D");
else
printf("F");
return 0;}

