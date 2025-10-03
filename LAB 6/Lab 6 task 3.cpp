#include <stdio.h>
int main()
{int  a = 0, b = 1, next;
printf("Fibonacci Series: %d %d ", a, b);
   for (int i = 3; i <= 10; i++)
    {
    next = a + b;
    printf("%d ", next);
    a = b;
    b = next;
    }
       
    
return 0;
}

