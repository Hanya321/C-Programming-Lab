#include<stdio.h>
int main()
{int ib=5000,b,t,i,j;
do
{
	printf("Enter an amount for transaction(positive for deposit and negative for withdrawal): ");
	scanf("%d",&b);
	if(b!=0){
	if(b>0)
	{t=ib+(b);
	i++;
	}
	else
	{t=ib+(b);
	j++;
	}}
	printf("\nUpdated Balance=%d",t);
	
}while(b!=0);
printf("\nFinal Balance=%d",t);
printf("\nDeposit=%d",i);
printf("\nWithdrawal=%d",j);
return 0;
}
