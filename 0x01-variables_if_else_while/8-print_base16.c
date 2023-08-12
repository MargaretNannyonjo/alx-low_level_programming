#include <stdio.h>
/**
 * Description:main - Prints all the numbers of base 16 in lowercase
 * Return: 0 if success
 */
int main(void)
{
int i;
for (i = 48; i < 58; i++)
{
putchar(i);
}
for (i = 97; i < 103; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
