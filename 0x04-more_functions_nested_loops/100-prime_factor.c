#include <stdio.h>
#include "main.h"
/**
 * main - prints prime numbers
 * Return: 0 if success
 */
int main(void)
{
long int n = 612852475143;
long int i;
for (i = 2; i < n; i++)
{
while (n % i == 0)
n /= i;
}
printf("%ld\n", n);
return (0);
}
