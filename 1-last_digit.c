#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* more headers goes there */

/* betty style doc for function main goes there */
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;
int last;

srand(time(0));
n = rand() - RAND_MAX / 2;
last = n % 10;
/* your code goes there */
if (last > 5)
{
printf("Last digit of %d is %d greater than 5\n", n, last);
}
else
{
if (last == 0)
{
printf("Last digit of %d is %d and is 0\n", n, last);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
}
}
return (0);
}
