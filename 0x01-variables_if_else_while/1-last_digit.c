#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - prints the last digit of a randomly generated number
*Return: always (0)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int i;
i = n % 10;
if (i > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, i);
}
if (i == 0)
{
printf("Last digit of %d is %d and less than 6 and not 0\n", n, i);
}
if (i < 6 && i != 0)
{
printf("Last digit of %d is %d and is 0\n", n, i);
}
return (0);
}
