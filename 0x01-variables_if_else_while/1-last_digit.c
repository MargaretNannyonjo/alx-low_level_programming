#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  * Description:main - Prints the last digit of the number
  * Return: 0 if success
  */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes here */
if (n > 5)
{
printf("%d is %s\n", n, "is greater than 5");
}
else if (n == 0)
{
printf("%d is %s\n", n, "is 0");
}
else 
{
printf("%d is %s\n", n, "is less than 6 and not 0");
}
return (0);
}
