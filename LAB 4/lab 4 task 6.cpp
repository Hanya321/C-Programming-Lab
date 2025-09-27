#include<stdio.h>
int main()
{int a,b;
char op;
printf("Enter two number:\n");
scanf("%d %d",&a,&b);
printf("Enter a operator(+, -, *, /):");
scanf(" %c",&op);
switch(op)
{case'+':
	printf("Sum=%d",a+b);
	break;
case'-':
	printf("Difference=%d",a-b);
	break;
case'*':
	printf("Product=%d",a*b);
	break;
case'/':
	printf("Quotient=%d",a/b);
default:
	printf("Invalid operator");

}
return 0;
}

