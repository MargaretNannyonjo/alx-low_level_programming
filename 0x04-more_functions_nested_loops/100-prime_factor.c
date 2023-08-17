#include <stdio.h>
#include "main.h"
/**
 * main - prints prime numbers
 * Return: 0 if success
 */
int main(void)
{
unsigned long int i, n = 612852475143;
for (i = 9; i < 782849; i = i + 2)
{
while ((n % i == 0) && (n != 1))
n = n / i;
}
printf("%lu\n", n);
return (0);
}
