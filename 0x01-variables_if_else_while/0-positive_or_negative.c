#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Description: main - Prints a positive, negative, or zero
 * Return: 0 if success
 */

int main(void)
{
int n;
    
srand(time(0));
n = rand() - RAND_MAX / 2;
/* Your code goes here */
if (n < 0)
{
printf("%d is %s\n", n, "negative");
}
else if (n > 0)
{
printf("%d is %s\n", n, "positive");
}
else
{
printf("%d is %s\n", n, "zero");
}
return (0);
}
