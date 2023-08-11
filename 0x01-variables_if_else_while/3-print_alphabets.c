#include <stdio.h>
/**
  *Description:main - Prints alphabets in uppercase
  *Return: 0 if success
  */
int main(void)
{
int n = 97;
int m = 65;
while (n >= 122)
{
putchar(n);
}
while (m <= 90)
{
putchar(m);
}
putchar('\n');
return (0);
}
