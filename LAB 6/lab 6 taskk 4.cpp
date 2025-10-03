#include<stdio.h>
int main()
{int num,c=0,b=0;
char ch,a;
do{
printf("Enter a alphabet:");
scanf(" %c",&a);
switch(a)
{case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
	printf("Vowel");
	c++;
	break;
default:
printf("Consonant");
b++;
}
printf("\nDo you want to cotinue the program(y/n):");
scanf(" %c",&ch);
}while(ch=='y');
printf("Number of vowels:%d",c);
printf("\nNumber of consonants:%d",b);}

