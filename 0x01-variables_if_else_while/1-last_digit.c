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
int lastnum;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastnum = n % 10;
/* your code goes here */
if (lastnum > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastnum);
}
else if (n < 6 && n != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastnum);
}
else
{
printf("Last digit of %d is %d and is 0\n", n, lastnum);
}
return (0);
}
