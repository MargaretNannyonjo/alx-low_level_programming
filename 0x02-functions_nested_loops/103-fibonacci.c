#include <stdio.h>
/**
 * Description:main - generated by adding the previous two terms
 * Return:0 if success
 */
int main(void)
{
unsigned int i, j, k, next, sum;
j = 1;
k = 2;
sum = 0;
for (i = 0; i <= 33; ++i)
{
if (j < 40000000 && (j % 2) == 0)
{
sum = sum + j;
}
next = j + k;
j = k;
k = next;
}
printf("%u\n", sum);
return (0);
}
