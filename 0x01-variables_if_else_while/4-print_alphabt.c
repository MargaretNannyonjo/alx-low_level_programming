#include <stdio.h>
/**
 * Description:main - Prints the alphabet in lowercase
 * Return: 0 if success
 */
int main(void)
{
int i;
for (i = 97; i < 123; i++)
if (i != 101 && i !=113)
{
putchar(i);
}
putchar('\n');
return (0);
}

