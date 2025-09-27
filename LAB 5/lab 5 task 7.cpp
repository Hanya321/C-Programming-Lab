#include<stdio.h>
int main()
{int a,b,op;
printf("Enter first number:");
scanf("%d",&a);
printf("Enter second number:");
scanf("%d",&b);
printf("Enter an operator:");
scanf(" %c",&op);
switch(op)
{case '+':
	printf("Addition=%d",a+b);
	break;
case '-':
	printf("Subtraction=%d",a-b);
	break;
case '*':
	printf("Product=%d",a*b);
	break;
case '/':
	printf("Divide=%d",a/b);
	break;
case '%':
	printf("Remainder=%d",a%b);
	break;
default:
	printf("Invalid Operator");
}
return 0;
}

