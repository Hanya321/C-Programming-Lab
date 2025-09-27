#include <stdio.h>
int main(){
char g;
int c;
printf("Enter the course number:");
scanf("%d",&c);
printf("Enter the grade: ");
   scanf(" %c",&g);
   switch(c){
   case 1:
   case 2:
   case 3:
   switch(g){
   case 'A':
   case 'a':
   printf("Excellent");
   break;
   case 'B':
   case 'b':
   printf("Good");
   break;
   case 'C':
   case 'c':
   printf("Average grade");
   break;
   case 'D':
   case 'd':
   printf("Below Average");
   break;
 case 'F':
  case 'f':
   printf("Failed");
   break;
   default:
   printf("Invalid grade");}
  break;
 default:
   printf("Invalid course");
}}

