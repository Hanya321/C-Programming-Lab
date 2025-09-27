#include<stdio.h>
int main()
{int pass,pass_define=123456;
printf("Enter a passcode:");
scanf("%d",&pass);
if(pass=pass_define)
printf("Access granted");
else
printf("Access denied");
return 0;
}

