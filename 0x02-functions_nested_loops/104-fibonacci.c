#include <stdio.h>
/**
 * Description:main - finds and prints the first 98 Fibonacci numbers
 * Return:0 if success
 */
int main(void)
{
unsigned long int i = 0, a = 0, b = 1, next = 0;
while (i < 98)
{
next = a + b;
a = b;
b = next;
printf("%lu, ", next);
i++;
}
putchar('\n');
return (0);
}


